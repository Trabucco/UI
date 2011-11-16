/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed Nov 16 11:19:00 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QLabel *viewerText;
    QLabel *browserText;
    QTextBrowser *lyricsViewer;
    QPushButton *pushButton;
    QListWidget *lyricsBrowser;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(467, 290);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/kuvia/musical_note_nicu_bucule_01.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        centralWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(223, 223, 223);"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        viewerText = new QLabel(centralWidget);
        viewerText->setObjectName(QString::fromUtf8("viewerText"));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier 10 Pitch"));
        font.setUnderline(true);
        viewerText->setFont(font);

        gridLayout->addWidget(viewerText, 0, 0, 1, 1);

        browserText = new QLabel(centralWidget);
        browserText->setObjectName(QString::fromUtf8("browserText"));
        browserText->setFont(font);

        gridLayout->addWidget(browserText, 0, 1, 1, 1);

        lyricsViewer = new QTextBrowser(centralWidget);
        lyricsViewer->setObjectName(QString::fromUtf8("lyricsViewer"));
        lyricsViewer->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(lyricsViewer, 1, 0, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Courier 10 Pitch"));
        pushButton->setFont(font1);
        pushButton->setFlat(false);

        gridLayout->addWidget(pushButton, 2, 0, 1, 2);

        lyricsBrowser = new QListWidget(centralWidget);
        lyricsBrowser->setObjectName(QString::fromUtf8("lyricsBrowser"));

        gridLayout->addWidget(lyricsBrowser, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SongBook", 0, QApplication::UnicodeUTF8));
        viewerText->setText(QApplication::translate("MainWindow", "Lyrics Viewer", 0, QApplication::UnicodeUTF8));
        browserText->setText(QApplication::translate("MainWindow", "Lyrics Browser", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("MainWindow", "Click here to browse for .txt files on your device.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("MainWindow", "Browse for lyrics", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
