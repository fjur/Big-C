//
//  SelectionSort.cpp
//  Sorting
//
//  Created by Filip Juristovski on 12/11/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include "SelectionSort.hpp"

void selection_sort(std::vector<int>& v){
    
    int next;
    
    for (next = 0; next < v.size()-1 ; next++) {
        
        int minpos = check_values(v, next, v.size()-1.0);
        if(minpos != next)
            swapval(v[minpos], v[next]);
    }


}

int check_values(vector<int>& v, int from, int to){

    int min = from;
    
    for(int i = from; i <= to; i++){
        if (v[min] < v[i]) {
            min = i;
        }
    }
    return min;
}

void swapval(int& a, int& b){
    int temp = b;
    b = a;
    a = temp;
}