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
    tablica.push_back(Punkt2(3,4));
    tablica.push_back(Punkt2(6,1));
    tablica.push_back(Punkt2(8,4));
    tablica.push_back(Punkt2(1,1));
    
    Polygon polygon = Polygon(tablica);
    
    cout << Punkt2().getCountClasses() <<endl;
    return 0;
}
