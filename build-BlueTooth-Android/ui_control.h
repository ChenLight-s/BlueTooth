/********************************************************************************
** Form generated from reading UI file 'control.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROL_H
#define UI_CONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Control
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_10;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *Run_Speed;
    QSlider *hRun_Speed;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *Contrl_Step;
    QSlider *hContrl_Step;
    QGridLayout *gridLayout;
    QPushButton *pushButton_YUp;
    QPushButton *pushButton_XDown;
    QPushButton *pushButton_ToOri;
    QPushButton *pushButton_XUp;
    QPushButton *pushButton_YDwon;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_6;
    QPushButton *pushButton_ZUp;
    QPushButton *pushButton_ZDown;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *ZContrl_Step;
    QSlider *hZContrl_Step;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLineEdit *Contrl_Laser;
    QSlider *hContrl_Laser;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_SetOri;
    QPushButton *pushButton_Laser;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Control)
    {
        if (Control->objectName().isEmpty())
            Control->setObjectName(QString::fromUtf8("Control"));
        Control->resize(949, 1015);
        gridLayout_2 = new QGridLayout(Control);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(Control);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(0, 40));
        QFont font;
        font.setPointSize(20);
        label_5->setFont(font);

        horizontalLayout_5->addWidget(label_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        pushButton_10 = new QPushButton(Control);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setMinimumSize(QSize(200, 40));

        horizontalLayout_5->addWidget(pushButton_10);


        verticalLayout_9->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(Control);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 40));

        verticalLayout_3->addWidget(label_3);

        Run_Speed = new QLineEdit(Control);
        Run_Speed->setObjectName(QString::fromUtf8("Run_Speed"));
        Run_Speed->setMinimumSize(QSize(0, 40));

        verticalLayout_3->addWidget(Run_Speed);

        hRun_Speed = new QSlider(Control);
        hRun_Speed->setObjectName(QString::fromUtf8("hRun_Speed"));
        hRun_Speed->setMinimumSize(QSize(0, 30));
        hRun_Speed->setMaximum(8000);
        hRun_Speed->setSingleStep(100);
        hRun_Speed->setPageStep(1000);
        hRun_Speed->setValue(3000);
        hRun_Speed->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(hRun_Speed);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Control);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 40));

        verticalLayout->addWidget(label);

        Contrl_Step = new QLineEdit(Control);
        Contrl_Step->setObjectName(QString::fromUtf8("Contrl_Step"));
        Contrl_Step->setMinimumSize(QSize(0, 40));

        verticalLayout->addWidget(Contrl_Step);

        hContrl_Step = new QSlider(Control);
        hContrl_Step->setObjectName(QString::fromUtf8("hContrl_Step"));
        hContrl_Step->setMinimumSize(QSize(0, 30));
        hContrl_Step->setMaximum(500);
        hContrl_Step->setValue(20);
        hContrl_Step->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(hContrl_Step);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_5->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_YUp = new QPushButton(Control);
        pushButton_YUp->setObjectName(QString::fromUtf8("pushButton_YUp"));
        pushButton_YUp->setMinimumSize(QSize(0, 80));

        gridLayout->addWidget(pushButton_YUp, 0, 1, 1, 1);

        pushButton_XDown = new QPushButton(Control);
        pushButton_XDown->setObjectName(QString::fromUtf8("pushButton_XDown"));
        pushButton_XDown->setMinimumSize(QSize(0, 80));

        gridLayout->addWidget(pushButton_XDown, 1, 0, 1, 1);

        pushButton_ToOri = new QPushButton(Control);
        pushButton_ToOri->setObjectName(QString::fromUtf8("pushButton_ToOri"));
        pushButton_ToOri->setMinimumSize(QSize(0, 80));

        gridLayout->addWidget(pushButton_ToOri, 1, 1, 1, 1);

        pushButton_XUp = new QPushButton(Control);
        pushButton_XUp->setObjectName(QString::fromUtf8("pushButton_XUp"));
        pushButton_XUp->setMinimumSize(QSize(0, 80));

        gridLayout->addWidget(pushButton_XUp, 1, 2, 1, 1);

        pushButton_YDwon = new QPushButton(Control);
        pushButton_YDwon->setObjectName(QString::fromUtf8("pushButton_YDwon"));
        pushButton_YDwon->setMinimumSize(QSize(0, 80));

        gridLayout->addWidget(pushButton_YDwon, 2, 1, 1, 1);


        verticalLayout_5->addLayout(gridLayout);


        horizontalLayout_4->addLayout(verticalLayout_5);


        verticalLayout_9->addLayout(horizontalLayout_4);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        pushButton_ZUp = new QPushButton(Control);
        pushButton_ZUp->setObjectName(QString::fromUtf8("pushButton_ZUp"));
        pushButton_ZUp->setMinimumSize(QSize(150, 120));

        verticalLayout_6->addWidget(pushButton_ZUp);

        pushButton_ZDown = new QPushButton(Control);
        pushButton_ZDown->setObjectName(QString::fromUtf8("pushButton_ZDown"));
        pushButton_ZDown->setMinimumSize(QSize(150, 120));

        verticalLayout_6->addWidget(pushButton_ZDown);


        horizontalLayout_2->addLayout(verticalLayout_6);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(Control);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 40));

        verticalLayout_2->addWidget(label_2);

        ZContrl_Step = new QLineEdit(Control);
        ZContrl_Step->setObjectName(QString::fromUtf8("ZContrl_Step"));
        ZContrl_Step->setMinimumSize(QSize(0, 40));

        verticalLayout_2->addWidget(ZContrl_Step);

        hZContrl_Step = new QSlider(Control);
        hZContrl_Step->setObjectName(QString::fromUtf8("hZContrl_Step"));
        hZContrl_Step->setMinimumSize(QSize(0, 30));
        hZContrl_Step->setMaximum(20);
        hZContrl_Step->setPageStep(1);
        hZContrl_Step->setValue(1);
        hZContrl_Step->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(hZContrl_Step);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_8->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_4 = new QLabel(Control);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(0, 40));

        verticalLayout_4->addWidget(label_4);

        Contrl_Laser = new QLineEdit(Control);
        Contrl_Laser->setObjectName(QString::fromUtf8("Contrl_Laser"));
        Contrl_Laser->setMinimumSize(QSize(0, 40));

        verticalLayout_4->addWidget(Contrl_Laser);

        hContrl_Laser = new QSlider(Control);
        hContrl_Laser->setObjectName(QString::fromUtf8("hContrl_Laser"));
        hContrl_Laser->setMinimumSize(QSize(0, 30));
        hContrl_Laser->setMinimum(30);
        hContrl_Laser->setMaximum(1000);
        hContrl_Laser->setSingleStep(10);
        hContrl_Laser->setPageStep(100);
        hContrl_Laser->setSliderPosition(30);
        hContrl_Laser->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(hContrl_Laser);


        verticalLayout_8->addLayout(verticalLayout_4);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_SetOri = new QPushButton(Control);
        pushButton_SetOri->setObjectName(QString::fromUtf8("pushButton_SetOri"));
        pushButton_SetOri->setMinimumSize(QSize(0, 80));

        horizontalLayout_3->addWidget(pushButton_SetOri);

        pushButton_Laser = new QPushButton(Control);
        pushButton_Laser->setObjectName(QString::fromUtf8("pushButton_Laser"));
        pushButton_Laser->setMinimumSize(QSize(0, 80));

        horizontalLayout_3->addWidget(pushButton_Laser);


        verticalLayout_7->addLayout(horizontalLayout_3);


        verticalLayout_8->addLayout(verticalLayout_7);


        verticalLayout_9->addLayout(verticalLayout_8);


        gridLayout_2->addLayout(verticalLayout_9, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);


        retranslateUi(Control);
        QObject::connect(pushButton_10, SIGNAL(clicked()), Control, SLOT(close()));

        QMetaObject::connectSlotsByName(Control);
    } // setupUi

    void retranslateUi(QWidget *Control)
    {
        Control->setWindowTitle(QCoreApplication::translate("Control", "Form", nullptr));
        label_5->setText(QCoreApplication::translate("Control", "\346\216\247\345\210\266\345\217\260", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Control", "\350\277\224\345\233\236", nullptr));
        label_3->setText(QCoreApplication::translate("Control", "XY\346\255\245\350\277\233\351\200\237\345\272\246", nullptr));
        Run_Speed->setText(QCoreApplication::translate("Control", "1000", nullptr));
        label->setText(QCoreApplication::translate("Control", "XY\346\255\245\350\277\233\350\267\235\347\246\273", nullptr));
        Contrl_Step->setText(QCoreApplication::translate("Control", "10", nullptr));
        pushButton_YUp->setText(QCoreApplication::translate("Control", "Y+", nullptr));
        pushButton_XDown->setText(QCoreApplication::translate("Control", "X-", nullptr));
        pushButton_ToOri->setText(QCoreApplication::translate("Control", "\345\233\236\345\275\222\345\216\237\347\202\271", nullptr));
        pushButton_XUp->setText(QCoreApplication::translate("Control", "X+", nullptr));
        pushButton_YDwon->setText(QCoreApplication::translate("Control", "Y-", nullptr));
        pushButton_ZUp->setText(QCoreApplication::translate("Control", "Z+", nullptr));
        pushButton_ZDown->setText(QCoreApplication::translate("Control", "Z-", nullptr));
        label_2->setText(QCoreApplication::translate("Control", "Z\346\255\245\350\277\233\350\267\235\347\246\273", nullptr));
        ZContrl_Step->setText(QCoreApplication::translate("Control", "1", nullptr));
        label_4->setText(QCoreApplication::translate("Control", "\346\277\200\345\205\211\345\212\237\347\216\207", nullptr));
        Contrl_Laser->setText(QCoreApplication::translate("Control", "30", nullptr));
        pushButton_SetOri->setText(QCoreApplication::translate("Control", "\350\256\276\347\275\256\345\216\237\347\202\271", nullptr));
        pushButton_Laser->setText(QCoreApplication::translate("Control", "\345\274\200\345\220\257\346\277\200\345\205\211", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Control: public Ui_Control {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROL_H
