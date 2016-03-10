//
//  SelectionSort.hpp
//  Sorting
//
//  Created by Filip Juristovski on 12/11/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#ifndef SelectionSort_hpp
#define SelectionSort_hpp

#include <stdio.h>
#include <string>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

void selection_sort(vector<int>& v);

int check_values(vector<int>& v, int from, int to);

void swapval(int& a, int& b);

#endif /* SelectionSort_hpp */
