//
//  Student.hpp
//  Inheritance
//
//  Created by Filip Juristovski on 12/8/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp

#include <string>
#include <iostream>
#include <stdio.h>

#include "person.hpp"

using namespace std;

class Student : public Person{

public:
    Student();
    Student(string major);
    Student(string name, string birthday, string maj);
    
    void print() const;
private:
    string major;

};

#endif /* Student_hpp */
