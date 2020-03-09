//
//  Polygon.h
//
//
//  Created by Jordan Andrzejczak on 2/24/20.
//

#ifndef Polygon_hpp
#define Polygon_hpp

#include "Punkt2.hpp"
#include <vector>

using namespace std;

class Polygon
{
    static int countClasses;
    unsigned int count;
    Punkt2 * vertices;
        
public:
    Polygon();
    Polygon(vector<Punkt2> _vertices);
    
    Polygon(const Polygon & p);
    
    ~Polygon();
    
    void changeVertex(int i, double x, double y);
        
    Punkt2 * getVertices() const;
    double getPerimeter() const;
    double getArea() const;
    double getConvexArea() const;
    unsigned int getCount() const;
    static int getCountClasses();
    
private:
    double getTriangleArea(Punkt2 p1, Punkt2 p2, Punkt2 p3) const;
};
#endif /* Polygon_hpp */
