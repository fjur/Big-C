//
//  Manager.hpp
//  Inheritance
//
//  Created by Filip Juristovski on 12/8/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#ifndef Manager_hpp
#define Manager_hpp

#include <stdio.h>
#include <string>
#include <iostream>

#include "Employee.hpp"

using namespace std;

class Manager : public Employee {
public:
    Manager();
    Manager(string firstName, double salary, string department);
    
    void print() const;
    
    
private:
    string department;

};

#endif /* Manager_hpp */
