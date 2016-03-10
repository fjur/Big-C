//
//  StringTest.hpp
//  Memory Management
//
//  Created by Filip Juristovski on 12/31/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#ifndef StringTest_hpp
#define StringTest_hpp

#include <stdio.h>
#include <iostream>
#include <cassert>
#include <ostream>

#endif /* StringTest_hpp */


class StringTest
{
public:
    StringTest();
    StringTest(int n, char c);
    StringTest(const char p[]);
    StringTest(const StringTest& right);
    ~StringTest();
    
    //function call operator
    StringTest operator()(int start, int length);
    
    StringTest& operator=(const StringTest& right);
    StringTest& operator+=(const StringTest& right);
    int length() const;
    
    char& operator[](int index);
    char operator[](int index) const; // used only when an array is declared const
    
    int compare(const StringTest& right) const;
    void resize(const int n, const char c);
    
private:
    char* buffer;
    int len;
};

std::ostream& operator<<(std::ostream& out, const StringTest& right);
StringTest operator+(const StringTest& left, const StringTest& right);

bool operator<(const StringTest& left, const StringTest& right);
bool operator<=(const StringTest& left, const StringTest& right);
bool operator>(const StringTest& left, const StringTest& right);
bool operator>=(const StringTest& left, const StringTest& right);
bool operator!=(const StringTest& left, const StringTest& right);
bool operator==(const StringTest& left, const StringTest& right);




inline char& StringTest::operator[](int index)
{
    assert((index >= 0) && (index < len));
    return buffer[index];
}