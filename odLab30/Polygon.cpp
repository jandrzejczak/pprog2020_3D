//
//  Polygon.cpp
//  
//
//  Created by Jordan Andrzejczak on 2/24/20.
//

#include "Polygon.hpp"
#include <cmath>

#include "Polygon.hpp"
#include <cmath>

void Polygon::setVertices(Punkt2 * _vertices, int _count) {
    vertices = _vertices;
    count = _count;
}

void Polygon::changeVertex(int i, double x, double y) {
    vertices[i].setX(x);
    vertices[i].setY(y);
}

void Polygon::setCount(int n) {
    count = n;
}

double Polygon::getPerimeter() {
    double perimeter = 0;
    for (int i = 0; i < count; i++) {
        perimeter += vertices[i].getDistance();
    }
    return perimeter;
}

Punkt2 * Polygon::getVertices() {
    return vertices;
}

double Polygon::getTriangleArea(Punkt2 p1, Punkt2 p2, Punkt2 p3) {
    return abs((p2.getX() - p1.getX()) * (p3.getY() - p1.getY()) * (p3.getX() - p1.getX())) / 2;
}
