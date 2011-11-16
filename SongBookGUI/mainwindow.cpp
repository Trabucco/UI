#include <QFileDialog>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include "QTextStream"
#include "dirent.h"
#include "string"
#include "QListWidgetItem"


const char * sourceDir = ""; //Setting the constant program directory
std::string pathToFile = sourceDir;
QListWidgetItem testItem;
QStringList list;
//QList widgetList;



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    directory("/")
{
    ui->setupUi(this);
    this->showFiles();
    connect(ui->pushButton , SIGNAL(clicked()), this, SLOT(browseFiles()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::showFiles()
{
    QDir dir(sourceDir);
    list = dir.entryList();

    int i = 0;
    QString curr;
    while (i < list.size())
    {
        curr = list[i];
        if(curr.endsWith(".txt"))
        {
            ui->lyricsBrowser->addItem(new QListWidgetItem(curr));
        }
        i++;
    }
}


void MainWindow::browseFiles()
{

    QString path = QFileDialog::getOpenFileName(this, tr("Open file"),
                                                "",tr("Files(*.txt)"));
    if (path.isNull() == false)
    {
        directory.setPath(path);
    }

    QFile file(path);
    QString line;

    if (file.open(QIODevice::ReadOnly))
    {
        QTextStream t( &file );
        while ( !t.atEnd() ) {
            line += t.readLine() + "\n";

        }line += "--------------------\nHappy singing!\n";
    }
    file.close();

    ui->lyricsViewer->setText(line); //Showing the actual contents of the file
}

