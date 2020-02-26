#ifndef PVZ_DAMAGE_H
#define PVZ_DAMAGE_H

#include <QWidget>
#include "plantsvszombies.h"

namespace Ui {
class PVZ_Damage;
}

class PVZ_Damage : public QWidget
{
    Q_OBJECT

public:
    explicit PVZ_Damage(QWidget *parent = nullptr);
    ~PVZ_Damage();

private:
    Ui::PVZ_Damage *ui;

signals:
    void damageChange(int num,int multiple);

};

#endif // PVZ_DAMAGE_H
