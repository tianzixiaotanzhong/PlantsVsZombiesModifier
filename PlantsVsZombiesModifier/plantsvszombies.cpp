#include "plantsvszombies.h"
#include <windows.h>
#include <QDebug>
#include <QObject>
#include <QMessageBox>

PlantsVsZomblies::PlantsVsZomblies(QObject * parent)
{
    pvz_init();
}


void PlantsVsZomblies::setSunshine(int sunshine)
{
    //基址
    DWORD SunShineBaseAddress = 0x006A9EC0;
    //基址值
    DWORD SunShineBaseAddressValue = 0;
    if (0 == ReadProcessMemory(hProcess, (LPVOID)SunShineBaseAddress, &SunShineBaseAddressValue, sizeof(DWORD), &dwSize))
    {
        qDebug() << "静态址获取失败\n";
        getLastError = GetLastError();
        return ;
    }
    //一级偏移
    DWORD SunShineOffsetFirst = 0x768;
    //一级偏移值
    DWORD SunShineOffsetFirstValue = 0;

    if (0 == ReadProcessMemory(hProcess, (LPVOID)(SunShineBaseAddressValue + SunShineOffsetFirst), &SunShineOffsetFirstValue, sizeof(DWORD), &dwSize))
    {
        qDebug() << "一级偏移获取失败\n";
        getLastError = GetLastError();
        return ;
    }

    //二级偏移
    DWORD SunShineOffsetSecond = 0x5560;
    //最后值
    DWORD SunShineNum = 0;
    if (0 == ReadProcessMemory(hProcess, (LPVOID)(SunShineOffsetFirstValue + SunShineOffsetSecond), &SunShineNum, sizeof(DWORD), &dwSize))
    {
        qDebug() << "二级偏移获取失败\n";
        getLastError = GetLastError();
        return ;
    }

    WriteProcessMemory(hProcess, (LPVOID)(SunShineOffsetFirstValue + SunShineOffsetSecond), &sunshine, sizeof(DWORD), &dwSize);


    CloseHandle(hProcess);
}

void PlantsVsZomblies::setMoney(int money)
{
    //基址
    DWORD moneyBaseAddress = 0x006A9EC0;
    //基址值
    DWORD moneyBaseAddressValue = 0;
    if (0 == ReadProcessMemory(hProcess, (LPVOID)moneyBaseAddress, &moneyBaseAddressValue, sizeof(DWORD), &dwSize))
    {
        qDebug() << "静态址获取失败\n";
        getLastError = GetLastError();
        return ;
    }
    //一级偏移
    DWORD moneyOffsetFirst = 0x82C;
    //一级偏移值
    DWORD moneyOffsetFirstValue = 0;

    if (0 == ReadProcessMemory(hProcess, (LPVOID)(moneyBaseAddressValue + moneyOffsetFirst), &moneyOffsetFirstValue, sizeof(DWORD), &dwSize))
    {
        qDebug() << "一级偏移获取失败\n";
        getLastError = GetLastError();
        return ;
    }

    //二级偏移
    DWORD moneyOffsetSecond = 0x28;
    //最后值
    DWORD moneyNum = 0;
    if (0 == ReadProcessMemory(hProcess, (LPVOID)(moneyOffsetFirstValue + moneyOffsetSecond), &moneyNum, sizeof(DWORD), &dwSize))
    {
        qDebug() << "二级偏移获取失败\n";
        getLastError = GetLastError();
        return ;
    }

    WriteProcessMemory(hProcess, (LPVOID)(moneyOffsetFirstValue + moneyOffsetSecond), &money, sizeof(DWORD), &dwSize);


    CloseHandle(hProcess);
}

bool PlantsVsZomblies::improve_damage(DamageAddress dadd, int multiple)
{

    DWORD damageBaseAdress = dadd;

    int damage = plantsDamage[(dadd - peas)/12] * multiple;

    if(0 == WriteProcessMemory(hProcess, (LPVOID)damageBaseAdress, &damage, sizeof(DWORD), &dwSize))
    {
        qDebug()<<"伤害修改失败";
        return 1;
    }
    else
        return 0;
}

bool PlantsVsZomblies::fandgame()
{
    if(NULL == (hWinmine = FindWindowW(NULL, gameName)))
    {
        return false;
    }
    return true;
}

void PlantsVsZomblies::pvz_init()
{
    //找到窗口
    hWinmine = FindWindowW(NULL, gameName);
    GetWindowThreadProcessId(hWinmine, &dwPID);	//获取进程标识
    if (dwPID == 0)
    {
        qDebug() << "获取PID失败\n";
        return;
    }
    hProcess = OpenProcess(PROCESS_ALL_ACCESS, false, dwPID);
    if (hProcess == NULL)
    {
        qDebug() << "进程打开失败\n";
        getLastError = GetLastError();
        return;
    }

    //植物伤害初始化
    for(int i = 0; i < 11; i++)
    {
        //基址
        DWORD damageBaseAddress = peas + i * 0x0c;

        if (0 == ReadProcessMemory(hProcess, (LPVOID)damageBaseAddress, plantsDamage + i, sizeof(DWORD), &dwSize))
        {
            qDebug() << "植物初始伤害获取失败\n";
            getLastError = GetLastError();
            return ;
        }
    }
    for(int i = 0; i < 11; i++)
    {
        qDebug()<<plantsDamage[i];
    }
}

