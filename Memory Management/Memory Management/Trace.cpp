//
//  Trace.cpp
//  Memory Management
//
//  Created by Filip Juristovski on 12/31/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include "Trace.hpp"

Trace::Trace(string n) : name(n)
{
    cout << "Entering " << name << "\n";
}

Trace::~Trace()
{
    cout << "Exiting " << name << "\n";
}

string Trace::get_name() const
{
    return name;
}

//copy constructor
Trace::Trace(const Trace& right)
{
    cout << "entering copy constructor\n";
    name = right.get_name();
}

Trace& Trace::operator=(const Trace& right)
{
    cout << "Entering assignment \n";
    if(this != &right)
    {
        name = right.get_name();
    }
    
    return *this;
}