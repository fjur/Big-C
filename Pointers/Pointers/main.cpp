//
//  main.cpp
//  Pointers
//
//  Created by Filip Juristovski on 11/27/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//


#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include "person.hpp"
#include "Car.hpp"
#include "Employee.hpp"
#include "bankAccount.hpp"



using namespace std;

//If you want to run these need to comment out exercise 11
//
//class Employee
//{
//    public:
//    //constructors
//    Employee (string n, int salary);
//    Employee();
//    
//    //mutator
//    void set_salary(double e);
//    //accessor
//    int get_salary() const;
//    
//    private:
//    string name;
//    double salary;
//};
//
//Employee::Employee(string n, int sal){
//    name = n;
//    salary = sal;
//}
//
//
//Employee::Employee(){
//    salary = 0;
//    name = "boy";
//}
//
//void Employee::set_salary(double e){
//    salary = e;
//}
//
//int Employee::get_salary()const {
//    return salary;
//
//}
//
//void exercise1(){
//    
//    int* p = new int;
//    *p = 5;
//    *p = *p +5;
//    //Employee boy;
//    //cout << boy.get_salary() << "\n";
//    Employee* e1 = new Employee("Hacker, Harry", 340000);
//    Employee* e2 = new Employee();
//    
//    e2->set_salary(38000);
//    delete e2;
//    e2 = NULL;
//    
//    Employee *e3 = new Employee("Lisa, lin", 680000);
//    cout << (*e3).get_salary();
//    //cout << e1.get_salary();
//    std::cout << *p ;
//}
//
//void exercise2(){
// 
//    Employee *e1 = new Employee("Charles, hones", 58000);
//    Employee *e2;
//    Employee *e3 = NULL;
//    Employee *e4 = new Employee("Mikael, dougie", 500);
//    delete e4;
//    cout << e1->get_salary(); //returns nothing
//   // e3->get_salary(); //doesnt run since points to null
//    
//}
//
//void exercise3(){
//    
//    Employee harry = Employee("Hacker, Harry", 35000);
//    Employee boss = harry;
//    Employee* pharry = new Employee("Hacker, Harry", 35000);
//    Employee* pboss = pharry;
//    boss.set_salary(45000);
//    (*pboss).set_salary(45000);
//    cout << "salary is: " << harry.get_salary() << "\n";
//    cout << boss.get_salary() << "\n";
//    cout << pharry->get_salary() << "\n";
//    cout << pboss->get_salary() << "\n";
//    cout << (unsigned long)(pharry) << "\n";
//    cout << (unsigned long)(pharry+01) << "\n";
//}

void exercise4(){
    
    int var = 3;
    int* p = &var;
    double qar = 3.5;
    double* q = &qar;
    cout<< (unsigned long)(p) << "\n";
    cout<< (unsigned long)(p+1) << "\n";
    cout<< (unsigned long)(q) << "\n";
    cout<< (unsigned long)(q+1) << "\n";
}

void exercise5(int p[]){
    
    int* q;
    const int *r;
    int s[10];
    std::cout << "What the :" << *p << "\n";
    p=q;
   // p=r; //illegal
    p=s;
    std::cout << "What the :" << *p << "\n";
    std::cout << "What the :" << p << "\n";
    std::cout << "What the :" << s << "\n";
    q=p;
   // q=r; //illegal
    q=s;
    r=p;
    r=q;
    r=s;
    //s=p; //illegal sizes dont match
  //  s=q; //can't assign a location to a different address
 //   s=r; //illegal
}

void exercise6(){
    double values[] = {2,3,5,7,11,13};
    double *p = values+3;
    
    cout << values[1] << "\n"; //returns value of index 1
    cout << (values+1) << "\n"; // returns address of index 1
    cout << *(values+1) << "\n"; // returns value of index 1
    cout << p[1] << "\n"; // adds one to values of 7
    cout << (p+1) << "\n";
     cout << (p) << "\n";
    cout << (p-values) << "\n";
    
    
    cout << "end\n";

}

void exercise7(){
    char a[] = "Mary had a little lamb";
    char* p = a;
    int count = 0;
    while (*p != '\0')
    {
        count++;
        while (*p != ' ' && *p != '\0') p++;
        while (*p == ' ') p++;
    }
    cout << count;
}

void print(double x){cout << x << endl;}

void apply(const vector<double>& data, void (*f)(double)){
    for (size_t i = 0; i < data.size(); i++)
        f(data[i]);
}

