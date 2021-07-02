#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->pushButton->setText("hello world");
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(slot_btn_click(bool)));
    connect(ui->pushButton_9,SIGNAL(clicked(bool)),this,SLOT(slot_btn9_click(bool)));
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(slot_btn2_click(bool)));
    connect(ui->pushButton_3,SIGNAL(clicked(bool)),this,SLOT(slot_btn3_click(bool)));
    connect(ui->pushButton_8,SIGNAL(clicked(bool)),this,SLOT(slot_btn8_click(bool)));
    connect(ui->pushButton_5,SIGNAL(clicked(bool)),this,SLOT(slot_btn5_click(bool)));
    connect(ui->pushButton_6,SIGNAL(clicked(bool)),this,SLOT(slot_btn6_click(bool)));
    connect(ui->pushButton_10,SIGNAL(clicked(bool)),this,SLOT(slot_btn10_click(bool)));
    connect(ui->pushButton_7,SIGNAL(clicked(bool)),this,SLOT(slot_btn7_click(bool)));
    connect(ui->pushButton_4,SIGNAL(clicked(bool)),this,SLOT(slot_btn4_click(bool)));
    connect(ui->pushButton_11,SIGNAL(clicked(bool)),this,SLOT(slot_btn11_click(bool)));
    connect(ui->pushButton_12,SIGNAL(clicked(bool)),this,SLOT(slot_btn12_click(bool)));




    //btn2=new QPushButton;
    //btn2->setText("hello world");
    //btn2->setParent(ui->centralwidget);
    //btn2->move(50,50);
    //connect(btn2,SIGNAL(clicked(bool)),this,SLOT(slot_btn2_click(bool)));
    //ui->label->setText("无人车路径规划与控制实验");

}
void MainWindow::slot_btn_click(bool)
{
     //ui->pushButton->setText("clicked");
     system("gnome-terminal --  bash -c 'cd ~/car/launch;sh launch_project.sh;exec bash'&");

}
void MainWindow::slot_btn9_click(bool)
{
     //btn2->setText("clicked");
     system("gnome-terminal -- bash -c 'cd ~/;source ~/.bashrc;roscore;exec bash'&");

}
void MainWindow::slot_btn2_click(bool)
{
     system("gnome-terminal -- bash -c 'cd ~/;rosrun ultra_serial_port ultra_publish;exec bash'&");
}
void MainWindow::slot_btn3_click(bool)
{
     system("gnome-terminal -- bash -c 'cd ~/;rosrun sbg_driver_2 ellipse;exec bash'&");
}
void MainWindow::slot_btn8_click(bool)
{
     system("gnome-terminal -- bash -c 'cd ~/;rosrun car_navigation car_navigation;exec bash'&");
}
void MainWindow::slot_btn5_click(bool)
{
     system("gnome-terminal -- bash -c 'cd ~/;rostopic echo /car_gps_position;exec bash'&");
}
void MainWindow::slot_btn6_click(bool)
{
     system("gnome-terminal -- bash -c 'cd ~/;rosrun cancontrol cancontrol;exec bash'&");
}
void MainWindow::slot_btn10_click(bool)
{
     system("gnome-terminal -- bash -c 'cd ~/;rosrun path_planning rrt_node;exec bash'&");
}
void MainWindow::slot_btn7_click(bool)
{
     system("gnome-terminal -- bash -c 'cd ~/;rosrun rviz rviz;exec bash'&");
}
void MainWindow::slot_btn4_click(bool)
{
     system("gnome-terminal -- bash -c 'cd ~/;rostopic list;exec bash'&");
}
void MainWindow::slot_btn11_click(bool)
{
     system("gnome-terminal -- bash -c 'cd ~/;rosrun path_planning rrt_sub;exec bash'&");
}
void MainWindow::slot_btn12_click(bool)
{
     system("gnome-terminal -- bash -c 'cd ~/;rqt_graph;exec bash'&");
}
MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_open_new_btn_clicked()
{
    Form* f=new Form;
    f->show();
}

void MainWindow::on_open_new_btn2_clicked()
{
    Form_2* f2=new Form_2;
    f2->show();
}
