//
//  SelectionSortTemplate.cpp
//  Templates
//
//  Created by Filip Juristovski on 1/4/16.
//  Copyright © 2016 Filip Juristovski. All rights reserved.
//

#include "SelectionSortTemplate.hpp"



//template<typename T>
//void selection_sort(vector<T>& v)
//{
//    int next = 0;
//    for (next = 0; next <  v.size() -1; next++)
//    {
//        int minpos = check_value(v, next, v.size() -1.0);
//        
//        if (minpos != next) {
//            swapval( v[minpos], v[next]);
//        }
//    }
//}
//
//template<typename A, typename B>
//void swapval(A& a, B& b)
//{
//    int temp = b;
//    b = a;
//    a = temp;
//}

//template<typename T, typename A, typename B>
//int check_value(vector<T>& v, A from, B to)
//{
//    int minpos = from;
//    for (int i = from; i <= to; i++)
//    {
//        if (v[minpos] > v[i])
//        {
//            minpos = i;
//        }
//    }
//    return minpos;
//}