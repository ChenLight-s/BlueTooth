#ifndef MY_WIDGET_00_H
#define MY_WIDGET_00_H

#include <QWidget>

namespace Ui {
class my_Widget_00;
}

class my_Widget_00 : public QWidget
{
    Q_OBJECT

public:
    explicit my_Widget_00(QWidget *parent = nullptr);
    ~my_Widget_00();

private:
    Ui::my_Widget_00 *ui;
};

#endif // MY_WIDGET_00_H
