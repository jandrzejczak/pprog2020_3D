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
#include <ostream>

using namespace std;

class Polygon
{
    static int countClasses;
    unsigned int count;
    Punkt2 * vertices;
        
public:
    Polygon();
    Polygon(initializer_list<Punkt2> _vertices);
    
    Polygon(const Polygon & p);
    
    ~Polygon();
    
    void changeVertex(int i, double x, double y);
    
    friend std::ostream& operator<<(std::ostream& os, const Polygon& pol);
    Punkt2 * getVertices() const;
    double getPerimeter() const;
    double getArea() const;
    double getConvexArea() const;
    unsigned int getCount() const;
    static int getCountClasses();
    Polygon & operator=(const Polygon &pol);
    Punkt2 & operator[](int i);
    
private:
    double getTriangleArea(Punkt2 p1, Punkt2 p2, Punkt2 p3) const;
};
#endif /* Polygon_hpp */
