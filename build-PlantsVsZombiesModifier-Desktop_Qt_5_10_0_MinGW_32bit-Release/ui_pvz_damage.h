/********************************************************************************
** Form generated from reading UI file 'pvz_damage.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PVZ_DAMAGE_H
#define UI_PVZ_DAMAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PVZ_Damage
{
public:
    QGridLayout *gridLayout;
    QComboBox *comboBox;
    QSlider *damageMultiple;
    QPushButton *pushButton;

    void setupUi(QWidget *PVZ_Damage)
    {
        if (PVZ_Damage->objectName().isEmpty())
            PVZ_Damage->setObjectName(QStringLiteral("PVZ_Damage"));
        PVZ_Damage->resize(203, 221);
        gridLayout = new QGridLayout(PVZ_Damage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        comboBox = new QComboBox(PVZ_Damage);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 0, 0, 1, 1);

        damageMultiple = new QSlider(PVZ_Damage);
        damageMultiple->setObjectName(QStringLiteral("damageMultiple"));
        damageMultiple->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(damageMultiple, 0, 1, 1, 1);

        pushButton = new QPushButton(PVZ_Damage);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);


        retranslateUi(PVZ_Damage);

        QMetaObject::connectSlotsByName(PVZ_Damage);
    } // setupUi

    void retranslateUi(QWidget *PVZ_Damage)
    {
        PVZ_Damage->setWindowTitle(QApplication::translate("PVZ_Damage", "Form", nullptr));
        pushButton->setText(QApplication::translate("PVZ_Damage", "\344\274\244\345\256\263\347\224\237\346\225\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PVZ_Damage: public Ui_PVZ_Damage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PVZ_DAMAGE_H
