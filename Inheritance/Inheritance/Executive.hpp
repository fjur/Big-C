//
//  Executive.hpp
//  Inheritance
//
//  Created by Filip Juristovski on 12/8/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#ifndef Executive_hpp
#define Executive_hpp

#include <stdio.h>
#include <string>
#include <iostream>

#include "manager.hpp"

using namespace std;

class Executive : public Manager {
public:
    Executive(string name, double salary, string department);
    void print() const;
    
private:
    

};


#endif /* Executive_hpp */
