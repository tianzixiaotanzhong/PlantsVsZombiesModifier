#include "widget.h"
#include "ui_widget.h"
#include <QToolButton>
#include "plantsvszombies.h"
#include <QCheckBox>
#include <QMessageBox>
#include <QTimer>
#include <QDebug>
#include <QComboBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    PlantsVsZomblies * pvz = new PlantsVsZomblies(this);

    connect(ui->sunshine_btn, &QToolButton::clicked, [=](){
        pvz->setSunshine(ui->sunshineEdit->text().toInt());
        ui->sunshineEdit->setText("");
    });
    connect(ui->money_btn, &QToolButton::clicked, [=](){
       pvz->setMoney(ui->moneyEdit->text().toInt());
       ui->moneyEdit->setText("");
    });
    QTimer * sl_timer = new QTimer(this);
    QTimer * ml_timer = new QTimer(this);
    QTimer * monitor = new QTimer(this);

    connect(sl_timer, &QTimer::timeout, [=](){
        if(ui->sunshine_lock->isChecked() == true)
        {
            qDebug()<<"固定阳光";
            pvz->setSunshine(9999);
        }
    });
    connect(ml_timer, &QTimer::timeout, [=](){
        if(ui->money_lock->isChecked() == true)
        {
            pvz->setMoney(99999);
        }
    });
    connect(monitor, &QTimer::timeout, [=](){
        if(false == pvz->fandgame())
        {
            if(QMessageBox::Close == QMessageBox::warning(this, "警告", "检测到游戏已关闭或未启动,请保证游戏处于开启状态,或点击Close关闭", QMessageBox::Ok|QMessageBox::Close))
            {
                this->close();
            }
            else
            {
                qDebug()<<"重新初始化";
                pvz->pvz_init();
            }
        }
    });

    connect(ui->widget_3, &PVZ_Damage::damageChange, [=](int num, int multiple){
        int flag = 0;
        switch (num) {
        case 0:flag = pvz->improve_damage(peas, multiple);break;
        case 1:flag = pvz->improve_damage(frozen_peas, multiple);break;
        case 2:flag = pvz->improve_damage(cabbage,multiple);break;
        case 3:flag = pvz->improve_damage(watermelon, multiple);break;
        case 4:flag = pvz->improve_damage(spore, multiple);break;
        case 5:flag = pvz->improve_damage(ice_watermelon, multiple);break;
        case 6:flag = pvz->improve_damage(fire_peas, 1 + multiple);break;
        case 7:flag = pvz->improve_damage(stars, multiple);break;
        case 8:flag = pvz->improve_damage(spikes, multiple);break;
        case 9:flag = pvz->improve_damage(corn_kernels, 1 + multiple);break;
        case 10:flag = pvz->improve_damage(butter, multiple);break;
        default:break;
        }
        if(true == flag)
        {
            QMessageBox::information(parent, "提示", "修改成功", QMessageBox::Ok);
        }
    });
    sl_timer->start(500);
    ml_timer->start(500);
    monitor->start(500);
    ui->sunshineEdit->setFocus();

    this->setFixedSize(300, 480);

}

Widget::~Widget()
{
    delete ui;
}

