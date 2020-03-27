//
//  Polygon.cpp
//  
//
//  Created by Jordan Andrzejczak on 2/24/20.
//

#include "Polygon.hpp"
#include <cmath>
#include <ostream>

int Polygon::countClasses = 0;

Polygon::Polygon() {
    countClasses += 1;
}


Polygon::Polygon(std::vector<Punkt2> _vertices) {
    count = _vertices.size();
    vertices = new Punkt2[count];
    for (int i = 0; i < count; i++) {
        vertices[i] = _vertices[i];
    }
    countClasses += 1;
}

Polygon::Polygon(const Polygon & p) {
    count = p.getCount();
    vertices = new Punkt2[count];
    for (int i = 0; i < count; i++) {
        vertices[i] = p.getVertices()[i];
    }
    countClasses += 1;
}

Polygon::~Polygon() {
    delete[] vertices;
    countClasses--;
}

std::ostream& operator<<(std::ostream& os, const Polygon& pol) {
    Punkt2 * v = pol.getVertices();
    for (int i = 0; i < pol.getCount(); i++) {
        os << v[i] << std::endl;
    }

     return os;
}

void Polygon::changeVertex(int i, double x, double y) {
    vertices[i].setX(x);
    vertices[i].setY(y);
}

double Polygon::getPerimeter() const{
    double per = 0;
    for (int i = 1; i < count; i++) {
        per += vertices[i].getDistance(vertices[i-1]);
    }
    return per;
}

Punkt2 * Polygon::getVertices() const{
    return vertices;
}

unsigned int Polygon::getCount() const {return count;}

int Polygon::getCountClasses() {return countClasses;}
double Polygon::getTriangleArea(Punkt2 p1, Punkt2 p2, Punkt2 p3) const{
    return abs((p2.getX() - p1.getX()) * (p3.getY() - p1.getY()) * (p3.getX() - p1.getX())) / 2;
}

double Polygon::getConvexArea() const{
    double pole = 0;
    Punkt2 p2 = vertices[0];
    for (int i = 1; i < count-1; i++){
        pole += getTriangleArea(p2, vertices[i], vertices[i+1]);
    }
    return pole;
}
double Polygon::getArea() const{
    double pole = 0;
    for (int i = 0; i < count-1; i++){
        pole += (vertices[i].getX() + vertices[i+1].getX())*(vertices[i+1].getY() - vertices[i].getY());
    }
    return abs(pole)/2;
}

