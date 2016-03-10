//
//  main.cpp
//  Inheritance
//
//  Created by Filip Juristovski on 12/6/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//


#include <iostream>
#include <string>
#include "Programmer.hpp"
#include "person.hpp"
#include "student.hpp"
#include "instructor.hpp"
#include "Manager.hpp"
#include "executive.hpp"
#include "worker.hpp"
#include "HourlyWorker.hpp"
#include "SalariedWorker.hpp"


using namespace std;

//class B
//{
//public:
//    B();
//    B(int n); };
//B::B() {
//    cout << "B::B()\n";
//}
//B::B(int n) {
//    cout << "B::B(" << n << ")\n";
//}
//
//class D : public B
//{
//public:
//    D();
//    D(int n);
//private:
//    B b;
//};
//D::D() {
//    cout << "D::D()\n";
//}
//D::D(int n) //: B(n)
//{
//  //  b = B(-n);
//    cout << "D::D("<< n <<")\n";
//}

//exercise 2

//class B
//{
//public:
//    void print(int n) const;
//};
//void B::print(int n) const
//{
//    cout << n << "\n";
//}
//class D : public B
//{
//public:
//    void print(int n) const;
//};
//void D::print(int n) const
//{
//    if (n <= 1) B::print(n);
//    else if (n % 2 == 0) print(n / 2);
//    else print(3 * n + 1);
//    
//}

//exercuse 3

//class B
//{
//public:
//    B();
//    virtual void p() const;
//    void q() const;
//};
//B::B() {}
//void B::p() const
//{
//    cout << "B::p\n";
//}
//void B::q() const
//{
//    cout << "B::q\n";
//}
//class D : public B
//{
//public:
//    D();
//    virtual void p() const;
//    void q() const;
//};
//
//D::D() {
//}
//void D::p() const
//{
//    cout << "D::p\n";
//}
//void D::q() const
//{
//    cout << "D::q\n";
//}



int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    //exercise 1
    
//    D d(3);
//    return 0;
    
    //exercise 2
    
//    D d;
//    d.print(3);
    
    //exercise 3
//    B b;
//    D d;
//    B* pb = new B;
//    B* pd = new D;
//    D* pd2 = new D;
//    b.p(); b.q();
//    d.p(); d.q();
//    pb->p(); pb->q();
//    pd->p(); pd->q();
//    pd2->p(); pd2->q();
//    return 0;
    
    //exercise Programming 1
//    Programmer john("hacker, harry", 4000);
//    cout << john.get_name() << "\n";
    
    //exercise Programming 2
//    Person Mike("Mike", "January 28");
//    Student John("John", "April 14", "chem");
//    Instructor Sylvestor("Sylvestor", "december 28th", 25);
//    Mike.print();
//    John.print();
//    Sylvestor.print();
    
    //programming exercise 3
//    Manager tom("tom", 300, "supplies");
//    Executive fred("fred", 600, "boss status");
//    tom.print();
//    fred.print();
    
    //programming exercise 4
    HourlyWorker* Timmy = new HourlyWorker("timmy", 5);
    SalariedWorker* Johnny = new SalariedWorker("Johnny", 10);
    HourlyWorker *Bryden = new HourlyWorker("Bryden", 5);
    
    Timmy->compute_pay(5);
    Johnny->compute_pay(10);
    Bryden->compute_pay(60);
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
