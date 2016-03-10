//
//  Person.hpp
//  Pointers
//
//  Created by Filip Juristovski on 12/1/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp

#include <string>
#include <stdio.h>
#include <iostream>

class Person{
public:
    Person();
    Person(std::string na);
    
    Person (std::string na, int ag );
    
    
    void set_best_friend(Person* p );
    void print();
    
    std::string get_name();
    
    int get_age();
    void set_age(int a);
    
    void increasePop();
    
private:
    std::string name;
    Person * bestFriend;
    int popCounter;
    int age;

};


#endif /* Person_hpp */
