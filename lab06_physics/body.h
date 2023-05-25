#ifndef BODY_H
#define BODY_H

#include <QGraphicsItem>
#include <QPainter>
#include "math.h"

#define EX 20
#define EY 20
#define ER 20
#define G 1
#define DT 1

class Body : public QGraphicsItem
{
private:
    double x, y, vx, vy, ax, ay, radius, mass, atx, aty;

public:
    Body();
    Body(double _x, double _y, double _vx, double _vy, double _radius, double _mass);

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    // Funciones de movimiento
    void acceleration(double x2, double y2, double m2, double numBodies);
    void speeds();
    void positions();

    // Getters
    double getX() const;
    double getY() const;
    double getVx() const;
    double getVy() const;
    double getAx() const;
    double getAy() const;
    double getAtx() const;
    double getAty() const;
    double getRad() const;
    double getMass() const;

    uint num = 0;
};

#endif // BODY_H
