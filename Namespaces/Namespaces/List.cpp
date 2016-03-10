//
//  List.cpp
//  List
//
//  Created by Filip Juristovski on 12/14/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include "List.hpp"

Node::Node(std::string s){
    data = s;
}

List::List(){
    first = NULL;
    last = NULL;
}

void List::push_back(std::string data){
    
    Node* new_node = new Node(data); //create data
    
    if(last == nullptr){ //adding to an empty list
        last = new_node;
        first = new_node;
    } else {
        new_node->previous = last;
        last->next = new_node;
        last = new_node;
    }
}

void List::insert(Iterator iter, std::string data){

    if(iter.position == NULL) // list is empty
    {
        push_back(data);
        return;
    }
    
    //can add at beginning of list or in middle
    
    
    Node* after = iter.position;
    Node *before = after->previous;
    
    Node* new_node = new Node(data);
    new_node->next = after;
    new_node->previous = before;
    
    after->previous = new_node;
    
    if(before == NULL) //inserting at start of list
    {
        first = new_node;
    } else
    {
        before->next = new_node;
    }
}

Iterator List::erase(Iterator iter){
    
    assert(iter.position != NULL); //check that erase is not null
    
    Node *remove = iter.position;
    Node *after = remove->next;
    Node *before = remove->previous;
    
    if(remove == first)
        first = after;
    else
        before->next = after;
    
    if(remove == last) //erasing at end of list
        last = before;
    else
        after->previous = before;
    
    delete remove;
    
    Iterator r;
    r.position = after;
    r.container = this;
    return r;

}

Iterator List::begin() {
    Iterator iter;
    iter.position = first;
    iter.container = this;
    return iter;
}

Iterator List::end(){
    Iterator iter;
    iter.position = last;
    iter.container = this;
    return iter;
}

Iterator::Iterator(){
    position = NULL;
    container = NULL;
}

string Iterator::get() const{
    assert(position != NULL);
    return position->data;
}

void Iterator::next(){
    assert(position->next != NULL); //always check to make sure you aren't moving into null position
    position = position->next;
}


void Iterator::previous(){
    assert(position != container->first);
    if(position == NULL)
        position = container->last;
    else
        position = position->previous;
}

bool Iterator::equals(Iterator iter) const{
    return position == iter.position;
}
