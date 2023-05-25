/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *Cuerpos;
    QLabel *Xinicial;
    QLabel *Yinicial;
    QLabel *Masa;
    QLabel *Radio;
    QLabel *VinicialX;
    QLabel *VinicialY;
    QDoubleSpinBox *VoX;
    QDoubleSpinBox *VoY;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QGraphicsView *graphicsView;
    QDoubleSpinBox *Bodies;
    QDoubleSpinBox *Xo;
    QDoubleSpinBox *Yo;
    QDoubleSpinBox *Mass;
    QDoubleSpinBox *Radius;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        QFont font;
        font.setBold(false);
        font.setKerning(true);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Cuerpos = new QLabel(centralwidget);
        Cuerpos->setObjectName("Cuerpos");
        Cuerpos->setGeometry(QRect(10, 30, 61, 31));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Cuerpos->sizePolicy().hasHeightForWidth());
        Cuerpos->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setKerning(true);
        Cuerpos->setFont(font1);
        Xinicial = new QLabel(centralwidget);
        Xinicial->setObjectName("Xinicial");
        Xinicial->setGeometry(QRect(20, 80, 67, 17));
        Xinicial->setFont(font1);
        Yinicial = new QLabel(centralwidget);
        Yinicial->setObjectName("Yinicial");
        Yinicial->setGeometry(QRect(20, 120, 61, 20));
        Yinicial->setFont(font1);
        Masa = new QLabel(centralwidget);
        Masa->setObjectName("Masa");
        Masa->setGeometry(QRect(30, 160, 41, 17));
        Masa->setFont(font1);
        Radio = new QLabel(centralwidget);
        Radio->setObjectName("Radio");
        Radio->setGeometry(QRect(30, 200, 41, 17));
        Radio->setFont(font1);
        VinicialX = new QLabel(centralwidget);
        VinicialX->setObjectName("VinicialX");
        VinicialX->setGeometry(QRect(10, 240, 81, 21));
        VinicialX->setFont(font1);
        VinicialY = new QLabel(centralwidget);
        VinicialY->setObjectName("VinicialY");
        VinicialY->setGeometry(QRect(10, 280, 81, 17));
        VinicialY->setFont(font1);
        VoX = new QDoubleSpinBox(centralwidget);
        VoX->setObjectName("VoX");
        VoX->setGeometry(QRect(90, 230, 65, 31));
        VoX->setMinimum(-9999999999.000000000000000);
        VoX->setMaximum(9999999994.000000000000000);
        VoY = new QDoubleSpinBox(centralwidget);
        VoY->setObjectName("VoY");
        VoY->setGeometry(QRect(90, 270, 65, 31));
        VoY->setMinimum(-9999999999.000000000000000);
        VoY->setMaximum(9999999999.000000000000000);
        VoY->setValue(0.000000000000000);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 320, 131, 31));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(20, 360, 131, 31));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(20, 400, 131, 31));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(330, -70, 1500, 700));
        graphicsView->setMinimumSize(QSize(1000, 500));
        graphicsView->setMaximumSize(QSize(1920, 1080));
        Bodies = new QDoubleSpinBox(centralwidget);
        Bodies->setObjectName("Bodies");
        Bodies->setGeometry(QRect(90, 30, 65, 31));
        Bodies->setMaximum(32767.000000000000000);
        Xo = new QDoubleSpinBox(centralwidget);
        Xo->setObjectName("Xo");
        Xo->setGeometry(QRect(90, 70, 65, 31));
        Xo->setMinimum(-9999999999.000000000000000);
        Xo->setMaximum(9999999999.000000000000000);
        Yo = new QDoubleSpinBox(centralwidget);
        Yo->setObjectName("Yo");
        Yo->setGeometry(QRect(90, 110, 65, 31));
        Yo->setMinimum(-9999999999.000000000000000);
        Yo->setMaximum(9999999999.000000000000000);
        Mass = new QDoubleSpinBox(centralwidget);
        Mass->setObjectName("Mass");
        Mass->setGeometry(QRect(90, 150, 65, 31));
        Mass->setMinimum(-9999999999.000000000000000);
        Mass->setMaximum(9999999999.000000000000000);
        Radius = new QDoubleSpinBox(centralwidget);
        Radius->setObjectName("Radius");
        Radius->setGeometry(QRect(90, 190, 65, 31));
        Radius->setMinimum(-9999999999.000000000000000);
        Radius->setMaximum(9999999999.000000000000000);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Cuerpos->setText(QCoreApplication::translate("MainWindow", "Cuerpos", nullptr));
        Xinicial->setText(QCoreApplication::translate("MainWindow", "X inicial", nullptr));
        Yinicial->setText(QCoreApplication::translate("MainWindow", "Y inicial", nullptr));
        Masa->setText(QCoreApplication::translate("MainWindow", "Masa", nullptr));
        Radio->setText(QCoreApplication::translate("MainWindow", "Radio", nullptr));
        VinicialX->setText(QCoreApplication::translate("MainWindow", "V_inicial X", nullptr));
        VinicialY->setText(QCoreApplication::translate("MainWindow", "V_inicial Y", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Agregar cuerpo", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Simular", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Finalizar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
