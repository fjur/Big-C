//
//  Person.hpp
//  Sorting
//
//  Created by Filip Juristovski on 12/11/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp
#include <string>
#include <iostream>

using namespace std;

class Person{
public:
    
    Person(string name, long number);
    
    string get_name() const;
    long get_number() const;
    
    void print() const;
    
private:
    long number;
    string name;
    

}

;

#include <stdio.h>

#endif /* Person_hpp */
