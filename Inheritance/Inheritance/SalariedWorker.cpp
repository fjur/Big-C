//
//  SalariedWorker.cpp
//  Inheritance
//
//  Created by Filip Juristovski on 12/8/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include "SalariedWorker.hpp"

SalariedWorker::SalariedWorker(string name, double salary): Worker(name, salary){

}


//void SalariedWorker::compute_pay(int hours){
//    double weeklyPay = 0;
//    if(hours < 40)
//    {
//        weeklyPay = hours * Worker::get_salary();
//        cout << "Weekly pay is: " << weeklyPay << "\n";
//    } else if (hours > 40){
//        weeklyPay =(hours - 40) * get_salary()*1.5 + 40*get_salary();
//    }
//}