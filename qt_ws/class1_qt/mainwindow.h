#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include "form.h"
#include "form_2.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void slot_btn_click(bool);
    void slot_btn9_click(bool);
    void slot_btn2_click(bool);
    void slot_btn3_click(bool);
    void slot_btn8_click(bool);
    void slot_btn5_click(bool);
    void slot_btn6_click(bool);
    void slot_btn10_click(bool);
    void slot_btn7_click(bool);
    void slot_btn4_click(bool);
    void slot_btn11_click(bool);
    void slot_btn12_click(bool);
private slots:
    void on_open_new_btn_clicked();

    void on_open_new_btn2_clicked();

private:
    Ui::MainWindow *ui;
    QPushButton* btn2;
};
#endif // MAINWINDOW_H
