//
//  Fraction.cpp
//  Operator Overloading
//
//  Created by Filip Juristovski on 12/28/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include "Fraction.hpp"
#include <cassert>
#include <stdexcept>

int Fraction::gcd(int n, int m)
{
    // Euclid’s Greatest Common Divisor algorithm
    assert((n > 0) && (m>0));
    while (n != m) {
        if (n < m)
            m = m - n;
        else
            n = n - m;
    }
    return n;
}

Fraction::Fraction(int t, int b): top(t), bottom(b)
{
     cout << "Entering full constructor\n";
    normalize();
}

void Fraction::normalize()
{
    //normalize fraction by
    //(a) moving sign to numerator
    //(b) ensuring numerator and denominator have no common divisor
    
    if (bottom != 0) {
        
        int sign = 1;
        if(top < 0)
        {
            sign = -1;
            top = -top;
        }
        if (bottom < 0) {
            sign = -sign;
            bottom = -bottom;
        }
        assert(bottom != 0);
        int d= 1;
        if(top > 0) d= gcd(top, bottom);
        top = sign * (top/d);
        bottom = bottom/d;
    }
}

Fraction operator+(const Fraction& left, const Fraction& right)
{
    cout << "Entering function + operator\n";
    Fraction result(left.top*right.bottom + right.top*left.bottom, left.bottom * right.bottom);
    return result;
}

Fraction operator-(const Fraction& left, const Fraction& right)
{
     cout << "Entering function - operator\n";
    Fraction result(left.top*right.bottom - right.top*left.bottom, left.bottom * right.bottom);
    return result;
}

Fraction operator*(const Fraction& left, const Fraction& right)
{
    cout << "Entering function * operator\n";
    Fraction result(left.top* right.bottom, left.bottom * right.bottom);
    return result;
}

Fraction operator/(const Fraction& left, const Fraction& right)
{
    cout << "Entering function / operator\n";
    Fraction result(left.top * right.bottom, left.bottom* right.top);
    return result;
}

Fraction operator-(const Fraction& value)
{
    cout << "Entering function negative - operator\n";

    return Fraction(-value.top, value.bottom);
}

int Fraction::compare(const Fraction& right) const
{
    
    return top* right.bottom - bottom*right.top;
    //return numerator of difference
}

bool operator<(const Fraction& left, const Fraction& right)
{
    cout << "Entering function < operator\n";

    return left.compare(right) < 0;
}

bool operator<=(const Fraction& left, const Fraction& right)
{
    cout << "Entering function <= operator\n";

    return left.compare(right ) <= 0;
}

bool operator==(const Fraction& left, const Fraction& right)
{
    cout << "Entering function == operator\n";

    return left.compare(right ) == 0;
}

bool operator!=(const Fraction& left, const Fraction& right)
{
    cout << "Entering function != operator\n";

    return left.compare(right) != 0;
}

bool operator>=(const Fraction& left, const Fraction& right)
{
    cout << "Entering function >= operator\n";

    return left.compare(right ) >= 0;
}

bool operator>(const Fraction& left, const Fraction& right)
{
    cout << "Entering function > operator\n";

    return left.compare(right) > 0;
}

ostream& operator<<(ostream& out, const Fraction& value)
{
    cout << "Entering function << operator\n";

    if (value.bottom == 0) {
        out << "*********";
    }else{
        out << value.top << "/" << value.bottom;
    }
    return out;
}

istream& operator>>(istream& in, Fraction& r)
{
    int t, b;
    //read the top
    in >> t;
    //if there is a slash read the next number
    char c;
    in >> c;
    if (c =='/')
        in >> b;
    else
    {
        in.unget();
        b=1;
    }
    
    r = Fraction(t,b);
    return in;
}

Fraction Fraction::operator++(int unused)
{
    Fraction clone(top, bottom);
    top += bottom;
    return clone;
}

Fraction& Fraction::operator+=(const Fraction& right)
{
    top = top*right.bottom + bottom*right.top;
    bottom *= right.bottom;
    normalize();
    return *this;
}

Fraction& Fraction::operator-=(const Fraction& right)
{
    top = top*right.bottom - bottom*right.top;
    bottom*= right.bottom;
    normalize();
    return *this;
//    Fraction result(top*right.bottom - bottom*right.top, bottom*right.bottom);
}


Fraction Fraction::operator--(int unused)
{
    Fraction clone(top,bottom);
    top -= bottom;
    return clone;
}

Fraction& Fraction::operator*=(const Fraction& right)
{
    top = top*right.top;
    bottom = bottom*right.bottom;
    normalize();
    return *this;
}

Fraction& Fraction::operator/=(const Fraction& right)
{
    top = top*right.bottom;
    bottom = bottom*right.top;
    normalize();
    return *this;
}