/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QGridLayout *gridLayout;
    QPushButton *pushButton_9;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_11;
    QPushButton *pushButton_8;
    QPushButton *pushButton_10;
    QLabel *label_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_12;
    QPushButton *open_new_btn2;
    QPushButton *pushButton;
    QPushButton *open_new_btn;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(426, 405);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setMaximumSize(QSize(1000, 50));

        verticalLayout->addWidget(textBrowser);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        gridLayout->addWidget(pushButton_9, 0, 0, 1, 1);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        gridLayout->addWidget(pushButton_6, 1, 1, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 2, 0, 1, 1);

        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));

        gridLayout->addWidget(pushButton_11, 2, 1, 1, 1);

        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        gridLayout->addWidget(pushButton_8, 3, 0, 1, 1);

        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));

        gridLayout->addWidget(pushButton_10, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_2->addLayout(verticalLayout);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));

        gridLayout_2->addWidget(pushButton_12, 0, 0, 1, 1);

        open_new_btn2 = new QPushButton(centralwidget);
        open_new_btn2->setObjectName(QStringLiteral("open_new_btn2"));

        gridLayout_2->addWidget(open_new_btn2, 0, 1, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_2->addWidget(pushButton, 0, 2, 1, 1);

        open_new_btn = new QPushButton(centralwidget);
        open_new_btn->setObjectName(QStringLiteral("open_new_btn"));

        gridLayout_2->addWidget(open_new_btn, 1, 0, 1, 1);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout_2->addWidget(pushButton_4, 1, 1, 1, 1);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        gridLayout_2->addWidget(pushButton_7, 1, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 426, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-weight:600; color:#f57900;\">**\346\227\240\344\272\272\350\275\246\350\267\257\345\276\204\350\247\204\345\210\222\344\270\216\346\216\247\345\210\266\345\256\236\351\252\214**</span></p></body></html>", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "1. roscore", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "5. \345\235\220\346\240\207\347\263\273\346\243\200\346\237\245", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "2. \350\266\205\345\243\260\346\263\242\345\220\257\345\212\250", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "6. \346\227\240\344\272\272\350\275\246\345\220\257\345\212\250", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "3. \347\273\204\345\220\210\345\257\274\350\210\252\345\205\203\344\273\266\345\220\257\345\212\250", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("MainWindow", "7. \350\277\236\346\216\245\346\227\240\344\272\272\350\275\246\344\270\216\350\267\257\345\276\204\350\247\204\345\210\222\345\231\250", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "4. \345\235\220\346\240\207\347\263\273\350\275\254\346\215\242\345\220\257\345\212\250", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("MainWindow", "8. \345\220\257\345\212\250\350\247\204\345\210\222", Q_NULLPTR));
        label_2->setText(QString());
        pushButton_12->setText(QApplication::translate("MainWindow", "\345\256\236\346\227\266\350\212\202\347\202\271\345\205\263\347\263\273", Q_NULLPTR));
        open_new_btn2->setText(QApplication::translate("MainWindow", "\350\257\264\346\230\216", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\344\270\200\351\224\256\345\220\257\345\212\250", Q_NULLPTR));
        open_new_btn->setText(QApplication::translate("MainWindow", "\350\212\202\347\202\271\345\205\263\347\263\273\347\244\272\344\276\213", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "\350\257\235\351\242\230\345\210\227\350\241\250", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "RVIZ\345\217\257\350\247\206\345\214\226", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
