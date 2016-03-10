//
//  main.cpp
//  Class Hierarchies
//
//  Created by Filip Juristovski on 1/11/16.
//  Copyright © 2016 Filip Juristovski. All rights reserved.
//

#include <iostream>
#include "shapes.hpp"
#include <vector>

#include "teachingAssistant.hpp"

using namespace std;

void exercise1()
{

    vector<Polygon*> shapes(3);
    Square s(3);
    cout << s.area() << "\n";
    
    //    shapes.push_back(Square(3));
    //    shapes.push_back(Rectangle(2,1));
    
    shapes[0] = new Square(3);
    shapes[1] = new Rectangle(2, 1);
    
    for (int i = 0; i < shapes.size(); i++) {
        if (shapes[i] != nullptr)
            cout << shapes[i]->area() << "\n";
    }
    
    Square* sq = new Square(4);
    Rectangle* r = dynamic_cast<Rectangle*>(sq);
    
    
    cout << "type id of R is " << typeid(*r).name() << "\n";
    cout << "type id of R is " << typeid(Rectangle).name() << "\n";
    
    //Returns number then class type
    
    if (typeid(*r) == typeid(Rectangle)) {
        cout << "square was cast a rectangle\n";
        cout << "area of sq is " << sq->area() << "\n";
    } else{
        cout << "Casting did not work\n";
        //this will end up using virtual function and not dynamic cast, remove virtual function in .hpp to do dynamic casting (not advised)
        cout << "area of sq is" << sq->area() << "\n";
    }
}

//void exercise2(){
//
//    //need to uncomment EP19.6 in teaching assistant

//    Student s = Student("john", 300);
//    TeachingAssistant ta = TeachingAssistant("Fred", 600, 1234);
//    ta.print();
//    // s.print();
//    
//    vector<Student*> s1 (1);
//    s1[0] = new TeachingAssistant("Lyle", 200, 3209);
//    vector<Employee*> e1 (1);
//    e1[0] = new TeachingAssistant("Bob", 100, 123909);
//    
//    s1[0]->print();
//    e1[0]->print();
//    
//
//}

int main(int argc, const char * argv[]) {
    // insert code here...
 
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
