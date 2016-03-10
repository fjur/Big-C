//
//  BinarySearchTemplate.hpp
//  Templates
//
//  Created by Filip Juristovski on 1/6/16.
//  Copyright © 2016 Filip Juristovski. All rights reserved.
//

#ifndef BinarySearchTemplate_hpp
#define BinarySearchTemplate_hpp

#include <stdio.h>
#include <vector>

template<typename T>
int binary_search_template(std::vector<T>& a, int from, int to, T value);

template<typename T>
int binary_search_template(std::vector<T>& a, int from, int to, T value)
{
    if (from > to) {
        return -1;
    }
    int mid = (to + from)/2;
    
    if (a[mid] == value ) {
        return mid;
    }else if (a[mid] < value) {
        return binary_search_template(a, mid+1, to, value);
    }else {
        return binary_search_template(a, from, mid, value);
    }
}



#endif /* BinarySearchTemplate_hpp */
