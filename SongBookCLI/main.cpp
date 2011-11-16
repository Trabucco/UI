#include <QtCore/QCoreApplication>
#include <iostream>
#include <fstream>
#include <sstream>
#include <dirent.h>
#include <cstdlib>
#include <QFile>
#include <QTextStream>
#include <QDebug>

using namespace std;

const char * songDir = "/home/juuso/biisit/"; //The song directory

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //List the files in the directory

    //Welcome message
    cout << "Welcome to the Songbook interface!" << endl;
    cout << "The files in the lyrics directory:" << endl;

    DIR *dir;
    struct dirent *ent;
            dir = opendir (songDir);
    if (dir != NULL) {

      /* print all the files and directories within directory */
      while ((ent = readdir (dir)) != NULL) {
          printf ("%s\n", ent->d_name);
      }
      closedir (dir);
    } else {
      /* could not open directory */
      perror ("");
      return EXIT_FAILURE;

}

    //Inputting and saving the file name

    string filename;
    cout << "--------------\n" << "Type the name of the file you want to see: (without .txt)\n";
    cin >> filename;

    filename = songDir + filename + ".txt";
    //cout << filename << endl;

    //Show the contents of the file

    const char * charFile = filename.c_str(); //convert from string to const char
    cout << "File shown: " << charFile << endl; //print the path to the file
    cout << "--------------\n" << endl;



    //The alternative filereading method
    /*
    std::ifstream in(charFile);

    std::stringstream buffer;
    buffer << in.rdbuf();

    std::string contents(buffer.str());

    cout << contents; //The actual printing of the file*/


/*
    //Yet another alternative
    FILE *in;
      char c;

      in = fopen(charFile, "r");
      if(in != NULL)
      {
        while((c = fgetc(in)) != EOF) putchar(c);

        fclose(in);
      }
      //Error message and ending the program
      else { printf("No such file!\nPlease run the program again.\n");
          return a.exec();
      }  */


    QFile file(charFile);
    QString line;

    if (file.open(QIODevice::ReadOnly))
    {
        QTextStream t( &file );
      while ( !t.atEnd() ) {
            line += t.readLine() + "\n";

        }//line += "--------------------\nHappy singing!\n";
      //Doesn't work properly on CLI version ("")

    }
    file.close();
    line += "\n--------------------\nHappy singing!\n";
    qDebug() << line;

    //cout << "--------------\n" << "Happy singing!" << endl; //Goodbye message
    //cout << "You can exit now." << endl;
    return a.exec();


}


