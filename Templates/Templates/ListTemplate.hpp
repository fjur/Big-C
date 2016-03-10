//
//  ListTemplate.hpp
//  Templates
//
//  Created by Filip Juristovski on 1/6/16.
//  Copyright © 2016 Filip Juristovski. All rights reserved.
//

#ifndef ListTemplate_hpp
#define ListTemplate_hpp

#include <stdio.h>
#include <cassert>

using namespace std;

template<typename T>
class List;

template<typename T>
class Iterator;

template<typename T>
class Node
{
public:
    Node(T d);
private:
    T data;
    Node<T>* next;
    Node<T>* previous;
    friend class List<T>;
    friend class Iterator<T>;
};

template<typename T>
class List
{
public:
    List();
    void push_back(T d);
    void insert(Iterator<T> iter, T d);
    Iterator<T> erase(Iterator<T> iter);
    Iterator<T> begin();
    Iterator<T> end();
private:
    Node<T>* first;
    Node<T>* last;
    friend class Iterator<T>;
};

template<typename T>
class Iterator
{
public:
    Iterator();
    T get() const;
    void next();
    void previous();
    bool equals(Iterator<T> b) const;
private:
    Node<T>* position;
    List<T>* container;
    friend class List<T>;
};

template<typename T>
inline Node<T>::Node(T d)
{
    data = d;
}

template<typename T>
inline Iterator<T>::Iterator()
{
    position = NULL;
    container = NULL;
}

template<typename T>
inline T Iterator<T>::get() const
{
    assert( position != NULL);
    return position->data;
}

template<typename T>
inline void Iterator<T>::next()
{
    assert(position != NULL);
    position = position->next;
}

template<typename T>
void Iterator<T>::previous()
{
    assert(position != container->first);
    if (position != NULL) {
        position = position->previous;
    } else
        position = container->last;
}

template<typename T>
bool Iterator<T>::equals(Iterator<T> b) const
{
    return position == b.position;
}

template<typename T>
inline List<T>::List()
{
    first = nullptr;
    last = nullptr;
}

template<typename T>
inline Iterator<T> List<T>::end()
{
    Iterator<T> iter;
    iter.position = nullptr;
    iter.container = this;
    return iter;
}

template<typename T>
Iterator<T> List<T>::begin()
{
    Iterator<T> iter;
    iter.position = first;
    iter.container = this;
    return iter;
}

template<typename T>
void List<T>::push_back(T d)
{
    Node<T>* new_date = new Node<T>(d);
    
    if (first == nullptr) {
        first = new_date;
        last = new_date;
    } else{
        new_date->previous = last;
        last->next = new_date;
        last = new_date;
    }
}

template<typename T>
void List<T>::insert(Iterator<T> iter, T d)
{
    if (iter.position == NULL){
        push_back(d);
        return;
    }
    
    //can insert at front, middle
    Node<T>* node_data = new Node<T>(d);
    Node<T>* after = iter.position;
    Node<T>* before = after->previous;
    
    node_data->next = after;
    node_data->previous = before;
    after->previous = node_data;
    
    
    if (before == nullptr) {
        first = node_data;
    } else{
        before->next = node_data;
    }
}

template<typename T>
Iterator<T> List<T>::erase(Iterator<T> iter)
{
    assert(iter.position != nullptr);
    Node<T>* node_delete = iter.position;
    Node<T>* after = node_delete->next;
    Node<T>* before = node_delete->previous;
    
    //could be first, could be middle, could be last
    //well done
    if (node_delete == first) {
        first = after;
    }else{
        before->next = after;
    }
    
    if (node_delete == last) {
        before->next = nullptr;
    } else{
        after->previous = before;
    }
    
    delete node_delete;
    
    Iterator<T> new_iter;
    new_iter.position = after;
    new_iter.container = this;
    return new_iter;
}





#endif /* ListTemplate_hpp */
