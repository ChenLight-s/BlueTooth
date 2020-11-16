#include "my_widget_00.h"
#include "ui_my_widget_00.h"

my_Widget_00::my_Widget_00(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::my_Widget_00)
{
    ui->setupUi(this);
}

my_Widget_00::~my_Widget_00()
{
    delete ui;
}
