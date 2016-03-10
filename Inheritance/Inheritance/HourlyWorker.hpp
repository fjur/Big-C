//
//  HourlyWorker.hpp
//  Inheritance
//
//  Created by Filip Juristovski on 12/8/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#ifndef HourlyWorker_hpp
#define HourlyWorker_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include "worker.hpp"

using namespace std;

class HourlyWorker : public Worker {
public:
    HourlyWorker(string name, double salary);
    virtual void compute_pay(int hours);
    double get_salary() const;
private:
    
};

#endif /* HourlyWorker_hpp */
