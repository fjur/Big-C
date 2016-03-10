//
//  main.cpp
//  Operator Overloading
//
//  Created by Filip Juristovski on 12/28/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include <iostream>
#include "Fraction.hpp"
#include "List.hpp"
#include "Money.hpp"

#include <iomanip>


void checker(int* b)
{
    cout << *b << "\n";

}

void exercise5()
{
    Money a(5.33);
    Money b(3);
    Money c;
    
    c = a - b;
    
    if(a > b)
        cout <<"worked \n";
    
    cout << a;
    
    //cin >> c;
    
    float z = b%a;
    cout << setprecision(4) << z << "%\n";
    
    a += b;
    cout << a;
    
    int bea = 1234567891234556789;
    cout << bea << "\n";
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
//    
//    double pi = (3,14159);
//    double pi_two;
//    pi_two = 3,14159;
//    
//    int i = 7;
//    int j = ++i + i++;
//    int k = j++ + ++j;
    
//    int *z = new int;
//    *z = 5;
//    int x = 5;
//    checker(&x);
//    checker(z);
    
    Fraction a;
    Fraction b(2);
    Fraction c(3,7);
    
    cout << c << "\n";
    cout << "Numerator of c is " << c.numerator() << "\n";
    
    Fraction d(3,4);
    d = b + c;
    cout << d << "\n";
    
    d = b-c;
    Fraction e(2);
    if (e == b) {
        cout << "equal test successsful \n";
    }
    
    if (b > c) {
        cout << "compare test successful \n";
    }
    
//    c -= b;
//    cout << c << "\n";
    
    
    //cout << --b << "\n";
    
    b /= c;
    cout << b << "\n";
    
    Fraction f(1,0);
    cout << f << "\n";
    
    d = b*a;
    cout << d << "\n";

    d = b + 1;
    
    List names;
   
    names.push_back("ted");
    names.push_back("John");
    names.push_back("mike");
    Iterator iter = names.begin();
    
    //using operation overloads for iter++ and *iter
    
    for (iter = names.begin(); !(iter.equals(names.end())); iter++) {
        cout << iter.get() << "\n";
    }
    

    --iter;
    
    cout << *(--iter) << "\n";
    cout << *(iter--) << "\n";
    
    exercise5();
    
    
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
