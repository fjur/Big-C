//
//  Bank.hpp
//  Classes
//
//  Created by Filip Juristovski on 11/29/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#ifndef Bank_hpp
#define Bank_hpp


#include <stdio.h>
#include <string>
#include "Account.hpp"

using namespace std;

class Bank
{
public:

    
    Bank(int savingval, string savstring, int checkval, string checkstring):checkings( checkval, checkstring), saving( savingval, savstring){}
    
    void deposit (double amount, string account);
    void withdraw (double amount, string account);
    void transfer (double amount, string account);
    
    void print_balance() const;
private:
    Account checkings;
    Account saving;
    
};

#endif /* Bank_hpp */
