//
//  SelectionSortTemplate.hpp
//  Templates
//
//  Created by Filip Juristovski on 1/4/16.
//  Copyright © 2016 Filip Juristovski. All rights reserved.
//

#ifndef SelectionSortTemplate_hpp
#define SelectionSortTemplate_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <functional>


using namespace std;

//declarations

template<typename A, typename B>
void swapval(A& a, B& b);

template<typename T, typename A, typename B, typename CMP>
int check_value(vector<T>& v, A from, B to, CMP cmp);

template<typename T, typename CMP>
void selection_sort(vector<T>& v, CMP cmp);

//definitions

template<typename T, typename CMP = less<T>>
void selection_sort(vector<T>& v, CMP cmp)
{
    int next = 0;
    for (next = 0; next <  v.size() -1; next++)
    {
        int minpos = check_value(v, next, v.size() -1.0, cmp);
        
        if (minpos != next) {
            swapval( v[minpos], v[next]);
        }
    }
}

template<typename T, typename B>
void swapval(T& a, B& b)
{
    T temp = b;
    b = a;
    a = temp;
}

template<typename T, typename A, typename B, typename CMP>
int check_value(vector<T>& v, A from, B to, CMP cmp)
{
    int minpos = from;
    for (int i = from; i <= to; i++)
    {
        if (cmp(v[i], v[minpos]))
        {
            minpos = i;
        }
    }
    return minpos;

}





#endif /* SelectionSortTemplate_hpp */
