#ifndef MY_WIDEGT_H
#define MY_WIDEGT_H

#include <QWidget>

namespace Ui {
class My_Widegt;
}

class My_Widegt : public QWidget
{
    Q_OBJECT

public:
    explicit My_Widegt(QWidget *parent = nullptr);
    ~My_Widegt();

private:
    Ui::My_Widegt *ui;
};

#endif // MY_WIDEGT_H
