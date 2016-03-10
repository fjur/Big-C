//
//  Car.cpp
//  Pointers
//
//  Created by Filip Juristovski on 12/1/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include "Car.hpp"

void Car::set_model(string mod){
    model = mod;
}

Car::Car(){
    model = "";
    owner = NULL;
    driver = NULL;
}

Car::Car(string mod, Person* own, Person* driv){
    model = mod;
    owner = own;
    driver = driv;
}

void Car::print() const{
    
    cout << "Owners Name: " << owner->get_name() << "\n";
    cout << "Owners Age: " << owner->get_age() << "\n";
    if( driver != NULL){
        cout << "Drivers Name: " << driver->get_name() << "\n";
        cout << "Drivers Age: " << driver->get_age() << "\n";
    }
    cout << "Car Model: " << model << "\n";
    
}
