//
//  Money.cpp
//  Operator Overloading
//
//  Created by Filip Juristovski on 12/29/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include "Money.hpp"

Money::Money()
{
    cout << "Entering Money default constructor\n";
    dollars = 0;
    cents = 0;
}

Money::Money(int d, int c)
{
    cout << "Entering Money Full constructor\n";
    dollars = d;
    cents = c;
}

Money::Money(double money)
{
    cout << "Entering Money simple constructor\n";
    dollars = (int)money;
    //double y = money*100;
   // cents = y + 0.5;
    cents = (int)(((money - dollars)*100)+0.5);
}

int Money::get_dollars() const
{
    return dollars;
}

int Money::get_cents() const
{
    return cents;
}

Money operator+(const Money& left, const Money& right)
{
    cout << "Entering function + operator\n";

    return Money(left.get_dollars() + right.get_dollars(), left.get_cents() + right.get_cents());
}

Money operator-(const Money& left, const Money& right)
{
    cout << "Entering function - operator\n";

    return Money(left.get_dollars() - right.get_dollars(), left.get_cents() - right.get_cents());
}

int Money::compare(const Money& right) const
{
    double leftVal = (double)dollars + (double)cents/100;
    double rightVal = (double)right.get_dollars() + (double)right.get_cents()/100;
    
    return leftVal - rightVal;
}

bool operator<(const Money& left, const Money& right)
{
    cout << "Entering function < operator\n";

    return left.compare(right) < 0;
}

bool operator>(const Money& left, const Money& right)
{
    cout << "Entering function > operator\n";

    return left.compare(right) > 0;
}

ostream& operator<<(ostream& out, const Money& value)
{
    out << value.get_dollars() << " Dollars and " << value.get_cents() << " Cents \n";
    return out;
}
istream& operator>>(istream& in, Money& value)
{
    cout << "Entering Input >> operator\n";

    int d, c;

    in >> d;
    
    char a;
    in >> a;
    
    if (a == '.') {
        in >> c;
        
    }else
    {
        in.unget();
        c = 0;
    }
    
    value = Money(d,c);
    
    return in;
}

float operator%(const Money& left, const Money& right)
{
    double leftVal = (double)left.get_dollars() + (double)left.get_cents()/100;
    double rightVal = (double)right.get_dollars() + (double)right.get_cents()/100;
//    double rdol =(double)right.get_dollars();
//    double rcen = (double)right.get_cents();
//    double rtol = rdol + rcen;
    return leftVal/rightVal*100;

}

Money& Money::operator+=(const Money& right)
{
    dollars = dollars + right.get_dollars();
    cents = cents + right.get_cents();
    return *this;
}
