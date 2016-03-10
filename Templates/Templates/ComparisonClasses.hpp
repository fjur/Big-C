//
//  ComparisonClasses.hpp
//  Templates
//
//  Created by Filip Juristovski on 1/6/16.
//  Copyright © 2016 Filip Juristovski. All rights reserved.
//

#ifndef ComparisonClasses_hpp
#define ComparisonClasses_hpp

#include <stdio.h>

#endif /* ComparisonClasses_hpp */

template<typename T>
class CompareByLess
{
public:
    bool operator()(const T& a, const T& b) const;
private:
};

template<typename T>
bool CompareByLess<T>::operator()(const T& a, const T& b) const
{
    return a < b;
}

template<typename T>
class CompareByMore
{
public:
    bool operator()(const T& a, const T& b) const;
private:
};

template<typename T>
bool CompareByMore<T>::operator()(const T& a, const T& b) const
{
    return a > b;
}