//
//  SharedString.hpp
//  Memory Management
//
//  Created by Filip Juristovski on 12/29/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#ifndef SharedString_hpp
#define SharedString_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class SharedString {
    public:

    SharedString();
    SharedString(const char* right);
    SharedString(const SharedString& right);
    ~SharedString();
    SharedString& operator=(const SharedString&);
private:
    class StringReference;
    StringReference* p;
    void reassign(StringReference*);
};

class SharedString::StringReference
{
public:
    int count;
    char* buffer;
    StringReference(const char* right);
    ~StringReference();
};




#endif /* SharedString_hpp */
