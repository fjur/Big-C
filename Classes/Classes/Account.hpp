//
//  Account.hpp
//  Classes
//
//  Created by Filip Juristovski on 11/29/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#ifndef Account_hpp
#define Account_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Account{
public:
    Account(int bal);
    Account(int bal, string name);
    //mutator
    void add_money(int money);
    void withdraw_money(int money);
    void interest();
    
    //accessor
    void check_balance() const;
private:
    int balance;
    string type;
};

#endif /* Account_hpp */
