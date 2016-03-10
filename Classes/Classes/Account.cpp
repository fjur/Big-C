//
//  Account.cpp
//  Classes
//
//  Created by Filip Juristovski on 11/29/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include "Account.hpp"

#include <iostream>

using namespace std;

Account::Account(int bal)
{
    balance = bal;
}

Account::Account(int bal, string name){
    balance = bal;
    type = name;
}

void Account::add_money(int money)
{
    balance += money;
}

void Account::withdraw_money(int money)
{
    if (money > balance) {
        cout << "Withdrawing more than available, $5 dollar charge applied \n";
        balance -= 5;
    } else if (money < balance)
    {
        balance -= money;
    }
}

void Account::check_balance() const{
    cout << "current balance is: " << balance << "\n";
}

void Account::interest(){
    
    int initialBalance = balance *2;
    
    while (balance < initialBalance) {
        balance = balance*1.06;
        cout << "After interest is : " << balance << "\n";
    }
}

