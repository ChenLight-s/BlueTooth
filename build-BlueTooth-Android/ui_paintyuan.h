/********************************************************************************
** Form generated from reading UI file 'paintyuan.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAINTYUAN_H
#define UI_PAINTYUAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PaintYuan
{
public:
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_Title;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_banJingX;
    QLabel *label_banJingY;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *banJingX;
    QLineEdit *banJingY;
    QLabel *label_2;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLineEdit *yuanXinX;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QLineEdit *yuanXinY;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_banJingX_2;
    QLabel *label_banJingY_2;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *maxLaser_Control;
    QLineEdit *minLaser_Control;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *runSpeed;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *PaintYuan)
    {
        if (PaintYuan->objectName().isEmpty())
            PaintYuan->setObjectName(QString::fromUtf8("PaintYuan"));
        PaintYuan->resize(823, 621);
        verticalLayout_4 = new QVBoxLayout(PaintYuan);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_Title = new QLabel(PaintYuan);
        label_Title->setObjectName(QString::fromUtf8("label_Title"));
        QFont font;
        font.setPointSize(20);
        label_Title->setFont(font);

        horizontalLayout_2->addWidget(label_Title);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_banJingX = new QLabel(PaintYuan);
        label_banJingX->setObjectName(QString::fromUtf8("label_banJingX"));
        label_banJingX->setMinimumSize(QSize(0, 50));
        QFont font1;
        font1.setPointSize(13);
        label_banJingX->setFont(font1);

        horizontalLayout_5->addWidget(label_banJingX);

        label_banJingY = new QLabel(PaintYuan);
        label_banJingY->setObjectName(QString::fromUtf8("label_banJingY"));
        label_banJingY->setFont(font1);

        horizontalLayout_5->addWidget(label_banJingY);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        banJingX = new QLineEdit(PaintYuan);
        banJingX->setObjectName(QString::fromUtf8("banJingX"));
        banJingX->setMinimumSize(QSize(0, 50));

        horizontalLayout_3->addWidget(banJingX);

        banJingY = new QLineEdit(PaintYuan);
        banJingY->setObjectName(QString::fromUtf8("banJingY"));
        banJingY->setMinimumSize(QSize(0, 50));

        horizontalLayout_3->addWidget(banJingY);


        verticalLayout_4->addLayout(horizontalLayout_3);

        label_2 = new QLabel(PaintYuan);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        verticalLayout_4->addWidget(label_2);

        checkBox = new QCheckBox(PaintYuan);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout_4->addWidget(checkBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_4 = new QLabel(PaintYuan);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        verticalLayout_2->addWidget(label_4);

        yuanXinX = new QLineEdit(PaintYuan);
        yuanXinX->setObjectName(QString::fromUtf8("yuanXinX"));
        yuanXinX->setMinimumSize(QSize(0, 50));

        verticalLayout_2->addWidget(yuanXinX);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_5 = new QLabel(PaintYuan);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        verticalLayout->addWidget(label_5);

        yuanXinY = new QLineEdit(PaintYuan);
        yuanXinY->setObjectName(QString::fromUtf8("yuanXinY"));
        yuanXinY->setMinimumSize(QSize(0, 50));

        verticalLayout->addWidget(yuanXinY);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_banJingX_2 = new QLabel(PaintYuan);
        label_banJingX_2->setObjectName(QString::fromUtf8("label_banJingX_2"));
        label_banJingX_2->setMinimumSize(QSize(0, 50));
        label_banJingX_2->setFont(font1);

        horizontalLayout_6->addWidget(label_banJingX_2);

        label_banJingY_2 = new QLabel(PaintYuan);
        label_banJingY_2->setObjectName(QString::fromUtf8("label_banJingY_2"));
        label_banJingY_2->setMinimumSize(QSize(0, 50));
        label_banJingY_2->setFont(font1);

        horizontalLayout_6->addWidget(label_banJingY_2);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        maxLaser_Control = new QLineEdit(PaintYuan);
        maxLaser_Control->setObjectName(QString::fromUtf8("maxLaser_Control"));
        maxLaser_Control->setMinimumSize(QSize(0, 50));

        horizontalLayout_7->addWidget(maxLaser_Control);

        minLaser_Control = new QLineEdit(PaintYuan);
        minLaser_Control->setObjectName(QString::fromUtf8("minLaser_Control"));
        minLaser_Control->setMinimumSize(QSize(0, 50));

        horizontalLayout_7->addWidget(minLaser_Control);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(PaintYuan);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 50));
        label_3->setFont(font1);

        verticalLayout_3->addWidget(label_3);

        runSpeed = new QLineEdit(PaintYuan);
        runSpeed->setObjectName(QString::fromUtf8("runSpeed"));
        runSpeed->setMinimumSize(QSize(0, 50));

        verticalLayout_3->addWidget(runSpeed);


        horizontalLayout_4->addLayout(verticalLayout_3);

        pushButton = new QPushButton(PaintYuan);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 50));

        horizontalLayout_4->addWidget(pushButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_4->addLayout(horizontalLayout_4);


        retranslateUi(PaintYuan);

        QMetaObject::connectSlotsByName(PaintYuan);
    } // setupUi

    void retranslateUi(QWidget *PaintYuan)
    {
        PaintYuan->setWindowTitle(QCoreApplication::translate("PaintYuan", "Form", nullptr));
        label_Title->setText(QCoreApplication::translate("PaintYuan", "\347\224\273\345\234\206", nullptr));
        label_banJingX->setText(QCoreApplication::translate("PaintYuan", "\345\215\212\345\276\204", nullptr));
        label_banJingY->setText(QCoreApplication::translate("PaintYuan", "\345\256\275", nullptr));
        banJingX->setText(QCoreApplication::translate("PaintYuan", "10", nullptr));
        banJingY->setText(QCoreApplication::translate("PaintYuan", "10", nullptr));
        label_2->setText(QCoreApplication::translate("PaintYuan", "\345\201\217\347\247\273", nullptr));
        checkBox->setText(QCoreApplication::translate("PaintYuan", "\347\273\235\345\257\271\345\201\217\347\247\273", nullptr));
        label_4->setText(QCoreApplication::translate("PaintYuan", "X", nullptr));
        yuanXinX->setText(QCoreApplication::translate("PaintYuan", "0", nullptr));
        label_5->setText(QCoreApplication::translate("PaintYuan", "Y", nullptr));
        yuanXinY->setText(QCoreApplication::translate("PaintYuan", "0", nullptr));
        label_banJingX_2->setText(QCoreApplication::translate("PaintYuan", "\350\277\220\350\241\214\346\277\200\345\205\211\345\212\237\347\216\207", nullptr));
        label_banJingY_2->setText(QCoreApplication::translate("PaintYuan", "\345\201\234\346\255\242\345\212\237\347\216\207", nullptr));
        maxLaser_Control->setText(QCoreApplication::translate("PaintYuan", "300", nullptr));
        minLaser_Control->setText(QCoreApplication::translate("PaintYuan", "30", nullptr));
        label_3->setText(QCoreApplication::translate("PaintYuan", "\350\277\220\350\241\214\351\200\237\345\272\246", nullptr));
        runSpeed->setText(QCoreApplication::translate("PaintYuan", "3000", nullptr));
        pushButton->setText(QCoreApplication::translate("PaintYuan", "\347\273\230\345\233\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PaintYuan: public Ui_PaintYuan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINTYUAN_H
