/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_2;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox_device;
    QPushButton *pushButton_search;
    QPushButton *pushButton_connect;
    QPushButton *pushButton_device_info;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_clean_tx;
    QPushButton *pushButton_clean_rx;
    QCheckBox *checkBox_auto_new_line;
    QCheckBox *checkBox_show_hex;
    QCheckBox *checkBox_hex_send;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_send;
    QTextEdit *textEdit_tx;
    QTextBrowser *textBrowser_rx;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(853, 607);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_2->addWidget(pushButton_2, 1, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(150, 200));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        comboBox_device = new QComboBox(groupBox);
        comboBox_device->setObjectName(QString::fromUtf8("comboBox_device"));

        verticalLayout->addWidget(comboBox_device);

        pushButton_search = new QPushButton(groupBox);
        pushButton_search->setObjectName(QString::fromUtf8("pushButton_search"));

        verticalLayout->addWidget(pushButton_search);

        pushButton_connect = new QPushButton(groupBox);
        pushButton_connect->setObjectName(QString::fromUtf8("pushButton_connect"));

        verticalLayout->addWidget(pushButton_connect);

        pushButton_device_info = new QPushButton(groupBox);
        pushButton_device_info->setObjectName(QString::fromUtf8("pushButton_device_info"));

        verticalLayout->addWidget(pushButton_device_info);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(150, 200));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton_clean_tx = new QPushButton(groupBox_2);
        pushButton_clean_tx->setObjectName(QString::fromUtf8("pushButton_clean_tx"));

        verticalLayout_2->addWidget(pushButton_clean_tx);

        pushButton_clean_rx = new QPushButton(groupBox_2);
        pushButton_clean_rx->setObjectName(QString::fromUtf8("pushButton_clean_rx"));

        verticalLayout_2->addWidget(pushButton_clean_rx);

        checkBox_auto_new_line = new QCheckBox(groupBox_2);
        checkBox_auto_new_line->setObjectName(QString::fromUtf8("checkBox_auto_new_line"));

        verticalLayout_2->addWidget(checkBox_auto_new_line);

        checkBox_show_hex = new QCheckBox(groupBox_2);
        checkBox_show_hex->setObjectName(QString::fromUtf8("checkBox_show_hex"));

        verticalLayout_2->addWidget(checkBox_show_hex);

        checkBox_hex_send = new QCheckBox(groupBox_2);
        checkBox_hex_send->setObjectName(QString::fromUtf8("checkBox_hex_send"));

        verticalLayout_2->addWidget(checkBox_hex_send);


        verticalLayout_3->addWidget(groupBox_2);


        gridLayout_2->addLayout(verticalLayout_3, 2, 0, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_2->addWidget(pushButton, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 2, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 1);

        pushButton_send = new QPushButton(centralWidget);
        pushButton_send->setObjectName(QString::fromUtf8("pushButton_send"));
        pushButton_send->setMinimumSize(QSize(0, 50));

        gridLayout->addWidget(pushButton_send, 5, 0, 1, 1);

        textEdit_tx = new QTextEdit(centralWidget);
        textEdit_tx->setObjectName(QString::fromUtf8("textEdit_tx"));

        gridLayout->addWidget(textEdit_tx, 4, 0, 1, 1);

        textBrowser_rx = new QTextBrowser(centralWidget);
        textBrowser_rx->setObjectName(QString::fromUtf8("textBrowser_rx"));

        gridLayout->addWidget(textBrowser_rx, 3, 0, 1, 2);


        gridLayout_2->addLayout(gridLayout, 2, 1, 1, 2);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\344\277\241\346\201\257", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\350\256\276\345\244\207", nullptr));
        pushButton_search->setText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        pushButton_connect->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245", nullptr));
        pushButton_device_info->setText(QCoreApplication::translate("MainWindow", "\350\256\276\345\244\207\344\277\241\346\201\257", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\346\223\215\344\275\234", nullptr));
        pushButton_clean_tx->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\345\217\221\351\200\201", nullptr));
        pushButton_clean_rx->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\346\216\245\346\224\266", nullptr));
        checkBox_auto_new_line->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\212\250\346\215\242\350\241\214", nullptr));
        checkBox_show_hex->setText(QCoreApplication::translate("MainWindow", "16\350\277\233\345\210\266\346\230\276\347\244\272", nullptr));
        checkBox_hex_send->setText(QCoreApplication::translate("MainWindow", "16\350\277\233\345\210\266\345\217\221\351\200\201", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\346\216\247\345\210\266", nullptr));
        pushButton_send->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        textEdit_tx->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">123</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
