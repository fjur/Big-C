//
//  Heap.hpp
//  Sets and maps
//
//  Created by Filip Juristovski on 12/22/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#ifndef Heap_hpp
#define Heap_hpp

#include <vector>
#include <iostream>

using namespace std;

class Heap{
public:
    Heap();
    void push(int new_element);
    int top() const;
    void pop();
    int size() const;
    
    
private:
    void fix_heap();
    int get_left_child_index(int index);
    int get_right_child_index(int index);
    int get_parent_index(int index);
    int get_left_child(int index);
    int get_right_child(int index);
    int get_parent(int index);
    
    vector<int> elements;
    
};


#include <stdio.h>

#endif /* Heap_hpp */
