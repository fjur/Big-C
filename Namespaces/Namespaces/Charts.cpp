//
//  Charts.cpp
//  Namespaces
//
//  Created by Filip Juristovski on 1/10/16.
//  Copyright © 2016 Filip Juristovski. All rights reserved.
//

#include "Charts.hpp"

Chart::Chart()
{
    std::cout << "entering Chart Constructor\n";
    std::vector<double> data;
}

void Chart::draw() const
{
    
}

void BarChart::draw() const
{
    
    for ( int i = 0; i < length(); i++) {
        
        for (int j = 0; j <= value_at(i); j++) {
            std::cout << "*";
        }
        
        std::cout << "\n";
    }
}

void Chart::add(int val)
{
    data.push_back(val);
}

double Chart::get(int val) const
{
    return data[val];
}

unsigned long Chart::length() const
{
    return data.size();
}

double Chart::value_at(int index) const
{
    return data[index];
}

Chart::Iterator::Iterator()
{
    value = nullptr;
    index = 0;
}

double Chart::Iterator::get() const
{
    return value->value_at(index);
}

Chart::Iterator Chart::begin()
{
    Iterator iter;
    iter.value = this;
    iter.index = 0;
    return iter;
}

Chart::Iterator Chart::end()
{
    Iterator iter;
    iter.value = this;
    iter.index = data.size();
    return iter;
}

bool operator!=(const Chart::Iterator& left, const Chart::Iterator& right)
{
    return left.compare(right) == 0;
}

int Chart::Iterator::compare(const Chart::Iterator& right) const
{
    return index - right.index;
}

void Chart::Iterator::next()
{
    index += 1;
}