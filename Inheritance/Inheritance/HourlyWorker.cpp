//
//  HourlyWorker.cpp
//  Inheritance
//
//  Created by Filip Juristovski on 12/8/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include "HourlyWorker.hpp"

HourlyWorker::HourlyWorker(string name, double salary) : Worker(name, salary){
    
}


void HourlyWorker::compute_pay(int hours){
    double weeklyPay = 0;
    if(hours < 40)
    {
        weeklyPay = hours * get_salary();
        cout << "Weekly pay is: " << weeklyPay << "\n";
    } else if (hours > 40){
        weeklyPay =(hours - 40) * get_salary()*1.5 + 40*get_salary();
        cout << "Weekly pay is: " << weeklyPay << "\n";
    }
}
