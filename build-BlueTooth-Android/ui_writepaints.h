/********************************************************************************
** Form generated from reading UI file 'writepaints.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WRITEPAINTS_H
#define UI_WRITEPAINTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WritePaints
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QMenu *menu1;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *WritePaints)
    {
        if (WritePaints->objectName().isEmpty())
            WritePaints->setObjectName(QString::fromUtf8("WritePaints"));
        WritePaints->resize(898, 599);
        centralwidget = new QWidget(WritePaints);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        WritePaints->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WritePaints);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 898, 22));
        menu1 = new QMenu(menubar);
        menu1->setObjectName(QString::fromUtf8("menu1"));
        WritePaints->setMenuBar(menubar);
        statusbar = new QStatusBar(WritePaints);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        WritePaints->setStatusBar(statusbar);
        toolBar = new QToolBar(WritePaints);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        WritePaints->addToolBar(Qt::LeftToolBarArea, toolBar);

        menubar->addAction(menu1->menuAction());

        retranslateUi(WritePaints);
        QObject::connect(pushButton, SIGNAL(clicked()), WritePaints, SLOT(close()));

        QMetaObject::connectSlotsByName(WritePaints);
    } // setupUi

    void retranslateUi(QMainWindow *WritePaints)
    {
        WritePaints->setWindowTitle(QCoreApplication::translate("WritePaints", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("WritePaints", "\350\277\224\345\233\236", nullptr));
        menu1->setTitle(QCoreApplication::translate("WritePaints", "1", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("WritePaints", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WritePaints: public Ui_WritePaints {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WRITEPAINTS_H
