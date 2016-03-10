//
//  MergeSort.hpp
//  Sorting
//
//  Created by Filip Juristovski on 12/12/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#ifndef MergeSort_hpp
#define MergeSort_hpp

#include <string>

#include <stdio.h>
#include <iostream>
#include <cmath>
#include <vector>

#include "person.hpp"

using namespace std;

void mergeSort(vector<Person*>& v, int from, int to);

void merge(vector<Person*>& v, int from, int mid, int to);

#endif /* MergeSort_hpp */
