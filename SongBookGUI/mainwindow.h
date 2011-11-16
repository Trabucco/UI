#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include <QDir>
#include <QListWidgetItem>


namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void browseFiles();
    void showFiles();

private:
    Ui::MainWindow *ui;
    QDir directory;
};

#endif // MAINWINDOW_H
