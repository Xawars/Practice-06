#include "body.h"

Body::Body(double _x, double _y, double _vx, double _vy, double _rad, double _mass)
{
    x = _x;
    y = _y;
    vx = _vx;
    vy = _vy;
    ax = 0;
    ay = 0;
    atx = 0;
    aty = 0;
    radius = _rad;
    mass = _mass;

    setPos((x/EX), (-y/EY));
}

QRectF Body::boundingRect() const
{
    return QRect(-radius/ER, -radius/ER, (radius*2)/ER, (radius*2/ER));
}

void Body::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    (void)option;
    (void)widget;

    painter->setBrush(Qt::darkGreen);
    painter->drawEllipse(boundingRect());
}

double Body::getX() const
{
    return x;
}

double Body::getY() const
{
    return y;
}

double Body::getVx() const
{
    return vx;
}

double Body::getVy() const
{
    return vy;
}

double Body::getAx() const
{
    return ax;
}

double Body::getAy() const
{
    return ay;
}

double Body::getRad() const
{
    return radius;
}

double Body::getMass() const
{
    return mass;
}

void Body::acceleration(double x2, double y2, double m2, double numBodies)
{
    double dist = 0;

    dist = pow((pow((x2-x), 2) + pow((y2-y), 2)), 0.5);
    if (num<numBodies) {
        ax += G*m2*(x2-x)/pow(dist,3);
        ay += G*m2*(y2-y)/pow(dist,3);
    } else {
        atx = ax;
        aty = ay;
        ax = G*m2*(x2-x)/pow(dist,3);
        ay = G*m2*(y2-y)/pow(dist,3);
        num = 0;
    }
    num += 1;
}

 // Calcula las aceleraciones
void Body::speeds()
{
    vx = vx + (atx*DT);
    vy = vy + (aty*DT);
}

// Calcula y actualiza las posiciones
void Body::positions()
{
    x = x + (vx * DT);
    y = y + (vy * DT);

    // Ajustando los cuadrantes
    setPos((x/EX), (-y/EY));
}
