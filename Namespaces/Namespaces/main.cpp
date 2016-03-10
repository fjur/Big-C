//
//  main.cpp
//  Namespaces
//
//  Created by Filip Juristovski on 1/10/16.
//  Copyright © 2016 Filip Juristovski. All rights reserved.
//

#include <iostream>
#include "charts.hpp"
#include "stack.hpp"
#include "queue.hpp"


//class Node
//{
//public:
//    Node(int d);
//    class Iterator;
//    
//private:
//    int data;
//    Node* next;
//    Node* previous;
//};
//
//
//class Node::Iterator
//{
//public:
//    Iterator();
//    Node::Iterator get() const;
//private:
//    Node* position;
//    
//};
//
//Node::Node(int d): data(d){};
//
//
//Node::Iterator Node::Iterator::get() const
//{
//    Node::Iterator iter;
//    iter.position = new Node(3);
//    return iter;
//}
//
//Node::Iterator::Iterator()
//{
//    position = NULL;
//}
//

namespace FilipsNamespace {
    
    bool endl(string s)
    {
        unsigned long i = s.length() - 1;
        std::cout << s[i] << "\n";
        if (islower(s[i]))
        {
                return true;
        }
        return false;
    }
}

namespace fil =FilipsNamespace;

//MAIN IS HERE


int main(int argc, const char * argv[]) {
    // insert code here...
    
//    Node* node_data = new Node(2);
//    Node::Iterator pos; //= node_data->get();
    
    BarChart chart1;
    chart1.add(3);
    chart1.add(4);
    chart1.draw();
    
    Chart::Iterator iter = chart1.begin();
    
    while (!(iter.compare(chart1.end()) == 0)) {
        std::cout << "Value is " <<iter.get() << "\n";
        iter.next();
    }
    
    Stack stack1;
    stack1.push("a");
    stack1.push("b");
    
    std::cout << stack1.top() << "\n";
    stack1.pop();
    std::cout << stack1.top() << "\n";
    stack1.pop();

    Queue queue1;
    queue1.push("c");
    queue1.push("d");
    
   
    std::cout << queue1.front() << "\n";
    queue1.pop();
    std::cout << queue1.front() << "\n";
    queue1.pop();
    
    std::string s = "FILIP";
    
    if(fil::endl(s))
        std::cout << "it is lowercase \n";
    else
        std::cout << "is uppercase \n";
    
    std::cout << "Hello, World!\n";
    return 0;
}
