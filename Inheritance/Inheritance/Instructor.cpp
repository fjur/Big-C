//
//  Instructor.cpp
//  Inheritance
//
//  Created by Filip Juristovski on 12/8/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include "Instructor.hpp"


Instructor::Instructor(){
    salary = 0;
    cout << "Default instructor constructor called \n";
}

Instructor::Instructor(int sal){
    salary = sal;
    cout << "Second instructor constructor called \n";
}


Instructor::Instructor(string name, string birthday, int sal): Person(name, birthday){
    cout << "Normal instructor constructor called \n";

    salary = sal;
}

void Instructor::print() const {
    cout << "This is a Instructor \n";
    cout << "name is: " << Person::get_name() << "\n";
    cout << "Birthday is: " << Person::get_birth() << "\n";
    cout << "salary is: " << salary << "\n";
}

