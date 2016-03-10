//
//  main.cpp
//  Memory Management
//
//  Created by Filip Juristovski on 12/29/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include <iostream>
#include <iostream>

#include "test.hpp"
#include "Fraction.hpp"
#include "Sharedstring.hpp"
#include "trace.hpp"
#include "StringTest.hpp"

using namespace std;

//
//char* secret_message()
//{
//    char message_buffer[100];
//    char* text = "Use the force, Luke!";
//    int n = 0;
//    while (text[n] != '\0')
//        n++;
//    for (int i = 0; i <= n; i++)
//        message_buffer[i] = text[i];
//    return message_buffer;
//}

void f(const Fraction& a)
{
    Fraction b = a;
    Fraction* c = new Fraction(3, 4);
    //Fraction* d = &a; //parameters are const, said I wouldn't change it so I cannot assign this in case I change it, need to take out const for this to work!
    Fraction* e = new Fraction(7,8);
    Fraction* f = c;
    delete f;
}

//exercise shared string



void ftrace(Trace t)
{
    cout << "Entering f \n";
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
//    char* ha;
//    ha = secret_message();//"Use the force you tard";//secret_message();
//    
//    int n = 0;
//    int q = 23492034;
//    char* lol = "buahahahhasdkfsjhfoiwhnelrknasfkhlgi";
//  //  string s = "Bad lule";
//    
//    while (ha[n] != '\0') {
//        n++;
//    }
//    
//    //notice how the output changes as lost value to local variable stack is overwritten
//    
//    for (int i = 0; i <= n ; i++) {
//        cout << ha[i];
//    }
//    cout <<"\n";
//    cout << ha;
    
    
    //exercise 1
//    char a[4], b[4], c[4];
//    a[0] = b[0] = c[0] = '\0';
//    cin >> b;
//    cout << "a is " << a << "\n";
//    cout << "b is " << b << "\n";
//    cout << "c is " << c << "\n";
    
    //exercise2
//    Base b;
//    Derived d(4);
//    b = d;
//    b.display();
//    Base* bp = new Derived(7);
//    bp->display();
    
    //exercise 3
//    Derived d(5);
//    d.display();
    
//    Fraction a(3,1);
//    
//    f(a);
    
    //exercise shared string
//    cout << "Entering main\n";
//    cout << "SharedString a = \"Fred\";\n";
//    SharedString a = "Fred";
//    cout << "SharedString b = \"Alice\";\n";
//    SharedString b = "Alice";
//    cout << "SharedString c;\n";
//    SharedString c;
//    cout << "c = a;\n";
//    c = a;
//    cout << "a = b;\n";
//    a = b;
//    cout << "g = b;\n";
//    g = b;
//    cout << "Exiting main\n";    
    
    
//    Trace tracer("main");
//    ftrace(tracer);
//    
//    Trace t("abc");
//    Trace u = t;
//    
//    Trace a("abc");
//    Trace b("xyz");
//    
//    a=b;
//    
//    ftrace(a);
    
    
    StringTest test1("hello");
    StringTest test2("hey");
    StringTest test3("hello");
    test1 += test2;
    test1 += "John";
    
   // StringTest john(5, 'q');
    
    StringTest John;
    John = test3 + test2;
    
    char a[] = {'a', 'b', 'c'};
    char b[] = {'a', 'b', 'd'};
    
    
    
//    if(a[0] > b[0])
//        cout << "ha";
//    else if (b[0] > a[0])
//        cout << "no";
   
    StringTest test4 = "ab";
    StringTest test5 = "abdefe";
   // int result = test4.compare(test5);
    bool result;
    result = test4 > test5;
    
    if (test4 != test5) {
        cout << "!=\n";
    }
    
    if (test4 == test5) {
        cout << "==\n";
    }
    
    //test4.resize(2, 'g');
    StringTest test6 = test4(3,3);
    
    test1 = test2;
    test1[0] = 'd';
    
    std::cout << "Hello, World!\n";
    return 0;
}
