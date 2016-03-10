//
//  ListNumbers.cpp
//  List
//
//  Created by Filip Juristovski on 12/14/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include "ListNumbers.hpp"

NodeNum::NodeNum(int s){
    data = s;
}

ListNum::ListNum(){
    first = NULL;
    last = NULL;
}

void ListNum::push_front(int data){

    NodeNum *node = new NodeNum(data);
    if(first != NULL){
        node->next = first->next;
        node->previous = NULL;
        first = node;
    } else {
        first = node;
        node->next = NULL;
        node->previous = NULL;
    }
}


void ListNum::push_back(int data){
    
    NodeNum* new_NodeNum = new NodeNum(data); //create data
    
    if(last == nullptr){ //adding to an empty ListNum
        last = new_NodeNum;
        first = new_NodeNum;
    } else {
        new_NodeNum->previous = last;
        last->next = new_NodeNum;
        last = new_NodeNum;
    }
}

void ListNum::insert(IteratorNum iter, int data){
    
    if(iter.position == NULL) // ListNum is empty
    {
        push_back(data);
        return;
    }
    
    //can add at beginning of ListNum or in middle
    
    
    NodeNum* after = iter.position;
    NodeNum *before = after->previous;
    
    NodeNum* new_NodeNum = new NodeNum(data);
    new_NodeNum->next = after;
    new_NodeNum->previous = before;
    
    after->previous = new_NodeNum;
    
    if(before == NULL) //inserting at start of ListNum
    {
        first = new_NodeNum;
    } else
    {
        before->next = new_NodeNum;
    }
}

IteratorNum ListNum::erase(IteratorNum iter){
    
    assert(iter.position != NULL); //check that erase is not null
    
    NodeNum *remove = iter.position;
    NodeNum *after = remove->next;
    NodeNum *before = remove->previous;
    
    if(remove == first)
        first = after;
    else
        before->next = after;
    if(remove == last) //erasing at end of ListNum
        last = before;
    else
        after->previous = before;
    
    delete remove;
    
    IteratorNum r;
    r.position = after;
    r.container = this;
    return r;
    
}

IteratorNum ListNum::begin() {
    IteratorNum iter;
    iter.position = first;
    iter.container = this;
    return iter;
}

IteratorNum ListNum::end(){
    IteratorNum iter;
    iter.position = NULL;
    iter.container = this;
    return iter;
}

void ListNum::reverse(){

    ListNum *list = this;
    
    IteratorNum start = list->begin();
    IteratorNum iter = list->end();
    iter.previous();
    
    IteratorNum check;
    
    for (iter; !iter.equals(start); iter.previous())  {
        
        list->insert(start, iter.get());
        iter = erase(iter);
        
        std::cout << "Doing check\n";
        
        for (check = list->begin(); !check.equals(list->end()); check.next()) {
            std::cout << "value : " << check.get() << "\n";
        }
        
    }
    
}

void ListNum::print(){

    ListNum names = *this;
    IteratorNum check;
    
    cout << "Printing\n";
    
    for (check = names.begin(); !check.equals(names.end()); check.next()) {
        cout << "value is: "  << check.get() << "\n";
    }
    
    
}

//IteratorNum ListNum::swap(IteratorNum iter1, IteratorNum iter2){
//
//    /* This is not done, need to consider case of iter 1 and iter 2 not next to each other, can have 1 block inbetween or more */
//    
//    
//    assert(iter1.position != NULL && iter2.position != NULL);
//    
//    //get links to node
//    NodeNum* iter1node = iter1.position;
//    NodeNum* iter2node = iter2.position;
//    
//    //create before and after nodes
//    NodeNum* iter1before = iter1node->previous;
//    NodeNum * iter2after = iter2node->next;
//    
//    //connect 2 to before
//    if (iter1before != NULL) {
//        iter1before->next = iter2node;
//        iter2node->previous = iter1before;
//    } else{
//        iter2node->previous = NULL;
//        first = iter2node;
//    }
//    
//    //connect 1 and 2
//    iter2node ->next = iter1node;
//    iter1node ->previous = iter2node;
//    
//    //connect 1 to after
//    if (iter2after != NULL) { // connect normally
//        iter1node->next = iter2after;
//        iter2after -> previous  = iter1node;
//    } else{
//        iter1node -> next = NULL;
//        last = iter1node;
//    }
//    
//    return iter2;
//    
//    
////    if (iter2node->next == NULL)
////    { //end of list
////        //set up before node
////        NodeNum* iter1before = iter1node ->previous;
////        iter1before = iter2node;
////        
////        //move iter 1 to other side
////        iter1node->previous = iter2node;
////        iter1node ->next = NULL;
////        
////        //move iter 2 to other side
////        iter2node -> next = iter1node;
////        iter2node ->previous = iter1before;
////        
////    }
////    else if(iter1node->previous == NULL) //beginning of list
////    {
////        //set up after node
////        NodeNum * iter2after = iter2node->next;
////        iter2after -> previous = iter1node;
////        
////        //move iter2 to other side
////        iter2node -> previous = NULL;
////        iter2node -> next = iter1node;
////        
////        //move iter 1 to other side
////        iter1node -> next = iter2after;
////        iter
////    
////    }
////    else // middle of list
////    {
////    
////    }
//
//}

void ListNum::swap(ListNum& list2){

    ListNum* list1 = this;
    
    IteratorNum end1 = list1->end();
    IteratorNum end2 = list2.end();

    IteratorNum start1 = list1->begin();
    IteratorNum start2 = list2.begin();
    
    while(!start1.equals(end1) && !start2.equals(end2)){
        
        list1->insert(start1, start2.get());
        list2.insert(start2, start1.get());
        start1 = erase(start1);
        start2 = erase(start2);
        
        list1->print();
        list2.print();
    }
    
}

IteratorNum::IteratorNum(){
    position = NULL;
    container = NULL;
}

int IteratorNum::get() const{
    assert(position != NULL);
    return position->data;
}

void IteratorNum::next(){
    assert(position != NULL); //Illegal to derefernece null pointer, cannot move past end position
    position = position->next;
}


void IteratorNum::previous(){
    assert(position != container->first);
    if(position == NULL)
        position = container->last;
    else
        position = position->previous;
}

bool IteratorNum::equals(IteratorNum iter) const{
    return position == iter.position;
}
