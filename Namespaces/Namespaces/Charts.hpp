//
//  Charts.hpp
//  Namespaces
//
//  Created by Filip Juristovski on 1/10/16.
//  Copyright © 2016 Filip Juristovski. All rights reserved.
//

#ifndef Charts_hpp
#define Charts_hpp

#include <stdio.h>

#include <vector>
#include <iostream>

class Chart
{
public:
    Chart();
    void add(int val);
    unsigned long length() const;
    double get(int val) const;
    virtual void draw() const;
    
    class Iterator;

    Chart::Iterator begin();
    Chart::Iterator end();
    
    
   // friend class Chart::Iterator;
    
private:
    std::vector<double> data;
protected:
    double value_at(int index) const;
};

class BarChart : public Chart
{
public:
    virtual void draw() const;
private:
};


class Chart::Iterator {
public:
    Iterator();
    double get() const;
    int compare(const Chart::Iterator& right) const;
    void next();

    
    friend class Chart;
private:
    Chart* value;
    int index;

    
};






#endif /* Charts_hpp */
