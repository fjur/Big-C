//
//  Executive.cpp
//  Inheritance
//
//  Created by Filip Juristovski on 12/8/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include "Executive.hpp"

Executive::Executive(string nam, double sal, string dep): Manager(nam, sal, dep){
    
}

void Executive::print() const {
    cout << "executive \n";
    Manager::print();
}