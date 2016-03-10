//
//  Worker.cpp
//  Inheritance
//
//  Created by Filip Juristovski on 12/8/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include "Worker.hpp"

Worker::Worker(string nam, double sal){
    name = nam;
    salary = sal;
}

void Worker::compute_pay(int hours){
    double weeklyPay = hours*salary;
    cout << "Weekly pay is: " << weeklyPay << "\n";
}

double Worker::get_salary() const {
    return salary;
}