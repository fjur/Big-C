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
    Fraction result(left.numerator()*right.denominator() + right.numerator()*left.denominator(), left.denominator() * right.denominator());
    return result;
}

Fraction operator-(const Fraction& left, const Fraction& right)
{
     cout << "Entering function - operator\n";
    Fraction result(left.numerator()*right.denominator() - right.numerator()*left.denominator(), left.denominator() * right.denominator());
    return result;
}

Fraction operator*(const Fraction& left, const Fraction& right)
{
    cout << "Entering function * operator\n";
    Fraction result(left.numerator()* right.numerator(), left.denominator() * right.denominator());
    return result;
}

Fraction operator/(const Fraction& left, const Fraction& right)
{
    cout << "Entering function / operator\n";
    Fraction result(left.numerator() * right.denominator(), left.denominator()* right.numerator());
    return result;
}

Fraction operator-(const Fraction& value)
{
    cout << "Entering function negative - operator\n";

    return Fraction(-value.numerator(), value.denominator());
}

int Fraction::compare(const Fraction& right) const
{
    
    return numerator()* right.denominator() - denominator()*right.numerator();
    //return numerator of difference
}

bool operator<(const Fraction& left, const Fraction& right)
{
    cout << "Entering function < operator\n";

    return left.compare(right ) < 0;
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

    if (value.denominator() == 0) {
        out << "*********";
    }else{
        out << value.numerator() << "/" << value.denominator();
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
    top = top*right.denominator() + bottom*right.numerator();
    bottom *= right.denominator();
    normalize();
    return *this;
}

Fraction& Fraction::operator-=(const Fraction& right)
{
    top = top*right.denominator() - bottom*right.numerator();
    bottom*= right.denominator();
    normalize();
    return *this;
//    Fraction result(numerator()*right.denominator() - denominator()*right.numerator(), denominator()*right.denominator());
}


Fraction Fraction::operator--(int unused)
{
    Fraction clone(top,bottom);
    top -= bottom;
    return clone;
}

Fraction& Fraction::operator*=(const Fraction& right)
{
    top = top*right.numerator();
    bottom = bottom*right.denominator();
    normalize();
    return *this;
}

Fraction& Fraction::operator/=(const Fraction& right)
{
    top = top*right.denominator();
    bottom = bottom*right.numerator();
    normalize();
    return *this;
}