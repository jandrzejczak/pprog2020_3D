//
//  Polygon.cpp
//  
//
//  Created by Jordan Andrzejczak on 2/24/20.
//

#include "Polygon.hpp"
#include <cmath>

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

Polygon::~Polygon() {
    countClasses += 1;

    delete[] vertices;
}

void Polygon::changeVertex(int i, double x, double y) {
    vertices[i].setX(x);
    vertices[i].setY(y);
}

double Polygon::getPerimeter() {
    double per = 0;
    for (int i = 1; i < count; i++) {
        per += vertices[i].getDistance(vertices[i-1]);
    }
    return per;
}

Punkt2 * Polygon::getVertices() {
    return vertices;
}

int Polygon::getCountClasses() {return countClasses;}
double Polygon::getTriangleArea(Punkt2 p1, Punkt2 p2, Punkt2 p3) {
    return abs((p2.getX() - p1.getX()) * (p3.getY() - p1.getY()) * (p3.getX() - p1.getX())) / 2;
}

double Polygon::getConvexArea(){
    double pole = 0;
    Punkt2 p2 = vertices[0];
    for (int i = 1; i < count-1; i++){
        pole += getTriangleArea(p2, vertices[i], vertices[i+1]);
    }
    return pole;
}
double Polygon::getArea(){
    double pole = 0;
    for (int i = 0; i < count-1; i++){
        pole += (vertices[i].getX() + vertices[i+1].getX())*(vertices[i+1].getY() - vertices[i].getY());
    }
    return abs(pole)/2;
}
