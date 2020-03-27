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
    Polygon polygon = Polygon({Punkt2(0,0), Punkt2(0,5), Punkt2(5,0), Punkt2(5,5)});
    unsigned int count = Polygon::getCountClasses();
    cout<<count<<endl;
    
    
    //cout
    cout<<polygon<<endl;
    return 0;
}
