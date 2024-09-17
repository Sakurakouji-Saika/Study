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
    void on_btn_left_clicked();

    void on_btn_center_clicked();

    void on_btn_right_clicked();

    void on_btnFont_Bold_clicked(bool checked);

    void on_btnFont_italic_clicked(bool checked);


    void on_btnFont_UnderLine_clicked(bool checked);


    void on_checkBox_Readonly_clicked(bool checked);

    void on_checkBox_Enabled_clicked(bool checked);

    void on_checkBox_ClearButton_clicked(bool checked);

    void on_radioButton_Black_clicked(bool checked);

    void on_radioButton_Red_clicked(bool checked);

    void on_radioButton_Blue_clicked(bool checked);

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
