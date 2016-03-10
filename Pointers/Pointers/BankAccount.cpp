//
//  BankAccount.cpp
//  Pointers
//
//  Created by Filip Juristovski on 12/1/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include "BankAccount.hpp"

BankAccount::BankAccount(){
    amount  = 0;

}

BankAccount::BankAccount(double sal){
    amount = sal;
}


void BankAccount::set_amount(double amt){
    amount = amt;
}

double BankAccount::get_amount() const{
    return amount;
}