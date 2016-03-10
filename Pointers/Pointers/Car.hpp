//
//  Car.hpp
//  Pointers
//
//  Created by Filip Juristovski on 12/1/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#ifndef Car_hpp
#define Car_hpp



#include <string>
#include <stdio.h>

#include "person.hpp"

using namespace std;

class Car{
public:
    Car();
    Car(string mod);
    Car(string mod, Person *own, Person * driv);
    
    void set_model(string mod);
    
    void print() const;
    
private:
    string model;
    Person* owner;
    Person * driver;
    
};


#endif /* Car_hpp */
