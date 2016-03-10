//
//  ListNumbers.hpp
//  List
//
//  Created by Filip Juristovski on 12/14/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#ifndef ListNumbers_hpp
#define ListNumbers_hpp

#include <stdio.h>
#include <string>
#include <cassert>
#include <iostream>


using namespace std;

class ListNum;
class IteratorNum;

class NodeNum{
public:
    NodeNum(int s);
private:
    int data;
    NodeNum* previous;
    NodeNum* next;
    friend class ListNum;
    friend class IteratorNum;
};


class ListNum{
public:
    ListNum();
    void push_back(int data);
    void push_front(int data);
    void insert(IteratorNum iter, int data);
    IteratorNum erase(IteratorNum iter);
    IteratorNum begin();
    IteratorNum end();
    void swap(ListNum& list2);
    void reverse();
    void print();
private:
    NodeNum* first;
    NodeNum* last;
    friend class IteratorNum;
};

class IteratorNum{
public:
    IteratorNum();
    int get() const;
    void next();
    void previous();
    bool equals(IteratorNum iter) const;
private:
    NodeNum* position;
    ListNum* container;
    friend class ListNum;
};


#endif /* ListNumbers_hpp */
