//
//  test.hpp
//  Memory Management
//
//  Created by Filip Juristovski on 12/29/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#ifndef test_hpp
#define test_hpp

#include <stdio.h>
#include <iostream>

using namespace std;


class Base
{
public:
    Base();
    Base(int v);
    virtual void display();
private:
    int value;
};

class Derived : public Base
{
public:
    Derived(int v);
    virtual void display();
private:
    int new_value;
};

//test case 2

//class Base
//{
//public:
//    virtual void display();
//};
//
//class Derived : public Base
//{
//public:
//    Derived(int v );
//    virtual void display();
//private:
//    int value; };

//Test Case 1

//String& String::operator=(const String& right)
//{
//    if (this != &right)
//    {
//        delete[] buffer; // Get rid of old buffer len = right.length();
//        buffer = new char[len + 1];
//        for (int i = 0; i < len; i++)
//            buffer[i] = right[i];
//        buffer[len] = '\0';
//    }
//    return *this;
//}
//
//String& String::operator=(const String& right)
//{
//    if (this != &right)
//    {
//        delete[] buffer;
//        len = right.length();
//        char* buffer = new char[len + 1]; //error here, assigning new heap memory to new pointer on stack
//        for (int i = 0; i < len; i++)
//            buffer[i] = right[i]; //writing to an deleted heap memory, lifetime error
//        buffer[len] = '\0';
//    }
//    //pointer on stack lost
//    return *this;
//}
//
//String& String::operator=(const String& right)
//{
//    //error here no self assignment check or buffer deletion
//    int n = right.length();
//    for (int i = 0; i <= n; i++)
//        buffer[i] = right.buffer[i];
//    return *this;
//}


#endif /* test_hpp */
