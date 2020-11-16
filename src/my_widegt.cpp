#include "my_widegt.h"
#include "ui_my_widegt.h"

My_Widegt::My_Widegt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::My_Widegt)
{
    ui->setupUi(this);
}

My_Widegt::~My_Widegt()
{
    delete ui;
}
