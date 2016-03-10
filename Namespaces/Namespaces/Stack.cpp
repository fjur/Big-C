//
//  Stack.cpp
//  Namespaces
//
//  Created by Filip Juristovski on 1/11/16.
//  Copyright © 2016 Filip Juristovski. All rights reserved.
//

#include "Stack.hpp"

void Stack::push(std::string d)
{
    push_back(d);
    
}

std::string Stack::top()
{
    Iterator iter;
    iter = List::end();
    return iter.get();
}

void Stack::pop()
{
    Iterator iter;
    iter = List::end();
    Iterator iterErase = List::erase(iter);
}