//
//  ListSelectionSort.cpp
//  List
//
//  Created by Filip Juristovski on 12/13/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#include "ListSelectionSort.hpp"

void selectionSort(list<int>& v){

    list<int>::iterator pos;
    pos = v.begin();
    int min = *pos;
    list<int>::iterator pos2;
    list<int>::iterator posmin;
    list<int>::iterator posinsert;
    list<int>::iterator checkpos;
    
    for (pos = v.begin(); pos != v.end(); pos) {
        
        min = *pos;
        
        
        for (pos2 = pos; pos2 != v.end(); pos2++) {
            if (*pos2 < min) {
                min = *pos2;
                posmin = pos2;
            }
        }
            posinsert = pos;
        checkpos = pos;
        checkpos++;
        if (checkpos == v.end())
            return;
        v.insert(posinsert, min);
        posinsert = v.erase(posmin);

        
            

    }
}