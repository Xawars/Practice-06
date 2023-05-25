#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsLineItem>
#include <QTimer>
#include <iostream>
#include <fstream>
#include <string>
#include "body.h"

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    ofstream fout;

public slots:
    void Update();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;

    // Puntero de la escena
    QGraphicsScene *scene;

    // Temporizador para el pulso
    QTimer *timer;

    // Límites
    QGraphicsLineItem *l1;
    QGraphicsLineItem *l2;
    QGraphicsLineItem *l3;
    QGraphicsLineItem *l4;

    // Lista de objetos
    QList <Body*> system;

    // Booleano para controlar la simulación
    bool secuence;
    double numBodies = 0;
    uint counter = 0;
};
#endif // MAINWINDOW_H
