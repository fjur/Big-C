//
//  Queue.hpp
//  Namespaces
//
//  Created by Filip Juristovski on 1/11/16.
//  Copyright © 2016 Filip Juristovski. All rights reserved.
//

#ifndef Queue_hpp
#define Queue_hpp

#include <stdio.h>
#include "list.hpp"

class Queue : private List
{
public:
    void push(std::string s);
    std::string front();
    void pop();
private:
};


#endif /* Queue_hpp */
