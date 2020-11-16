#include "lineeidtandhorizontal.h"
#include "ui_lineeidtandhorizontal.h"

LineEidtAndHorizontal::LineEidtAndHorizontal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LineEidtAndHorizontal)
{
    ui->setupUi(this);
}

LineEidtAndHorizontal::~LineEidtAndHorizontal()
{
    delete ui;
}
