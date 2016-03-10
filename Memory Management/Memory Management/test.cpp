//
//  test.cpp
//  Memory Management
//
//  Created by Filip Juristovski on 12/29/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include "test.hpp"


Derived::Derived(int v)
{
    cout << "Derived constructor called\n";
    new_value = v;
}

void Derived::display()
{
    Base::display();
    cout << "In derived class, value is " << new_value << "\n";
}

Base::Base()
{
    cout << "Base Default constructor called\n";

    value = 7;
}

Base::Base(int v)
{
    cout << "Base Full constructor called\n";

    value = v;
}

void Base::display()
{
    cout << "In base class, value is " << value << "\n";
}

//exercise 2

//void Base::display()
//{
//    cout << "In base class \n";
//}
//
//Derived::Derived(int v)
//{
//    value = v;
//}
//
//void Derived::display()
//{
//    cout << "In derived class, value is " << value << "\n";
//}
