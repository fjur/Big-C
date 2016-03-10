//
//  Heap.cpp
//  Sets and maps
//
//  Created by Filip Juristovski on 12/22/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include "Heap.hpp"

Heap::Heap(){
    elements.push_back(0);
}

void Heap::push(int new_element){
    
    //add new leaf
    elements.push_back(0);
    
    int index = elements.size() - 1.0;
    
    while (index > 1 && new_element > get_parent(index)) {
        
        elements[index] = get_parent(index);
        index = get_parent_index(index);
        
    }
    
    elements[index] = new_element;

}

int Heap::top() const{ //removes max element from heap

    return elements[1];
    
}

void Heap::pop(){

    //remove last element
    int last_index = elements.size() -1.0;
    int last = elements[last_index];
    
    elements.pop_back();
    
    if (last_index >1) {
        elements[1] = last;
        fix_heap();
    }
}

int Heap::size() const {

    return elements.size() -1.0;

}

void Heap::fix_heap() {

    int root = elements[1];
    
    int last_index = elements.size()-1.0;
    
    int index = 1;
    bool more = true;

    while(more){
    
        int child_index = get_left_child_index(index);
        if (child_index  <= last_index)
        {
            
            //get larger child
            
            //get left child first
            
            int child = get_left_child(index);
            
            if (get_right_child_index(index) <= last_index && get_right_child(index) > child) {
                child = get_right_child(index);
                child_index = get_right_child_index(index);
            }
            
            //check if smaller child is larger than root
            if (child > root) {
                elements[index] = child;
                index = child_index;
            } else
            {
            //root is larger than both children
                more = false;
            
            }
        
        }
        
        else
        {
            //No Children
            more = false;
        
        }
    }
    
    elements[index] = root;
}

int Heap::get_left_child_index(int index){
    
    return 2*index;
}
int Heap::get_right_child_index(int index){
    return 2*index +1;
}

int Heap::get_parent_index(int index){
    return index/2;
}
int Heap::get_left_child(int index){
    return elements[2*index];
}
int Heap::get_right_child(int index){

    return elements[2*index +1];
}
int Heap::get_parent(int index){
    return elements[index/2];
}
