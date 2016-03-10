//
//  Sodacan.hpp
//  Classes
//
//  Created by Filip Juristovski on 11/30/15.
//  Copyright © 2015 Filip Juristovski. All rights reserved.
//

#ifndef Sodacan_hpp
#define Sodacan_hpp

#include <stdio.h>

class sodacan
{
public:
    
    sodacan(int ht, int rs);
    sodacan();
    
    void get_surface_area() const;
    void get_volume() const;
private:
    int height;
    int radius;
};

#endif /* Sodacan_hpp */
