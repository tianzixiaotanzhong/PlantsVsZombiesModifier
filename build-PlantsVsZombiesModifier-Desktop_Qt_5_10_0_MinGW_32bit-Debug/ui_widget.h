/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include <pvz_damage.h>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_2;
    PVZ_Damage *widget_3;
    QWidget *widget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QLineEdit *moneyEdit;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *sunshineEdit;
    QSpacerItem *horizontalSpacer_4;
    QToolButton *sunshine_btn;
    QToolButton *money_btn;
    QLabel *label_3;
    QCheckBox *sunshine_lock;
    QCheckBox *money_lock;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(300, 480);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/\350\212\261\347\233\206\345\212\250\346\274\253\344\272\272\347\211\251.png"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        Widget->setAutoFillBackground(false);
        gridLayout_2 = new QGridLayout(Widget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        widget_3 = new PVZ_Damage(Widget);
        widget_3->setObjectName(QStringLiteral("widget_3"));

        gridLayout_2->addWidget(widget_3, 4, 0, 1, 2);

        widget = new QWidget(Widget);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setAutoFillBackground(false);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        moneyEdit = new QLineEdit(widget);
        moneyEdit->setObjectName(QStringLiteral("moneyEdit"));

        gridLayout->addWidget(moneyEdit, 1, 3, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        sunshineEdit = new QLineEdit(widget);
        sunshineEdit->setObjectName(QStringLiteral("sunshineEdit"));

        gridLayout->addWidget(sunshineEdit, 0, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        sunshine_btn = new QToolButton(widget);
        sunshine_btn->setObjectName(QStringLiteral("sunshine_btn"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/\351\230\263\345\205\211.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        sunshine_btn->setIcon(icon1);
        sunshine_btn->setIconSize(QSize(40, 40));
        sunshine_btn->setAutoRaise(true);

        gridLayout->addWidget(sunshine_btn, 0, 4, 1, 1);

        money_btn = new QToolButton(widget);
        money_btn->setObjectName(QStringLiteral("money_btn"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/\351\207\221\345\270\201.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        money_btn->setIcon(icon2);
        money_btn->setIconSize(QSize(40, 40));
        money_btn->setAutoRaise(true);

        gridLayout->addWidget(money_btn, 1, 4, 1, 1);


        gridLayout_2->addWidget(widget, 0, 0, 1, 2);

        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(16777215, 60));
        label_3->setTextFormat(Qt::AutoText);

        gridLayout_2->addWidget(label_3, 3, 0, 1, 2);

        sunshine_lock = new QCheckBox(Widget);
        sunshine_lock->setObjectName(QStringLiteral("sunshine_lock"));

        gridLayout_2->addWidget(sunshine_lock, 1, 0, 1, 1);

        money_lock = new QCheckBox(Widget);
        money_lock->setObjectName(QStringLiteral("money_lock"));

        gridLayout_2->addWidget(money_lock, 1, 1, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "PvZm", nullptr));
        label->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-weight:600;\">\346\224\271\345\217\230\351\230\263\345\205\211:</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-weight:600;\">\346\233\264\346\224\271\351\207\221\351\222\261:</span></p></body></html>", nullptr));
#ifndef QT_NO_TOOLTIP
        sunshine_btn->setToolTip(QApplication::translate("Widget", "<html><head/><body><p>\351\230\263\345\205\211\347\224\237\346\225\210</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        sunshine_btn->setText(QApplication::translate("Widget", "\351\230\263\345\205\211\347\224\237\346\225\210", nullptr));
#ifndef QT_NO_TOOLTIP
        money_btn->setToolTip(QApplication::translate("Widget", "<html><head/><body><p>\351\207\221\345\270\201\347\224\237\346\225\210</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        money_btn->setText(QApplication::translate("Widget", "\351\207\221\351\222\261\347\224\237\346\225\210", nullptr));
        label_3->setText(QApplication::translate("Widget", "\346\244\215\347\211\251\344\274\244\345\256\263\346\217\220\345\215\207:", nullptr));
        sunshine_lock->setText(QApplication::translate("Widget", "\351\230\263\345\205\211\345\233\272\345\256\232", nullptr));
        money_lock->setText(QApplication::translate("Widget", "\351\207\221\345\270\201\345\233\272\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
