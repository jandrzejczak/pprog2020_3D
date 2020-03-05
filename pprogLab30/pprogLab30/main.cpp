//
//  main.cpp
//
//
//  Created by Jordan Andrzejczak on 2/26/20.
//

#include "Punkt2.hpp"
#include "Polygon.hpp"
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    vector<Punkt2> tablica;
    
    tablica.push_back(Punkt2(0,0));
    tablica.push_back(Punkt2(4,0));
    tablica.push_back(Punkt2(4,4));
    tablica.push_back(Punkt2(2,4));
    tablica.push_back(Punkt2(0,4));
    
    
    
    Polygon polygon = Polygon(tablica);
    
    cout << polygon.getConvexArea() <<endl;
    return 0;
}
