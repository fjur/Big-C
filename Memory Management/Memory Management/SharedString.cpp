//
//  SharedString.cpp
//  Memory Management
//
//  Created by Filip Juristovski on 12/29/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include "SharedString.hpp"

SharedString::SharedString() : p(NULL)
{
    cout << "Entering SharedString() \n";
}

SharedString::SharedString(const char* right) : p(NULL)
{
    cout << "Entering SharedString(const char*) ";
    reassign(new StringReference(right));
}

SharedString::SharedString(const SharedString& right) : p(NULL)
{
    cout << "Entering SharedString(const SharedString&) ";
    reassign(right.p);
}

SharedString::~SharedString()
{
    cout << "Entering ~SharedString() ";
    reassign(NULL);
}

SharedString& SharedString::operator=(const SharedString& right)
{
    cout << "Entering operator=(const SharedString&) ";
    reassign(right.p);
    return *this;
}

void SharedString::reassign(SharedString::StringReference* np)
{
    if (np == NULL) // Print old values
    {
        cout << "value: " << p->buffer << " count: " << p->count << "\n";
    }
    if (np != NULL) // Increment count on the new value
    {
            np->count += 1;
    }
    if (p != NULL) // Decrement reference count on old value
    {
        p->count -= 1;
        if (p->count == 0)
        {
            delete p;
        }
    }
    p = np; // Change binding
    if (p != NULL) // Print new values
        cout << "value: " << p->buffer << " count: " << p->count << "\n";
}

SharedString::StringReference::StringReference(const char* right)
{
    count = 0;
    int n = 0;
    while (right[n] != '\0')
        n++;
    buffer = new char[1 + n];
    for (int i = 0; i < n; i++)
        buffer[i] = right[i];
    buffer[n] = '\0';
}

SharedString::StringReference::~StringReference()
{
    cout << "Entering ~StringReference() Destructor \n";

    delete[] buffer;
    
}