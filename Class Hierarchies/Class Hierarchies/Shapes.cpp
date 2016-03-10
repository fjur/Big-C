//
//  Shapes.cpp
//  Class Hierarchies
//
//  Created by Filip Juristovski on 1/11/16.
//  Copyright © 2016 Filip Juristovski. All rights reserved.
//

#include "Shapes.hpp"
#include <typeinfo>

Shape::Shape(){
    std::cout << "Entering default Shape Constructor\n";
};

Oval::Oval() : Shape() {
    std::cout << "Entering Oval Constructor\n";
};

Circle::Circle() : Oval()
{
    std::cout << "Entering Default circle Constructor\n";
}

Circle::Circle(double rad){
    std::cout << "Entering Full circle Constructor\n";
    radius = rad;
}

double Circle::area() const
{
    return M_PI*pow(radius, 2);
}


Polygon::Polygon(): Shape() {
    std::cout << "Entering default Polygon Constructor\n";

};

double Polygon::area() const
{
    return 0;
}

Triangle::Triangle() : Polygon() {
    std::cout << "Entering default triangle  Constructor\n";

};

Triangle::Triangle(double b, double h)
{
    std::cout << "Entering Full Triangle Constructor\n";

    sides.push_back(b);
    sides.push_back(h);
}

double Triangle::area() const
{
    return sides[0] * sides[1] /2.0;
}

Rectangle::Rectangle()
{
    std::cout << "Entering default Rectangle Constructor\n";
}

Rectangle::Rectangle(double side, double top)
{
    std::cout << "Entering Full Rectangle Constructor\n";
    sides.push_back(side);
    sides.push_back(top);
}

double Rectangle::area() const
{
    return sides[0] * sides[1];
}


Pentagon::Pentagon() : Polygon()
{
    std::cout << "Entering default Pentagon Constructor\n";
}

Pentagon::Pentagon(double s)
{
    std::cout << "Entering Full Pentagon Constructor\n";
    sides.push_back(s);
}

double Pentagon::area() const
{
    return 0;
}

Square::Square()
{
    std::cout << "Entering default Square Constructor\n";
}

Square::Square(double s) : Rectangle()
{
    std::cout << "Entering Full Square Constructor\n";
    sides.push_back(s);
}

double Square::area() const
{
    return pow(sides[0],2);
}