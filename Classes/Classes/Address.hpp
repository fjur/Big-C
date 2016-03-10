//
//  Address.hpp
//  Classes
//
//  Created by Filip Juristovski on 11/29/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#ifndef Address_hpp
#define Address_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class Address{
public:
    Address (int houseNumber, string street, int aptNumber, string city, string state, int postalCode);
    Address (int houseNumber, string street, string city, string state, int postalCode);
    void comes_before(const Address& testAddress) const;
    void print() const;
    
   
private:
    int houseNumber;
    string street;
    int aptNumber;
    string city;
    string state;
    int postalCode;
    
    
};

#endif /* Address_hpp */