void exercise8(){
    vector<double> v{1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
    apply(v, print);
}

//void print(double x) //function I want to pass
//{
//    cout << x << endl;
//}
//
//void apply(const vector<double>& data, void (*f)(double)) { //function with pointer to other function print
//    for (size_t i = 0; i < data.size(); i++)
//        f(data[i]);
//}

void exercise9( vector<string>& a){
    
    const int MAX_VAL = 4;
    const int MIN_VAL = 0;
    
    time_t timev = time(0);
    srand(time(&timev));
    
    //create vector object
    vector<Person*> people;
    Person* names;// = new Person(a[0]);
    for (int i =0; i < a.size(); i++) {
        names = new Person(a[i]);
        people.push_back(names);// = names;
 
    }
    
    //get & set best friend
    int ran;
    for (int i = 0; i < a.size(); i++) {
        ran = rand()%(MAX_VAL-MIN_VAL)+MIN_VAL;
        people[i]->set_best_friend(people[ran]);
    }
    
    //print out all the stuff
    for(int i =0; i < people.size(); i++){
        people[i]->print();
    }
    
   
}

Person* getDriver(){
    
    int done = 0;
    string yes = "y";
    string ownerCheck;
    int driverAge = 0;
    string driverName;
    
    while (!done) {
        
        cout << "Is the owner the driver? 'Y' if Yes, 'N' is no\n";
        cin >> ownerCheck;
        
        if(!ownerCheck.compare(yes))
        {
            return NULL;
        }else if(!ownerCheck.compare("n")){
            cout << "Please enter name of driver\n";
            cin >> driverName;
            cout << "please enter age of Driver\n";
            cin >> driverAge;

            done =1;
            
        } else{
            cout << "Sorry not a valid response \n";
            
        }
    }
    
    return new Person(driverName, driverAge);

}

Person* getOwner(string& carModel){
   
    int  more = 0;
    string ownerName;
    int ownerAge =0;
    //string carModel;
    
    while (!more) {
        cout << "Please enter an Owner\n";
        cin >> ownerName;
        cout << "please enter age of owner\n";
        cin >> ownerAge;
        cout << "please enter car model\n";
        cin >> carModel;
        more = 1;

    }
    
    return new Person(ownerName, ownerAge);
}

int check_for_more(){

    int done = 0;
    bool doMore = false;
    string donecheck;
    
    while (!done) {
        
        cout << "Do you want to enter more?\n";
        cin >> donecheck;
        
        
        if(!donecheck.compare("y"))
        {
            done = 1;
            doMore = true;
            
        }else if(!donecheck.compare("n")){
            done = 1 ;
            doMore = false;
            
        } else{
            cout << "Sorry not a valid response \n";
        }
    }

    return doMore;
}

void increase_age(vector<Person*> a){
    
    int age;
    for (int i=0; i <a.size() ; i++) {
        age = a[i]->get_age();
        a[i]->set_age(age+1);
    }
}

void exercise10(){

    vector<Person*> carOwners;
    vector<Car*> cars;
    string carModelString;
    bool doMore = false;
    
    do {
        //get names are cars
        Person *owner = getOwner(carModelString);
        
        //create person
        carOwners.push_back(owner);
        
        //ask if driver of car
        Person *driver = getDriver();
        
        //create driver optional-Null
        if(driver != NULL)
            carOwners.push_back(driver);
        
        //create car
        Car carModel(carModelString, owner, driver);
        
        //push care onto vector
        cars.push_back(&carModel);
        
        //ask to create more
        doMore = check_for_more();
        
    } while (doMore);
    
    //increase the car owners age
    increase_age(carOwners);
    
    //print out all the cars
    for (int i = 0; i < cars.size();i++) {
        cars[i]->print();
    }
    
    
}
Employee* get_employee_info(){

    int  more = 0;
    string employeeName;
    double employeeSalary =0;
    string firstName = "";
    string lastName = "";
    
    while (!more) {
        cout << "Please enter Employee First Name\n";
        cin >> firstName;
        cout << "Please enter Employee Last Name\n";
        cin >> lastName;
       // getline (cin, employeeName);
        cout << "please enter Salary of Employee\n";
        cin >> employeeSalary;
        more = 1;
    }
    

//    std::size_t found = employeeName.find_first_of(",");
//    if (found !=std::string::npos) {
//        firstName = employeeName.substr(0,found);
//        lastName = employeeName.substr(found+1);
//       // cout<< firstName << lastName;
//    }
    
    return new Employee(firstName,lastName, employeeSalary);
    
}

void setup_bank(vector<Employee*> a){

    string previousName;
    string name;
    Employee* eoldpholder;
    Employee* enewholder;
    //check doesnt exist on previous value
    if (a.size() > 1) {
        eoldpholder =a[a.size()-2];
        previousName = a[a.size()-2]->get_name();
        enewholder =a[a.size()-1];
        name = enewholder->get_name();
        if(!previousName.compare(name)){
            //it exists so assign same bank
            enewholder->set_bank(eoldpholder, NULL);
        } else{
            a.back()->set_bank(NULL, a.back()->get_salary());
        }
        
    } else{
        //doesn't exist so new bank
        a.back()->set_bank(NULL, a.back()->get_salary());
    }


}

void increase_bank_value(vector<Employee*> a){
    
    for (int i =0; i < a.size(); i++) {
        a[i]->raise();
    }
}

void delete_bank(vector<Employee*> a){
    
    for (int i =0; i < a.size(); i++) {
        a[i]->delete_bank(a[i]);
    }


}

void exercise11(){
    
    bool more = false;
    
    vector<Employee*> employees;
    
    do{
    //get employee full name & salary and return
    employees.push_back(get_employee_info());
    //check doesn't exist on previous value
    
    //setup their bank account and tie in last names
    setup_bank(employees);
        
    more = check_for_more();
        
    } while(more);
    
    increase_bank_value(employees);
    
    //print all the info
    for (int i =0; i< employees.size(); i++) {
        employees[i]->print();
    }

   //delete_bank(employees);
   //delete employees[0]->get_bank();
    
    BankAccount * tempBankPtr;
    
    for (int i =0; i < employees.size(); i++) {
        tempBankPtr =employees[i]->get_bank();
        delete tempBankPtr;
        //employees[i]->delete_bank(employees[i]);
    }
    
    //print all the info
    for (int i =0; i< employees.size(); i++) {
        employees[i]->print();
    }
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
   // exercise4();
    
    int p[] = {1,2,3};
   // exercise5(p);
    //exercise6();
    //exercise7();
    //exercise8();
    
    vector<string> names(5);
    names[0] = "Harry";
    names[1] = "larry";
    names[2] = "greg";
    names[3] = "juard";
    names[4] = "mike";
    
    //exercise9(names);
   // exercise10();
    
    exercise11();
    
    std::cout << "Hello, World!\n";
    return 0;
}
