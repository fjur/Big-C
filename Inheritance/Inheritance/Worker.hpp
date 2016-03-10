//
//  Worker.hpp
//  Inheritance
//
//  Created by Filip Juristovski on 12/8/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#ifndef Worker_hpp
#define Worker_hpp

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class Worker{
public:
    Worker(string name, double salary);
    virtual void compute_pay(int hours);
    double get_salary() const;
    
    
private:
    string name;
    double salary;
};

#endif /* Worker_hpp */
