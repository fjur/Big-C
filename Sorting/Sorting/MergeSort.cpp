//
//  MergeSort.cpp
//  Sorting
//
//  Created by Filip Juristovski on 12/12/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include "MergeSort.hpp"

//Merge sort
//pass it vector of people
//break up recursively halves left and right
//merge them together

void mergeSort(vector<Person*>& v ,int from, int to){

    if(from == to)
        return;
    
    int mid = (from + to)/2;
    
    mergeSort(v, from, mid);
    mergeSort(v, mid+1, to);
    merge(v, from, mid, to);
    
        
}

void merge(vector<Person*>& v, int from, int mid, int to){

//    int i1 = from;
//    int i2 = mid+1;
//    int j = 0;
//    
//    int n = to - from+1;
//    vector<Person*> temp(n);
    
    int n = to - from + 1; // Size of the range to be merged // Merge both halves into a temporary vector b
    vector<Person*> temp(n);
    int i1 = from;
    // Next element to consider in the first half
    int i2 = mid + 1;
    // Next element to consider in the second half
    int j = 0; // Next open position in b

    
    while (i1 <= mid && i2 <= to ){
        if(v[i1]->get_number() < v[i2]->get_number())
        {
            temp[j] = v[i1];
            i1++;

        } else if (v[i2] -> get_number() < v[i1]->get_number())
        {
            temp[j] = v[i2];
            i2++;

        }
    
        j++;

    }
    
    while(i1 <= mid){
        temp[j] = v[i1];
        i1++;
        j++;
    }
    
    while (i2 <= to) {
        temp[j] = v[i2];
        i2++;
        j++;
    }
    
    //copy temp to actual vector
    for (int i = 0; i < n; i++) {
        v[from + i] = temp[i];
    }
    
    //should set temp pointers to null but they will be deleted from stack once merge done
    //need to do an for loop to null all temp pointers

}