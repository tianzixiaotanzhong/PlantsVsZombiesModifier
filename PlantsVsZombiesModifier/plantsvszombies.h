#ifndef _PLANTSVSZOMBLIES_H
#define _PLANTSVSZOMBLIES_H

#include <QObject>
#include <windows.h>

typedef enum{
    peas = 0x69F1C8,
    frozen_peas = 0x69F1D4,
    cabbage = 0x69F1E0,
    watermelon = 0x69F1EC,
    spore = 0x69F1F8,
    ice_watermelon = 0x69F204,
    fire_peas = 0x69F210,
    stars = 0x69F21C,
    spikes = 0x69F228,
    corn_kernels = 0x69F240,
    butter = 0x69F258,
} DamageAddress;


class PlantsVsZomblies : public QObject
{
public:
    PlantsVsZomblies(QObject * parent = nullptr);
    void setSunshine(int sunshine = 0);
    void setMoney(int money = 0);
    bool improve_damage(DamageAddress dadd, int multiple);
    //void restart_damage(DamageAddress dadd);
    bool fandgame();
    void pvz_init();


private:
    DWORD getLastError;
    HWND hWinmine;
    HANDLE hProcess;
    DWORD dwPID = 0;
    DWORD dwNum = 0, dwSize = 0;
    const wchar_t gameName[40] = L"PlantsVsZombies Plus Version 95";
    int plantsDamage[11] = {0};
};

#endif //_PLANTSVSZOMBLIES_H
