#include "Punkt2.hpp"
#include <cmath>

Punkt2::Punkt2()
{
}

Punkt2::Punkt2(double _x, double _y) {
    x = _x;
    y = _y;
}

void Punkt2::setX(double _x) {
    x = _x;
}
void Punkt2::setY(double _y) {
    y = _y;
}
double Punkt2::getX() {
    return x;
}

double Punkt2::getY() {
    return y;
}

double Punkt2::getRadius() {
    return sqrt(pow(x, 2) + pow(y, 2));
}

double Punkt2::getAngle() {
    return atan2(x,y);
}

double Punkt2::getDistance(Punkt2 _p) {
    return sqrt(pow(_p.x - x, 2) + pow(_p.y - y, 2));
}
