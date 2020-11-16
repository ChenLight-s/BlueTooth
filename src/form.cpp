#include "form.h"
#include "ui_form.h"
#include <QDebug>
Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}

void Form::on_horizontalSlider_actionTriggered(int action)
{
//    ui->lineEdit->setText()

//    qDebug()<<action;
}

void Form::on_lineEdit_textChanged(const QString &arg1)
{
    ui->horizontalSlider->setValue(arg1.toInt());
//    qDebug()<<arg1;
}

void Form::on_horizontalSlider_valueChanged(int value)
{
    ui->lineEdit->setText(QString::number(value));
//    qDebug()<<value;
}

float Form::getValue(void)
{
    return ui->horizontalSlider->value();
}
