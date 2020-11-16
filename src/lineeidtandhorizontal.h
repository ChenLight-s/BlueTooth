#ifndef LINEEIDTANDHORIZONTAL_H
#define LINEEIDTANDHORIZONTAL_H

#include <QWidget>

namespace Ui {
class LineEidtAndHorizontal;
}

class LineEidtAndHorizontal : public QWidget
{
    Q_OBJECT

public:
    explicit LineEidtAndHorizontal(QWidget *parent = nullptr);
    ~LineEidtAndHorizontal();

private:
    Ui::LineEidtAndHorizontal *ui;
};

#endif // LINEEIDTANDHORIZONTAL_H
