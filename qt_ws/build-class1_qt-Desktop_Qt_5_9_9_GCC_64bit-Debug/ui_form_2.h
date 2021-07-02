/********************************************************************************
** Form generated from reading UI file 'form_2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_2_H
#define UI_FORM_2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_2
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *Form_2)
    {
        if (Form_2->objectName().isEmpty())
            Form_2->setObjectName(QStringLiteral("Form_2"));
        Form_2->resize(452, 389);
        verticalLayout = new QVBoxLayout(Form_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(Form_2);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);

        verticalLayout->addWidget(label);

        textBrowser = new QTextBrowser(Form_2);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout->addWidget(textBrowser);


        retranslateUi(Form_2);

        QMetaObject::connectSlotsByName(Form_2);
    } // setupUi

    void retranslateUi(QWidget *Form_2)
    {
        Form_2->setWindowTitle(QApplication::translate("Form_2", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Form_2", "                       \346\223\215\344\275\234\350\257\264\346\230\216", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("Form_2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu';\">1.\345\256\214\346\210\220\346\227\240\344\272\272\350\275\246\350\267\257\345\276\204\350\247\204\345\210\222\344\270\216\346\216\247\345\210\266\345\256\236\351\252\214\351\234\200\344\276\235\346\254\241\347\202\271\345\207\2731\342\200\2248\345\272\217\345\217\267\346\214\211\351\222\256\357\274\214\345\234\250\347\202\271\345\207\273\347\254\2543\346\255\245\345\220\216\357\274\214\351\234\200\351\235\231\347\275\256\347\272\246\345\215\212\345\210\206\351\222\237\357\274\214\344\275\277IMU\346\225\260\346\215\256\347\250"
                        "\263\345\256\232\357\274\214\344\271\213\345\220\216\346\211\247\350\241\214\347\254\2544\346\255\245\357\274\214\347\254\2545\346\255\245\346\243\200\346\237\245\346\227\240\350\257\257\345\220\216\347\273\247\347\273\255\346\211\247\350\241\214\345\220\216\347\273\255\346\255\245\351\252\244\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu';\">2.\351\200\232\350\277\207\345\256\236\346\227\266\350\212\202\347\202\271\345\205\263\347\263\273\345\217\257\350\260\203\347\224\250rqt_graph\346\237\245\347\234\213\345\275\223\345\211\215\350\212\202\347\202\271\344\270\216\350\257\235\351\242\230\345\205\263\347\263\273\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu';\">3.\344\270\200\351\224\256\345\220\257\345\212\250\345\217\257\350\260\203\347\224"
                        "\250\345\220\257\345\212\250\350\204\232\346\234\254\357\274\214\345\256\236\347\216\260\350\207\252\344\270\273\345\220\257\345\212\250\347\250\213\345\272\217\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu';\">4.\346\234\254\351\241\271\347\233\256\346\232\202\344\270\215\346\224\257\346\214\201\350\207\252\344\270\273\350\276\223\345\205\245\345\234\260\345\233\276\345\222\214\351\200\211\346\213\251\347\233\256\346\240\207\347\202\271\343\200\202</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Form_2: public Ui_Form_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_2_H
