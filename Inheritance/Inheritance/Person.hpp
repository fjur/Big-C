//
//  Person.hpp
//  Inheritance
//
//  Created by Filip Juristovski on 12/8/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Person{
public:
    Person();
    Person(string name, string birthday);
    
    //accessor
    string get_name() const;
    string get_birth() const;
    void print() const;
    
private:
    string name;
    string birthday;

};

#endif /* Person_hpp */
