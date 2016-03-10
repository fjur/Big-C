//
//  Address.cpp
//  Classes
//
//  Created by Filip Juristovski on 11/29/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include "Address.hpp"

using namespace std;

Address:: Address(int houseNumber, string street, int aptNumber, string city, string state, int postalCode)
{
    houseNumber = houseNumber;
    street = street;
    aptNumber = aptNumber;
    city = city;
    state = state;
    postalCode = postalCode;
}

Address::Address (int hn, string str, string ct, string st, int pc)
{
    //cout <<  "test: " << houseNumber;
    houseNumber = hn;
    street = str;
    city = ct;
    state = st;
    postalCode = pc;
    
}

void Address::comes_before(const Address& testAddress) const
{
    if (postalCode > testAddress.postalCode) {
        cout << "New Address comes before \n";
    } else {
        cout << "Old address comes before \n";
    }
    
   
}

void Address::print() const
{
    cout << "Address: " << houseNumber
    << " street\n" << street;
    cout << city << state << postalCode << "\n";
}