//
//  Student.cpp
//  Inheritance
//
//  Created by Filip Juristovski on 12/8/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include "Student.hpp"

Student::Student(){
    cout << "Default student constructor callled \n";
    major = "";

}

Student::Student(string maj){
cout << "2nd student constructor callled \n";
    major = maj;
}

Student::Student(string name, string birthday, string maj): Person(name, birthday)
{
    cout << "Inherited Student constructor called \n";
    major   = maj;
}

void Student::print() const {
    cout << "This is a Student \n";
    cout << "name is: " << Person::get_name() << "\n";
    cout << "Birthday is: " << Person::get_birth() << "\n";
    cout << "Major is: " << major << "\n";
}