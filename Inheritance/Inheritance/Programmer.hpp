//
//  Programmer.hpp
//  Inheritance
//
//  Created by Filip Juristovski on 12/6/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#ifndef Programmer_hpp
#define Programmer_hpp

#include <stdio.h>
#include "string"
#include "iostream"
#include "Employee.hpp"

class Programmer : public Employee{
public:
    Programmer(string name, double salary);
    
    string get_name();

private:
    
};



#endif /* Programmer_hpp */
