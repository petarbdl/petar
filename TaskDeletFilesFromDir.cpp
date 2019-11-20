#include <iostream>
#include <QFileInfoList>
#include <QFileInfo>
#include <QDir>
#include <QDebug>
#include <QDateTime>

using namespace std;

int main()
{
    qint64 size = 0;//qint64 to keep size return value
    int flag = 0;
    //HardCoded path to file
    QDir myDir("C:/Users/Petar/Downloads/petar-master/petar-master/QtProekt1_corrected");
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
        //Here Set your limit size
        int limitSize = 1024*1024*2;
        //In this while loop, delete lastRead files till you get to the limit size of Directory
        while(size>limitSize)
        {
            QDateTime minTime = filesList.at(0).lastRead();
            QFileInfo minFile = filesList.at(0);
            //Find the last read file in the directory
            foreach (QFileInfo fileInfo, filesList)
            {
                QDateTime fileDate = fileInfo.lastRead();

                if(minTime>fileDate)
                {
                    minTime = fileDate;
                    minFile = fileInfo;
                    //set flag to one
                    flag=1;
                }
            }

            if(flag && size>limitSize)
            {
                //remove minFile from the list and from the directory
                filesList.removeOne(minFile);
                myDir.remove(minFile.fileName());
                //set the flag to zero
                flag=0;
            }

            size-=minFile.size();
        }
    }
    else
    {
        //if File doesn't exsists
        qDebug() << "Your directory doesn't exsists";
    }

    return 0;
}
