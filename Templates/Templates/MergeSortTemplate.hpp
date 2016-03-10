//
//  MergeSortTemplate.hpp
//  Templates
//
//  Created by Filip Juristovski on 1/6/16.
//  Copyright © 2016 Filip Juristovski. All rights reserved.
//

#ifndef MergeSortTemplate_hpp
#define MergeSortTemplate_hpp

#include <stdio.h>
#include <vector>
#include <string>
#include <iostream>

//declarations
template<typename T, typename CMP>
void merge_sort_template(std::vector<T>& a, int from, int to, CMP cmp);

template<typename T, typename CMP>
void merge_template(std::vector<T>& a, int from, int mid, int to, CMP cmp);



//definitions
template<typename T, typename CMP>
void merge_sort_template(std::vector<T>& a, int from, int to, CMP cmp)
{
    if(from == to)
        return;
    
    int mid = (from + to)/2;
    
    merge_sort_template(a, from, mid, cmp);
    merge_sort_template(a, mid+1, to, cmp);
    merge_template(a, from, mid, to, cmp);
}

template<typename T, typename CMP = std::less<T>>
void merge_template(std::vector<T>& a, int from, int mid, int to, CMP cmp)
{
    int n = to-from+1;
    std::vector<T> b(n);
    
    int i1 = from; //first half
    int i2 = mid +1; //second half
    int j = 0;
    
    while (i1 <= mid && i2 <= to) {
        if (cmp(a[i1], a[i2])) {
            b[j] = a[i1];
            i1++;
        } else {
            b[j] = a[i2];
            i2++;
        }
        j++;
    }
    
    while(i1 <= mid)
    {
        b[j] = a[i1];
        j++;
        i1++;
    }
    
    while(i2 <= to)
    {
        b[j] = a[i2];
        j++;
        i2++;
    }
    
    for(int i = 0; i< n; i++)
    {
        a[from + i] = b[i];
    }
    
    
}

#endif /* MergeSortTemplate_hpp */