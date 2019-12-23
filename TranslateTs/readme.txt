1.The JS that is used to translate Qt files with extension .ts isdownloaded from
	*Original source: https://github.com/esutton/i18n-translate-qt-ts.git i18n-translate-qt-ts/source;
	
2. The JS script is executed  with Node.js Command Prompt
	*Link to download Node.js: https://nodejs.org/en/download/;
	
3.Commands used is Node.js Command Prompt:
	-git clone https://github.com/esutton/i18n-translate-qt-ts.git i18n-translate-qt-ts/source;(First Download source file from GitHub)
	-cd i18n-translate-qt-ts/source;(Then change directory to the parent folder of the newly downloaded file)
	-npm install -g;(This installs the script);
	
4.To use this JS script just write this in command line
	-> node index.js <googleTranslateApiKey> <workingFolder> <inputLanguage>	
<googleTranslateApiKey> - Your commercial Google Translate API key
<workingFolder> - Folder containing your Qt *.ts files
<sourceLanguage> - Source strings language abbreviation, for example, 'en', usually the source language is English so just leave it English.
This <sourceLanguage> is actually the language in witch Qt generates the Ts file. 

5.You can get Google Translate API from the official google cloud site(https://cloud.google.com/).
	-First You need to login and create free trial account.
	-Then follow this tutorial on how to get the Google Translate API (https://help.memsource.com/hc/en-us/articles/115003461051-Google-Translate-API-Key)
	-Google-Translate-API-Key looks like this (AIzaSyBlgFpBMsXeSh8W9S95Hx4QWXXXXXXXXXXXXXX), this is real Google-Translate-API-Key
	
6.Next get the all the .Ts files that you want to translate. Put them in local folder ex.(test/simple/unfinished, in parent directory i18n-translate-qt-ts\source, so the whole path will be: C:\Users\Petar\i18n-translate-qt-ts\source\test/simple/unfinished)

6.5 To use the script all you need to do is run Node.js, "cd" to "i18n-translate-qt-ts\source" and follow next steps.

7.Then to assign the Language that you want the TS file to be translated to, open the .TS file with editor (Notepad, Notepad ++)
 and change the Third line, property "language" (<TS version="2.0" language="en">), to the language you want to be translated(es,de,fr and ect.). Save it;
 
8.To tell the script which lines you want to be translated change <translation>*...*</translation> to <translation type="unfinished"></translation> in the .TS file
 
9. In Node.js Commpand Prompt call the script
	node index.js AIzaSyBlgFpBMsXeSh8W9S95Hx4QWXXXXXXXXXXXXXXXXX test/simple/unfinished en
	
10. When I tested this script I noticed that if <translation></translation> segment haves "html expresions" the script fires Warning and it doesn't translates the line
 
