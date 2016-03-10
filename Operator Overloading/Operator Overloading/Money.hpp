//
//  Money.hpp
//  Operator Overloading
//
//  Created by Filip Juristovski on 12/29/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#ifndef Money_hpp
#define Money_hpp

#include <string>
#include <iostream>
#include <stdio.h>

using namespace std;

class Money
{
public:
    Money();
    Money(int d, int c);
    Money(double money);
    
    int get_dollars() const;
    int get_cents() const;
    
    Money& operator+=(const Money& right);
    
    int compare(const Money& right) const;
    
private:
    int dollars;
    int cents;
    
};

//non member operator overloading
Money operator+(const Money& left, const Money& right);
Money operator-(const Money& left, const Money& right);
float operator%(const Money& left, const Money& right);
//Money operator-(const Money& value);


bool operator<(const Money& left, const Money& right);
bool operator>(const Money& left, const Money& right);


ostream& operator<<(ostream& out, const Money& value);
istream& operator>>(istream& in, Money& value);

#endif /* Money_hpp */
