#include <iostream>
#include <QFileInfoList>
#include <QFileInfo>
#include <QDir>
#include <QDebug>
#include <QDateTime>
#include <QtAlgorithms>

using namespace std;

bool lastRead(const QFileInfo &file1, const QFileInfo &file2);

int main()
{
    qint64 size = 0;//qint64 to keep size return value
    //HardCoded path to file
    QDir myDir("C:/Users/Petar/Downloads/petar-master (1)/petar-master/QtProekt1_corrected");
    //if Directory exists
    if(myDir.exists())
    {
        //Get Directory files info
        QFileInfoList filesList = myDir.entryInfoList();
        //Go through QFileInfoList and sum the size of each file
        foreach (QFileInfo fileInfo, filesList)
        {
            size += fileInfo.size();
        }
        //Sorting nodes in filesLista by lastRead parametar, and returning them to filesLista
        qStableSort(filesList.begin(),filesList.end(), lastRead);
        //Here Set your limit size
        int limitSize = 1024*1024*2;
        //In this while loop, delete lastRead files till you get to the limit size of Directory
        while(size>limitSize)
        {
            //remove first file from the list and from the directory
            if(filesList.size() > 0)
            {
                //Reduce size by size of the file that was just removed
                size-=filesList.first().size();
                //Remove file from directory
                myDir.remove(filesList.first().fileName());
                //Remove the first file from fileList 
                filesList.removeFirst();
               
            }
        }
    }
    else
    {
        //if File doesn't exsists
        qDebug() << "Your directory doesn't exsists";
    }

    return 0;
}
//Function for my sort alghorithm
bool lastRead(const QFileInfo &file1, const QFileInfo &file2)
{
    return file1.lastRead()<file2.lastRead();
}
