#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_btnTotalPrice_clicked();

    void on_btnDebug_clicked();

    void on_btnDEC_clicked();

    void on_btnBIN_clicked();

    void on_btnHEX_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
