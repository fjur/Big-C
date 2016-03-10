//
//  Person.cpp
//  Sorting
//
//  Created by Filip Juristovski on 12/11/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include "Person.hpp"

Person::Person(string nam, long num){
    number = num;
    name = nam;
}

string Person::get_name() const{
    return name;
}

long Person::get_number()const{
//    if(number ==6044211233)
//        cout << "STOP";
    return number;
}

void Person::print() const {

    std::cout << "Name is: " << name << "\n";
    std::cout << "Number is " << number << "\n";

}