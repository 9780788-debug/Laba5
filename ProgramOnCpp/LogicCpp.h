#pragma once
#include <cmath>

const double PI = 3.14;

/*База*/
class Figure
{
public:
    virtual double GetArea() const { return 0; }
    virtual double GetPerimeter() const { return 0; }

    virtual ~Figure() {}
};

/*КОЛО*/
class Circle : public Figure
{
private:
    double _radius;

public:
    Circle(double radius)
    {
        if (radius < 0) radius = 0;
        _radius = radius;
    }

    double GetRadius() const { return _radius; }


    double GetArea() const override
    {
        return PI * _radius * _radius;
    }

    double GetPerimeter() const override
    {
        return 2 * PI * _radius;
    }
};

/*Квадрат*/
class Square : public Figure
{
private:
    double _x1, _y1, _x2, _y2;

public:
    Square(double x1, double y1, double x2, double y2)
    {
        _x1 = x1; _y1 = y1; _x2 = x2; _y2 = y2;
    }

    double GetSide() const
    {
        return std::sqrt(std::pow(_x2 - _x1, 2) + std::pow(_y2 - _y1, 2));
    }

    double GetArea() const override
    {
        double side = GetSide();
        return side * side;
    }

    double GetPerimeter() const override
    {
        return 4 * GetSide();
    }
};