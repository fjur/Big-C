//
//  Fraction.hpp
//  Operator Overloading
//
//  Created by Filip Juristovski on 12/28/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#ifndef Fraction_hpp
#define Fraction_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Fraction{
public:
    Fraction();
    Fraction(int t);
    Fraction(int t, int b);
  //  int numerator() const;
  //  int denominator() const;
    Fraction& operator+=(const Fraction& right);
    Fraction& operator-=(const Fraction& right);
    
    Fraction& operator*=(const Fraction& right);
    Fraction& operator/=(const Fraction& right);
    
    Fraction& operator++(); //prefix form
    Fraction operator++(int unused); // post fix form
    
    Fraction& operator--(); //prefix form
    Fraction operator--(int unused); //postfix form
    
    int compare(const Fraction& right) const;
private:
    void normalize();
    int gcd(int n, int m);
    
    int top;
    int bottom;
    
   friend Fraction operator+(const Fraction& left, const Fraction& right);
   friend Fraction operator-(const Fraction& left, const Fraction& right);
   friend Fraction operator*(const Fraction& left, const Fraction& right);
   friend Fraction operator/(const Fraction& left, const Fraction& right);
   friend Fraction operator-(const Fraction& value);
   friend ostream& operator<<(ostream& out, const Fraction& value);

};

//these are function operator overloads which are non member
Fraction operator+(const Fraction& left, const Fraction& right);
Fraction operator-(const Fraction& left, const Fraction& right);
Fraction operator*(const Fraction& left, const Fraction& right);
Fraction operator/(const Fraction& left, const Fraction& right);
Fraction operator-(const Fraction& value);

bool operator<(const Fraction& left, const Fraction& right);
bool operator<=(const Fraction& left, const Fraction& right);
bool operator==(const Fraction& left, const Fraction& right);
bool operator!=(const Fraction& left, const Fraction& right);
bool operator>=(const Fraction& left, const Fraction& right);
bool operator>(const Fraction& left, const Fraction& right);

ostream& operator<<(ostream& out, const Fraction& value);
istream& operator>>(istream& in, Fraction& r);

//inline int Fraction::numerator() const
//{
//    return top;
//}
//
//inline int Fraction::denominator() const
//{
//    return bottom;
//}

inline Fraction& Fraction::operator--()
{
    top -= bottom;
    return *this;
}

inline Fraction& Fraction::operator++()
{
    top += bottom;
    return *this;
}

inline Fraction::Fraction(): top(0), bottom(0){
    cout << "Entering default constructor\n";
}

inline Fraction::Fraction(int t): top(t), bottom(1){
    cout << "Entering Simple constructor\n";
}

#endif /* Fraction_hpp */
