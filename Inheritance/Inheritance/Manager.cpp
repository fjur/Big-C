//
//  Manager.cpp
//  Inheritance
//
//  Created by Filip Juristovski on 12/8/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include "Manager.hpp"

Manager::Manager(){
    department = "";
}

Manager::Manager(string first, double sal, string dep): Employee(first, sal){
    department = dep;
}

void Manager::print() const{
    cout << "Name is: " << Employee::get_name() << "\n";
    cout << "Salary is: " << Employee::get_salary() << "\n";
    cout << "department is: " << department << "\n";
}