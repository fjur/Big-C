//
//  SalariedWorker.hpp
//  Inheritance
//
//  Created by Filip Juristovski on 12/8/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#ifndef SalariedWorker_hpp
#define SalariedWorker_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include "worker.hpp"

using namespace std;

class SalariedWorker : public Worker {
public:
    SalariedWorker(string name, double salary);
   // virtual void compute_pay(int hours);
private:
    
};


#endif /* SalariedWorker_hpp */
