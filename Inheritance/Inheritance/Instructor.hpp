//
//  Instructor.hpp
//  Inheritance
//
//  Created by Filip Juristovski on 12/8/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#ifndef Instructor_hpp
#define Instructor_hpp

#include <stdio.h>

#include <string>
#include <iostream>
#include "Person.hpp"

using namespace std;

class Instructor : public Person{
public:
    Instructor();
    Instructor(int salary);
    Instructor(string name, string birthday, int salary);
    
    
    void print() const;
    
private:
    int salary;
};

#endif /* Instructor_hpp */
