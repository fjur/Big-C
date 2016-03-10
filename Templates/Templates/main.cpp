//
//  main.cpp
//  Templates
//
//  Created by Filip Juristovski on 1/3/16.
//  Copyright © 2016 Filip Juristovski. All rights reserved.
//

#include <iostream>
#include "templates.hpp"
#include <vector>

#include "comparisonclasses.hpp"
#include "selectionSortTemplate.hpp"
#include "MergeSortTemplate.hpp"
#include "binarySearchTemplate.hpp"
#include "ListTemplate.hpp"

//bad coding, templates should be stored in header files
//template<typename T>
//void test1(T a)
//{
//    std::cout << "Value for this is " << a << "\n";
//}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    double a = 3;
    //template_test1("John");
    template_test1(a);
    
    std::vector<int> b;
    b.push_back(2);
    b.push_back(1);
    b.push_back(4);
    b.push_back(3);
    
    std::vector<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    d.push_back(6);
    d.push_back(7);
    d.push_back(8);
    
    std::vector<string> c;
    c.push_back("gary");
    c.push_back("allison");
    c.push_back("fry");
    c.push_back("bill");
    
    std::vector<string> e;
    e.push_back("a");
    e.push_back("b");
    e.push_back("c");
    e.push_back("d");
    e.push_back("e");
    e.push_back("f");
    e.push_back("g");
    e.push_back("h");

    
    //CompareByLess<T> a;
//    less<int> T;
//    CompareByMore<string> Y; //controls policy (behaviour of comparator)
//    CompareByLess<string> X;
    
   //selection_sort(b, Y);
    selection_sort(c, CompareByLess<string>());
    
    string john = "c";
    
    //merge_sort_template(c, 0, b.size()-1.0, CompareByMore<string>());
   int index = binary_search_template(e, 0, d.size()-1.0, john);
    
    Iterator<int> iter;
    List<int> f;
    f.push_back(1);
    f.push_back(2);
    f.push_back(3);
    iter = f.begin();
    Iterator<int> pos = f.end();
    
    Iterator<string> g;
    List<string> h;
    h.push_back("a");
    h.push_back("b");
    h.push_back("c");

    
    for (iter = f.begin(); !iter.equals(f.end()); iter.next()) {
        cout << "Iterator value is " << iter.get() << "\n";
    }
    
    for (g = h.begin(); !g.equals(h.end()); g.next()) {
        cout << "Iterator value is " << g.get() << "\n";
    }
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
