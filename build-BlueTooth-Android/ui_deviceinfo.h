/********************************************************************************
** Form generated from reading UI file 'deviceinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICEINFO_H
#define UI_DEVICEINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_deviceInfo
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;

    void setupUi(QDialog *deviceInfo)
    {
        if (deviceInfo->objectName().isEmpty())
            deviceInfo->setObjectName(QString::fromUtf8("deviceInfo"));
        deviceInfo->resize(400, 367);
        gridLayout = new QGridLayout(deviceInfo);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textBrowser = new QTextBrowser(deviceInfo);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        gridLayout->addWidget(textBrowser, 0, 0, 1, 1);

        pushButton = new QPushButton(deviceInfo);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);


        retranslateUi(deviceInfo);

        QMetaObject::connectSlotsByName(deviceInfo);
    } // setupUi

    void retranslateUi(QDialog *deviceInfo)
    {
        deviceInfo->setWindowTitle(QCoreApplication::translate("deviceInfo", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("deviceInfo", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deviceInfo: public Ui_deviceInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICEINFO_H
