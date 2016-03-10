//
//  TeachingAssistant.hpp
//  Class Hierarchies
//
//  Created by Filip Juristovski on 1/11/16.
//  Copyright © 2016 Filip Juristovski. All rights reserved.
//

#ifndef TeachingAssistant_hpp
#define TeachingAssistant_hpp

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class Person
{
public:
    Person();
    Person(string name);
    //accessor
    virtual string get_name() const;
    virtual void print() const;
    
private:
    string name;
};

class Employee : virtual public Person
{
public:
    Employee();
    Employee(string nameString, double sal);
    
    virtual string get_name() const;
    virtual double get_salary() const;
    virtual void print() const;
private:
    double salary;
};

class Student : virtual public Person
{
public:
    Student();
    Student(string name, int id);
    
    virtual void print() const;
    virtual int get_id() const;
private:
    int id;
};


//Code for teaching assistant EP19.7

class TeachingAssistant : public Student
{
public:
    TeachingAssistant();
private:
    class EmployeePart;
    EmployeePart* employee_ptr;
};

class TeachingAssistant::EmployeePart : public Employee
{
public:
    EmployeePart(TeachingAssistant*);
    EmployeePart();

private:
    TeachingAssistant* ta_part; // Allows access back to outer class
};



////code for teaching assistant EP19.6

//class TeachingAssistant : public Employee, public Student
//{
//public:
//    TeachingAssistant();
//    TeachingAssistant(string nam, double sal, int i);
//    virtual double get_salary() const;
//    virtual int get_id() const;
//    virtual string get_name() const;
//    virtual void print() const;
//private:
//};



#endif /* TeachingAssistant_hpp */
