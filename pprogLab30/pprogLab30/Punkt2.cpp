#include "Punkt2.hpp"
#include <cmath>
#include <ostream>

int Punkt2::countClasses = 0;

Punkt2::Punkt2() {
    countClasses += 1;
}

Punkt2::Punkt2(double _x, double _y) {
    x = _x;
    y = _y;
    countClasses += 1;
}

Punkt2::~Punkt2() {
    countClasses -= 1;
}

Punkt2::Punkt2(const Punkt2 & p)
    {
        x = p.x;
        y = p.y;
    }

void Punkt2::setX(double _x) { x = _x; }

void Punkt2::setY(double _y) { y = _y; }

double Punkt2::getX() const { return x; }

double Punkt2::getY() const { return y; }

double Punkt2::getRadius() {
    return sqrt(pow(x, 2) + pow(y, 2));
}

double Punkt2::getAngle() {
    return atan2(x,y);
}

double Punkt2::getDistance(Punkt2 _p) {
    return sqrt(pow(_p.x - x, 2) + pow(_p.y - y, 2));
}

Punkt2 Punkt2::operator*(const Punkt2 &a) const{
    return Punkt2(x * a.getX(), y * a.getY());
}
Punkt2 Punkt2::operator+(const Punkt2 &a) const{
    return Punkt2(x + a.getX(), y + a.getY());
}
Punkt2 Punkt2::operator-(const Punkt2 &a) const{
    return Punkt2(x - a.getX(), y - a.getY());
}

std::ostream& operator<<(std::ostream& os, const Punkt2& p) {
     os << "(" << p.getX() << "," << p.getY() << ")";
     return os;
 }

Punkt2 & Punkt2::operator=(const Punkt2 &p) {
     if (&p != this) {
         x = p.getX();
         y = p.getY();
     }

      return * this;
 }

int Punkt2::getCountClasses() {return countClasses;}
