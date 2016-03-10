//
//  Queue.cpp
//  Namespaces
//
//  Created by Filip Juristovski on 1/11/16.
//  Copyright © 2016 Filip Juristovski. All rights reserved.
//

#include "Queue.hpp"

void Queue::push(std::string s)
{
    List::push_back(s);
}

std::string Queue::front()
{
    Iterator iter = List::begin();
    return iter.get();
}

void Queue::pop()
{
    Iterator iter = List::begin();
    Iterator end = List::erase(iter);
}