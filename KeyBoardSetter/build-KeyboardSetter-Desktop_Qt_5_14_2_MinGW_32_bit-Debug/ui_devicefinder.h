/********************************************************************************
** Form generated from reading UI file 'devicefinder.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICEFINDER_H
#define UI_DEVICEFINDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeviceFinder
{
public:
    QWidget *centralwidget;
    QPushButton *searchdevice_btn;
    QLabel *main_label;
    QLabel *sub_label;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DeviceFinder)
    {
        if (DeviceFinder->objectName().isEmpty())
            DeviceFinder->setObjectName(QString::fromUtf8("DeviceFinder"));
        DeviceFinder->resize(400, 200);
        DeviceFinder->setMinimumSize(QSize(400, 200));
        DeviceFinder->setMaximumSize(QSize(400, 200));
        DeviceFinder->setStyleSheet(QString::fromUtf8("background-color:rgb(48, 56, 65);"));
        centralwidget = new QWidget(DeviceFinder);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        searchdevice_btn = new QPushButton(centralwidget);
        searchdevice_btn->setObjectName(QString::fromUtf8("searchdevice_btn"));
        searchdevice_btn->setGeometry(QRect(60, 120, 281, 41));
        searchdevice_btn->setStyleSheet(QString::fromUtf8("QPushButton{background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(5, 162, 242,255), stop:1 rgba(12, 180, 225,255));border-radius:7px;padding:2px 4px;font: 9pt \"Microsoft YaHei UI\";font-size:20px;color:rgb(242, 242, 222);}QPushButton:hover{background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(15, 172, 252,255), stop:1 rgba(22, 190, 235,255));}QPushButton:pressed{background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 160, 205,125), stop:1 rgba(0, 142, 222,125));color:rgb(202, 202,182);}\n"
"\n"
""));
        main_label = new QLabel(centralwidget);
        main_label->setObjectName(QString::fromUtf8("main_label"));
        main_label->setGeometry(QRect(60, 30, 281, 31));
        main_label->setStyleSheet(QString::fromUtf8("font:16pt \"Microsoft YaHei UI\";color:rgb(202, 202,182);"));
        main_label->setAlignment(Qt::AlignCenter);
        sub_label = new QLabel(centralwidget);
        sub_label->setObjectName(QString::fromUtf8("sub_label"));
        sub_label->setGeometry(QRect(60, 66, 281, 31));
        sub_label->setStyleSheet(QString::fromUtf8("font:75 12pt \"Microsoft YaHei UI\";color:rgb(202, 202,182);"));
        sub_label->setAlignment(Qt::AlignCenter);
        DeviceFinder->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(DeviceFinder);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        DeviceFinder->setStatusBar(statusbar);

        retranslateUi(DeviceFinder);

        QMetaObject::connectSlotsByName(DeviceFinder);
    } // setupUi

    void retranslateUi(QMainWindow *DeviceFinder)
    {
        DeviceFinder->setWindowTitle(QCoreApplication::translate("DeviceFinder", "SearchDevice", nullptr));
        searchdevice_btn->setText(QCoreApplication::translate("DeviceFinder", "Search", nullptr));
        main_label->setText(QCoreApplication::translate("DeviceFinder", "Please plugin your device", nullptr));
        sub_label->setText(QCoreApplication::translate("DeviceFinder", "Then press Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeviceFinder: public Ui_DeviceFinder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICEFINDER_H