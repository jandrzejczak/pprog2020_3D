//
//  Polygon.h
//
//
//  Created by Jordan Andrzejczak on 2/24/20.
//

#ifndef Polygon_hpp
#define Polygon_hpp

#include "Punkt2.hpp"

class Polygon
{
    unsigned int count; /*!< Ilość wierzchołków wielokąta */
    
    Punkt2 * vertices; /*!< Tablica wierzochołków */
        
public:
    //! Metoda konstruująca tablicę wierzchołków.
    /*!
      \param _vertices  argument typu Punkt*  przekazujący tablicę wierzchołków wielokąta
      \param _count argument typu  unsigned int przekazujący ilość wierzchołków.
      \sa changeVertex()
    */
    void setVertices (Punkt2 * _vertices, int _count);

    //! Metoda zmieniająca wspólrzędne i-tego wierzchołka.
    /*!
      \param i argument typu int  przekazujący numer wierchołka do zmiany
      \param x argument typu  double przekazujący nową wartość do współrzędnej x.
      \param y argument typu  double przekazujący nową wartość do współrzędnej y.
      \sa setVertices()
    */
    void changeVertex (int i, double x, double y);
    
    //! Metoda ustawiająca ilość wierzchołków.
    /*!
      \param n argument typu int przekazujący ilość wierchołków
      \sa setVeritces()
    */
    void setCount(int n);
    
    double getPerimeter(); /*!< Metoda obliczająca obwód wielokąta */
    
    Punkt2 * getVertices();
    
private:
    double getTriangleArea(Punkt2 p1, Punkt2 p2, Punkt2 p3);
};

#endif /* Polygon_hpp */
