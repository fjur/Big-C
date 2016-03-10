//
//  TeachingAssistant.cpp
//  Class Hierarchies
//
//  Created by Filip Juristovski on 1/11/16.
//  Copyright © 2016 Filip Juristovski. All rights reserved.
//

#include "TeachingAssistant.hpp"

//Person Member Functions

Person::Person(){
    cout << "Default person constructor called \n";
    name = "";
}

Person::Person(string nam){
    cout << "Normal person constructor called \n";
    name = nam;
}

string Person::get_name() const {
    return name;
}

void Person::print() const{
    cout << "This is a person \n";
    cout << "name is: " << name << "\n";
}

//Code For Student

Student::Student(){
    cout << "Default student constructor called \n";
    id = 0;
}

Student::Student(string name, int i) : Person(name)
{
    cout << "Inherited Student constructor called \n";
    id = i;
}

void Student::print() const {
    cout << "This is a Student \n";
    cout << "name is: " << Person::get_name() << "\n";
    cout << "Id is: " << id << "\n";
}

int Student::get_id() const
{
    return id;
}

//Code For Employee


Employee::Employee() : Person(""){
    cout << "Entering Default Employee constructor\n";
    salary = 0;
    
}

Employee:: Employee(string nameString, double sal) : Person(nameString){
    cout << "Entering Full Employee constructor\n";
    salary = sal;
}

double Employee::get_salary() const{
    return salary;
}

string Employee::get_name() const
{
    return Person::get_name();
}

void Employee:: print() const {
    cout << "Employee name is: " << Person::get_name() << "\n";
    cout << "Employee salary is: " << salary << "\n";
}

////code for teaching assistant EP19.7

//TeachingAssistant::EmployeePart::EmployeePart(TeachingAssistant& ta)
//{
//    ta_part = &ta;
//}


TeachingAssistant::TeachingAssistant()
{
    employee_ptr = new EmployeePart(this); // Pass pointer to implicit parameter
}


TeachingAssistant::EmployeePart::EmployeePart(TeachingAssistant* taval)
: ta_part(taval) {}

//TeachingAssistant::EmployeePart::EmployeePart(TeachingAssistant* taval)
//: ta_part(taval) {}


////code for teaching assistant EP19.6
//
//TeachingAssistant::TeachingAssistant()
//{
//    cout << "Entering Default TeachingAssistant constructor\n";
//}
//
//TeachingAssistant::TeachingAssistant(string nam, double sal, int i) : Student(nam, i), Employee(nam, sal) , Person(nam)
//{
//    cout << "Entering Full TeachingAssistant constructor\n";
//}
//
//string TeachingAssistant::get_name() const
//{
//    return Person::get_name();
//}
//
//double TeachingAssistant::get_salary() const
//{
//    return Employee::get_salary();
//}
//
//int TeachingAssistant::get_id() const
//{
//    return Student::get_id();
//}
//
//void TeachingAssistant::print() const
//{
//    cout << "This is a Teaching Assistant \n";
//    cout << "name is: " << get_name() << "\n";
//    cout << "Salary is is: " << get_salary() << "\n";
//    cout << "ID is: " << get_id() << "\n";
//}
