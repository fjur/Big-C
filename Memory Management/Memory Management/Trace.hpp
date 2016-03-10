//
//  Trace.hpp
//  Memory Management
//
//  Created by Filip Juristovski on 12/31/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#ifndef Trace_hpp
#define Trace_hpp

#include <stdio.h>

#include <iostream> 
#include <string>

using namespace std;
class Trace
{
public:
     Trace(string n);
    ~Trace();
    
    string get_name() const;
    
    //copy constructor
    Trace(const Trace& right);
    
    //assignment operator
    Trace& operator=(const Trace& right);
private:
    string name;
};


#endif /* Trace_hpp */
