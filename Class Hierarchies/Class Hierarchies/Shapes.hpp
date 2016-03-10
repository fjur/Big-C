//
//  Shapes.hpp
//  Class Hierarchies
//
//  Created by Filip Juristovski on 1/11/16.
//  Copyright © 2016 Filip Juristovski. All rights reserved.
//

#ifndef Shapes_hpp
#define Shapes_hpp

#include <stdio.h>
#include <vector>
#include <iostream>
#include <math.h>

class Shape
{
public:
    Shape();
    virtual double area() const = 0;
private:
};

class Oval : public Shape
{
public:
    Oval();
    
private:
};

class Circle : public Oval
{
public:
    Circle();
    Circle(double rad);
    virtual double area() const;
private:
    double radius;
};

class Polygon : public Shape
{
public:
    Polygon();
    virtual double area() const;
private:
protected:
    std::vector<double> sides;
    
};

class Triangle : public Polygon
{
public:
    Triangle();
    Triangle(double b, double h);
    virtual double area() const;
private:
    
};

class Rectangle : public Polygon
{
public:
    Rectangle();
    Rectangle(double side, double top);
    virtual double area() const;

private:
    
};

class Pentagon : public Polygon
{
public:
    Pentagon();
    Pentagon(double s);
    virtual double area() const;

private:
    
};

class Square : public Rectangle
{
public:
    Square();
    Square(double s);
    virtual double area() const;

private:
};

#endif /* Shapes_hpp */
