//
//  Employee.hpp
//  Pointers
//
//  Created by Filip Juristovski on 12/1/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#ifndef Employee_hpp
#define Employee_hpp

#include <stdio.h>
#include <string>
#include <cmath>
#include <iostream>


using namespace std;

class Employee{
public:
    Employee();
    Employee(string nameString, double sal);
    Employee(string first, string last, double sal);
    
    void raise();
    
    string get_name() const;
    double get_salary() const;
    void print() const;
    
private:
    string firstName;
    string lastName;
    double salary;
    
    
    

};

#endif /* Employee_hpp */
