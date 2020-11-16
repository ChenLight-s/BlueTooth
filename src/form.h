#ifndef FORM_H
#define FORM_H

#include <QWidget>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();
    float getValue(void);
private slots:
    void on_horizontalSlider_actionTriggered(int action);

    void on_lineEdit_textChanged(const QString &arg1);

    void on_horizontalSlider_valueChanged(int value);

private:
    Ui::Form *ui;
};

#endif // FORM_H
