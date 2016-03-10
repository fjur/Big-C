//
//  StringTest.cpp
//  Memory Management
//
//  Created by Filip Juristovski on 12/31/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include "StringTest.hpp"

StringTest::StringTest()
{
    std::cout <<"Entering StringTest Default Constructor\n";
    len = 0;
    buffer = NULL;
}

StringTest::StringTest(int n, char c)
{
    len = n;
    buffer = new char[len +1];
    for (int i = 0; i < len; i++) {
        buffer[i] = c;
    }
    
    buffer[len] = '\0';
}

StringTest::StringTest(const char p[]) //no need for field initializer here
{
    std::cout <<"Entering StringTest Full Constructor\n";
    len = 0;
    while (p[len] != '\0') {
        len++;
    }
    buffer = new char[len + 1]; //create space for NULL terminator
    for (int i = 0; i < len; i++) {
        buffer[i] = p[i];
    }
    buffer[len] = '\0';
}

StringTest::StringTest(const StringTest& right)
{
    std::cout <<"Entering StringTest Copy Constructor\n";
    len = right.length();
    buffer = new char[len + 1];
    for (int i = 0; i < len; i++) {
        buffer[i] = right[i]; //this is using an operator override
    }
    buffer[len] = '\0';
}

StringTest::~StringTest()
{
    std::cout <<"Entering StringTest destructor\n";
    delete[] buffer;
}

StringTest& StringTest::operator=(const StringTest& right)
{
    std::cout <<"Entering StringTest Assignment operator\n";
    if (this != &right) {
        delete[] buffer;
        len = right.length();
        buffer = new char[len +1];
        for (int i = 0; i < len; i++) {
            buffer[i] = right[i];
        }
        buffer[len] = '\0';
    }
    return *this;
}

void StringTest::resize(const int n, const char c)
{
    if (n != len)
    {
        int templen = len;
        len = n;
        char* temp = new char[len +1];
        for (int i = 0; i < len; i++) {
            if (i < templen) {
                temp[i] = buffer[i];
            } else{
                temp[i] = c;
            }
        }
        temp[len] = '\0';
        delete[] buffer;
        buffer = temp;
        temp = NULL;
    }
}

StringTest StringTest::operator()(int start, int length)
{
    char array[length + 1]; // =  char[length +1];
    int i = 0;
    if (start < len) {
        while ((i < length) && (buffer[i+start] != '\0') && ((i+start) < len)) {
            array[i] = buffer[i+start];
            i++;
        }
        
        while (i < length) {
            array[i] = '*';
            i++;
        }
        
        array[length] = '\0';
    } else
    {
        std::cout <<"Index out of bounds \n";
        while (i < length) {
            array[i] = '*';
            i++;
        }
        array[length] = '\0';
    }
    
    
    return StringTest(array);
}


char StringTest::operator[](int index) const
{
    assert((index >= 0) && (index < len));
    return buffer[index];
}

int StringTest::length() const
{
    return len;
}

std::ostream& operator<<(std::ostream& out, const StringTest& right)
{
    int n = right.length();
    for (int i = 0; i < n; i++) {
        out << right[i];
    }
    return out;
}

StringTest& StringTest::operator+=(const StringTest& right)
{
    int oldlen = len;
    len = len + right.length();
    char* temp = new char[len +1]; // +1 for terminator '\0'
    int i = 0;
    while (i < oldlen) {
        temp[i] = buffer[i];
        i++;
    }
    while(i < len)
    {
        temp[i] = right[i - oldlen]; //operator overload [] subscript to get from object
        i++;
    }
    temp[len] = '\0';
    delete[] buffer; //destroy old heap memory
    buffer = temp; //assign to new heap memory
    temp = NULL; //remove extra pointer
    return *this;
}

StringTest operator+(const StringTest& left, const StringTest& right)
{
    StringTest clone(left); //made using copy constructor
    clone += right;
    return clone;
}

int StringTest::compare(const StringTest& right) const
{
    //return -1 for right less than
    // 0 for equal
    //1 for right greater than
    
    
    int i = 0;
    int result = 0;
    while (buffer[i] != '\0' && right[i] != '\0') {
        
        if (buffer[i] > right[i]) {
            return 1;
        } else if(buffer[i] < right[i]){
            return -1;
        } else{
            i++;
        }
    }
    return result;
}

bool operator<(const StringTest& left, const StringTest& right)
{
    return left.compare(right) < 0;
}

bool operator<=(const StringTest& left, const StringTest& right)
{
    return left.compare(right) <= 0;
}

bool operator>(const StringTest& left, const StringTest& right)
{
    return left.compare(right) > 0;
}

bool operator>=(const StringTest& left, const StringTest& right)
{
    return left.compare(right) >= 0;
}

bool operator!=(const StringTest& left, const StringTest& right)
{
    return left.compare(right) != 0;
}

bool operator==(const StringTest& left, const StringTest& right)
{
    return left.compare(right) == 0;
}