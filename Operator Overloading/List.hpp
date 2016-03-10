//
//  List.hpp
//  List
//
//  Created by Filip Juristovski on 12/14/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include <stdio.h>
#include <string>
#include <cassert>

using namespace std;

class List;
class Iterator;

class Node{
public:
    Node(std::string s);
private:
    std::string data;
    Node* previous;
    Node* next;
    friend class List;
    friend class Iterator;
};


class List{
public:
    List();
    void push_back(std::string data);
    void insert(Iterator iter, std::string data);
    Iterator erase(Iterator iter);
    Iterator begin();
    Iterator end();
private:
    Node* first;
    Node* last;
    friend class Iterator;
};

class Iterator{
public:
    Iterator();
    std::string get() const;
    void next();
    void previous();
    bool equals(Iterator iter) const;
    
    //operator overloading
    Iterator& operator--();
    Iterator operator--(int unused);
    Iterator& operator++(int unused); //post fix
    string operator*() const;
    bool operator!=(const Iterator& b) const;
    
private:
    Node* position;
    List* container;
    friend class List;
};

#endif /* List_hpp */
