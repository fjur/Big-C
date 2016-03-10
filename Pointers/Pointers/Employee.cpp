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
    bank = NULL;
    
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
    bank = NULL;
    
}

double Employee::get_salary() const{
    return salary;
}


BankAccount* Employee::get_bank() const{
    return bank;
}

string Employee::get_name() const{
    return lastName;
}

void Employee::set_bank(Employee* e, double amount){
    if (e != NULL) {
        bank = e->get_bank();
    }
   else
       bank = new BankAccount(amount);
}

void Employee::raise(){
  
    BankAccount* tempBank = get_bank();//new BankAccount();
    
    
    double amt;

    //tempBank = get_bank();
    amt = tempBank->get_amount();
    amt = (amt + (amt/12));
    tempBank->set_amount(amt);
    

    //delete tempBank; //Do not do this, you delete their bank account then
    tempBank = NULL;
    

}

void Employee::delete_bank(Employee* e){
    BankAccount* bank2delete;
    if (get_bank() != NULL) {
        delete get_bank();
//        bank2delete = get_bank();
//        delete bank2delete;
//        bank2delete = NULL;
    }else{
        //delete get_bank();
    }
    
}

void Employee:: print() const {
    
    cout << "First name is: " << firstName << "\n";
    cout << "Last name is: " << lastName << "\n";
    BankAccount* bankholder = NULL;
    bankholder = get_bank();
    if(bankholder != NULL)
    cout << "Account Balance is: " << get_bank()->get_amount() << "\n";
}
