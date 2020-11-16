#ifndef PAINTYUAN_H
#define PAINTYUAN_H

#include <QWidget>

namespace Ui {
class PaintYuan;
}

class PaintYuan : public QWidget
{
    Q_OBJECT

public:
    explicit PaintYuan(QWidget *parent = nullptr);
    ~PaintYuan();
    Ui::PaintYuan *ui;
private slots:
    void on_pushButton_clicked();

private:

};

#endif // PAINTYUAN_H
