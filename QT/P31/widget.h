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
    void on_btn_readDT_clicked();

    void on_btn_bug_time_clicked();

    void on_btn_bug_date_clicked();

    void on_btn_bug_dateTime_clicked();

    void on_btn_setTime_clicked();

    void on_btn_setDate_clicked();

    void on_btn_setDateTime_clicked();

    void on_calendarWidget_selectionChanged();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
