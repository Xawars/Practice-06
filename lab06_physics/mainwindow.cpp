#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Se agrega la escena
    scene = new QGraphicsScene(-500, -250, 1000, 500);
    ui->graphicsView->setScene(scene);

    // Se definen los límites de la escena
    l1 = new QGraphicsLineItem(-500, -250, 500, -250);
    l2 = new QGraphicsLineItem(-500, 250, 500, 250);
    l3 = new QGraphicsLineItem(-500, -250, -500, 250);
    l4 = new QGraphicsLineItem(500, -250, 500, 250);

    // Se agregan los límites a la escena
    scene->addItem(l1);
    scene->addItem(l2);
    scene->addItem(l3);
    scene->addItem(l4);

    secuence = false;

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(Update()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete timer;
}

// Actualiza las velocidades y posiciones del cuerpo
void MainWindow::Update()
{
    int j = 0, r = 0, e = 0;

    fout.open("Positions.txt", ios::app); // Abre el archivo para escritura
    for (r = 0; r < 5; r++)
    {
        for (e = 0; e < system.length(); e++) {
            for (j = 0; j < system.length(); j++)
            {
                if (e != j) {
                    system.at(e)->acceleration(system[j]->getX(),system[j]->getY(),
                                               system[j]->getMass(),numBodies);
                }
                else if (e < system.length()-1) {
                    system.at(e)->acceleration(system[j+1]->getX(),system[j+1]->getY(),
                                               system[j+1]->getMass(),numBodies);
                }
                else if (e == system.length()-1 && e == j) {
                    system.at(e)->acceleration(system[e-1]->getX(),system[e-1]->getY(),
                                               system[e-1]->getMass(),numBodies);
                }
            }
            system.at(e)->speeds();
            system.at(e)->positions();
            cout << "Body position: " << system[e]->getX() << endl;
            fout << system.at(e)->getX();
            fout << " ";
            fout << " ";
            fout << " ";
            cout << "Body position: " << system.at(e)->getY() << endl;
            fout << system.at(e)->getY();
            if (e != system.length()-1) {
                fout << " ";
                fout << " ";
                fout << " ";
            } else {
                fout << endl;
            }
        }
    }
    fout.close();
}

void MainWindow::on_pushButton_clicked()
{
    numBodies = ui->Bodies->value();
    if (counter < numBodies) {
        system.append(new Body(ui->Xo->value(),ui->Yo->value(),
                               ui->VoX->value(),ui->VoY->value(),
                               ui->Radius->value(),ui->Mass->value()));

        fout.open("Positions.txt",ios::app);
        fout << system[counter]->getX();
        fout << " ";
        fout << " ";
        fout << " ";
        fout << system[counter]->getY();
        if (counter < numBodies-1) {
            fout << " ";
            fout << " ";
            fout << " ";
        } else {
            fout << endl;
        }
        counter += 1;
        ui->Xo->setValue(0);
        ui->Yo->setValue(0);
        ui->Mass->setValue(0);
        ui->Radius->setValue(0);
        ui->VoX->setValue(0);
        ui->VoY->setValue(0);
        scene->addItem(system.last());
        fout.close();
    }
}

// Finalización de la simulación
void MainWindow::on_pushButton_2_clicked()
{
    int i = 0;

    timer->stop();

    for (i = 0; i < system.length(); i++)
        scene->removeItem(system[i]);
    system.clear();
    counter = 0;
    secuence = false;
}

void MainWindow::on_pushButton_3_clicked()
{
    timer->start(33);
}
