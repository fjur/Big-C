//
//  Person.cpp
//  Inheritance
//
//  Created by Filip Juristovski on 12/8/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include "Person.hpp"

Person::Person(){

    cout << "Default person constructor called \n";
    name = "";
    birthday = "";
}

Person::Person(string nam, string birth){
    cout << "Normal person constructor called \n";
    name = nam;
    birthday = birth;
}


string Person::get_name() const {
    return name;
}

string Person::get_birth() const{

    return birthday;
}

void Person::print() const{
    cout << "This is a person \n";
    cout << "name is: " << name << "\n";
    cout << "Birthday is: " << birthday << "\n";
}