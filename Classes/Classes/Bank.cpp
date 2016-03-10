//
//  Bank.cpp
//  Classes
//
//  Created by Filip Juristovski on 11/29/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include "Bank.hpp"
#include <iostream>

using namespace std;

void Bank::transfer(double amount, string account)
{
    if(account == "s"){
        withdraw(amount, "s");
        deposit(amount, "c");
    } else if(account == "c")
    {
        withdraw(amount, "c");
        deposit(amount, "s");
    }
}

void Bank::withdraw(double amount, string account)
{
    if(account == "s")
        saving.withdraw_money(amount);
    else if(account == "c")
        checkings.withdraw_money(amount);
}

void Bank::deposit(double amount, string account){
    if (account == "s") {
        saving.add_money(amount);
    } else if (account == "c")
    {
        checkings.add_money(amount);
    }
}

void Bank::print_balance() const
{
    cout << "Total Balances are: \n";
    cout << "Checkings ";
    checkings.check_balance();
    cout << "Savings ";
    saving.check_balance();
    cout << "\n";
    
}
