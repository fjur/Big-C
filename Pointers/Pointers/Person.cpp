//
//  Person.cpp
//  Pointers
//
//  Created by Filip Juristovski on 12/1/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include "Person.hpp"

using namespace std;

Person::Person(){
    name = "";
    popCounter = 0;
    bestFriend = NULL;
    
}

Person::Person(std::string na){
    name = na;
    popCounter = 0;
    bestFriend = NULL;
}

Person::Person(string na, int ag){
    name = na;
    age = ag;
}

void Person:: set_best_friend(Person *p){
    bestFriend = p;
    //popCounter++;
    p->increasePop();

}

void Person::increasePop(){
    popCounter++;
}

int Person::get_age(){
    return age;
}

void Person::set_age(int a){
    age = a;
}

string Person::get_name(){
    return name;
}

void Person::print(){
    cout << "name is: " << name << "\n";
    cout << "Best Friend is: " << bestFriend->get_name() << "\n";
    cout << "Pop Counter is: " << popCounter << "\n";
}