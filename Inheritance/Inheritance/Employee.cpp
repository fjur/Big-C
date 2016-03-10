//
//  Employee.cpp
//  Pointers
//
//  Created by Filip Juristovski on 12/1/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include "Employee.hpp"


using namespace std;

Employee::Employee(){
    firstName = "";
    lastName ="";
    salary = 0;
    
}

Employee:: Employee(string nameString, double sal){
    firstName = nameString;
    lastName = "";
    salary = sal;
}

Employee::Employee(string first, string last, double sal ){

    firstName = first;
    lastName = last;
    salary = sal;
    
}

double Employee::get_salary() const{
    return salary;
}



string Employee::get_name() const{
    return firstName;
}


void Employee::raise(){
  
    

}



void Employee:: print() const {
    
    cout << "First name is: " << firstName << "\n";
    cout << "Last name is: " << lastName << "\n";
    }
