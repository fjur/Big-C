//
//  Stack.hpp
//  Namespaces
//
//  Created by Filip Juristovski on 1/11/16.
//  Copyright © 2016 Filip Juristovski. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp


#include <stdio.h>
#include <string>
#include <iostream>
#include "list.hpp"

class Stack : private List
{
public:
    void push(std::string d);
    std::string top();
    void pop();
private:
    
};


#endif /* Stack_hpp */
