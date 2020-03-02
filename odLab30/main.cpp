//
//  main.cpp
//
//
//  Created by Jordan Andrzejczak on 2/26/20.
//

#include "Punkt2.hpp"
#include "Polygon.hpp"
#include <iostream>

int main(int argc, const char * argv[]) {
    Punkt2 * list = new Punkt2[4];
    list[0] = Punkt2(1, 2);
    list[1] = Punkt2(3, 4);
    list[2] = Punkt2(5, 6);
    list[3] = Punkt2(7, 8);

    Polygon czworokat;
    
    czworokat.setVertices(list, 4);
    
    czworokat.changeVertex(1, 5, 10);
    
    std::cout << czworokat.getPerimeter();
    return 0;
}
