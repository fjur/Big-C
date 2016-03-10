//
//  Templates.hpp
//  Templates
//
//  Created by Filip Juristovski on 1/3/16.
//  Copyright © 2016 Filip Juristovski. All rights reserved.
//

#ifndef Templates_hpp
#define Templates_hpp

#include <stdio.h>
#include <iostream>

template<typename T>
void template_test1(T a)
{
    std::cout << "T value is " << a << "\n";
}

template<typename T>
void template_test2(T* a) //doesnt work for ints since pointer? //NOT SURE HOW THIS WORKS!!!!!!
{
    std::cout << "New Value is " << a << "\n";
}


#endif /* Templates_hpp */
