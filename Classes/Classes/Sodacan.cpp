//
//  Sodacan.cpp
//  Classes
//
//  Created by Filip Juristovski on 11/30/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include "Sodacan.hpp"
#include <iostream>
#include <string>
#include <cmath>


using namespace std;



sodacan::sodacan(int ht, int rs){
    height = ht;
    radius = rs;
}

void sodacan:: get_surface_area() const
{
    double surfaceArea = 2*M_PI*pow(radius, 2) +2*M_PI*radius*height;
    cout << "surface area is: " << surfaceArea << "\n";
}

void sodacan:: get_volume() const
{
    double volume = M_PI*pow(radius, 2)*height;
    cout << "Volume is: " << volume << "\n";
}