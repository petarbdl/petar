#include "getindex.h"

GetIndex::GetIndex(QObject *parent) : QObject(parent)
{
    _list = new QStringList();
    QFile myFile(":/countries.txt");
        if(myFile.open(QIODevice::ReadOnly))
        {
            QTextStream inText(&myFile);
            while(!inText.atEnd())
            {
                QString line = inText.readLine();
                QStringList tmp = line.split(",");
                QString countryPrefix =tmp.at(1).trimmed();//Country Prefix

                _list->append(countryPrefix);
            }
            myFile.close();
        }
}

int GetIndex::getIndex(QString arg1)
{
        QString tmpString;
        //This if/else checks user input, it allows the user to enter number with +
        if(arg1 != "" && arg1.at(0) == "+")
        {
            tmpString = arg1.mid(1,arg1.length());
        }
        else if(arg1!="")
        {
            tmpString = arg1;
        }

        //Returns -1 in these three cases
        if(arg1 == " " || arg1=="+" || arg1 == "")
        {
            return -1;
        }
        //Find the right index to return
        if(arg1.size()>=1)
        {
            for(int i=3;i>0;i--)
            {
                QString tmpArg = tmpString.mid(0,i);
                int tmpIndexArg = _list->indexOf(tmpArg);
                if(tmpIndexArg!=-1)
                {
                    return tmpIndexArg;
                }
            }
        }
        //Any other input by user, -1 is returned
        return -1;

}
