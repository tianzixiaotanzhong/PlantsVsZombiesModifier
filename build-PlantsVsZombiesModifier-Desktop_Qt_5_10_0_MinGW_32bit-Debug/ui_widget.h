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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QLineEdit *moneyEdit;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *sunshineEdit;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *sunshine_btn;
    QToolButton *money_btn;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
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
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
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

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 4, 1, 1);

        sunshineEdit = new QLineEdit(widget);
        sunshineEdit->setObjectName(QStringLiteral("sunshineEdit"));

        gridLayout->addWidget(sunshineEdit, 0, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 0, 1, 1);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(Widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        sunshine_btn = new QToolButton(widget_2);
        sunshine_btn->setObjectName(QStringLiteral("sunshine_btn"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/\351\230\263\345\205\211.jfif"), QSize(), QIcon::Normal, QIcon::Off);
        sunshine_btn->setIcon(icon1);
        sunshine_btn->setIconSize(QSize(40, 40));
        sunshine_btn->setAutoRaise(true);

        horizontalLayout_2->addWidget(sunshine_btn);

        money_btn = new QToolButton(widget_2);
        money_btn->setObjectName(QStringLiteral("money_btn"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/\351\207\221\345\270\201.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        money_btn->setIcon(icon2);
        money_btn->setIconSize(QSize(40, 40));
        money_btn->setAutoRaise(true);

        horizontalLayout_2->addWidget(money_btn);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(Widget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        sunshine_lock = new QCheckBox(widget_3);
        sunshine_lock->setObjectName(QStringLiteral("sunshine_lock"));

        horizontalLayout->addWidget(sunshine_lock);

        money_lock = new QCheckBox(widget_3);
        money_lock->setObjectName(QStringLiteral("money_lock"));

        horizontalLayout->addWidget(money_lock);


        verticalLayout->addWidget(widget_3);


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
        sunshine_lock->setText(QApplication::translate("Widget", "\351\230\263\345\205\211\345\233\272\345\256\232", nullptr));
        money_lock->setText(QApplication::translate("Widget", "\351\207\221\345\270\201\345\233\272\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
