//
//  BankAccount.hpp
//  Pointers
//
//  Created by Filip Juristovski on 12/1/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#ifndef BankAccount_hpp
#define BankAccount_hpp

#include <stdio.h>
#include <string>
#include <cmath>


using namespace std;

class BankAccount{
public:
    BankAccount(double sal);
    BankAccount();
   // BankAccount* get_bankAccount() const;
    
    double get_amount() const;
    void set_amount(double amt);
    
private:
    double amount;
};



#endif /* BankAccount_hpp */
