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
    
    Punkt2 p1{1,0}, p2{2,6}, p3;
    //+
    p3=p1+p2;
    
    //-
    p3=p1-p2;
    
    //*
    p3=p1*p2;
    
    //count
    vector<Punkt2> tablica;
    tablica.push_back(Punkt2(0,0));
    tablica.push_back(Punkt2(1,6));
    tablica.push_back(Punkt2(7,8));
    tablica.push_back(Punkt2(1,8));
    Polygon polygon = Polygon(tablica);
    
    unsigned int count = Polygon::getCountClasses();
    
    cout<<count;
    return 0;
}
