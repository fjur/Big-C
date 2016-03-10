//
//  BinarySearch.cpp
//  Sorting
//
//  Created by Filip Juristovski on 12/12/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include "BinarySearch.hpp"

int binarySearch(std::vector<Person*>& v, int from, int to, long number){

//    int value;
//    
//    int mid = (to+from)/2;
//    
//    
//    
//    if(v[mid]->get_number() > number){
//        value = binarySearch(v, mid+1, to, number);
//    } else if(v[mid]->get_number() < number){
//        value = binarySearch(v, from, mid, number);
//    } else if(v[mid]->get_number() == number){
//        return mid;
//    }
    
    
    if(from > to)
        return -1;
    
    int mid = (from + to)/2;
    
    if(v[mid]->get_number() == number)
        return mid;
    else if(v[mid]->get_number() < number ){
        return binarySearch(v, mid+1, to, number);
    } else {
        return binarySearch(v, from , mid -1, number);
    }
        
    
}