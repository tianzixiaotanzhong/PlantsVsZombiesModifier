#include "pvz_damage.h"
#include "ui_pvz_damage.h"
#include "plantsvszombies.h"
#include <QSlider>
#include <QDebug>


PVZ_Damage::PVZ_Damage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PVZ_Damage)
{
    ui->setupUi(this);

    QStringList plantItems = {
        "普通豌豆",
        "冰豌豆",
        "卷心菜",
        "普通西瓜",
        "孢子",
        "冰西瓜",
        "火豌豆",
        "星星",
        "尖刺",
        "玉米粒",
        "黄油"
    };
    ui->comboBox->addItems(plantItems);
    connect(ui->pushButton, &QPushButton::clicked, [=](){
        damageChange(ui->comboBox->currentIndex(), 1 + ui->damageMultiple->value()/10);
    });
}

PVZ_Damage::~PVZ_Damage()
{
    delete ui;
}
