//
//  Programmer.cpp
//  Inheritance
//
//  Created by Filip Juristovski on 12/6/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include "Programmer.hpp"

Programmer::Programmer(string nam, double sal): Employee(nam, sal){

//    Employee::Employee(nam, sal);
    
}

string Programmer::get_name(){
    
    string name = Employee::get_name();
    
    return name + " (Programmer)";
}