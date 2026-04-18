using System;

namespace Logic
{
    /*База*/
    public class Figure
    {
        public virtual double GetArea() => 0;
        public virtual double GetPerimeter() => 0;
    }

    /*Коло*/
    public class Circle : Figure
    {
        private double _radius;
        public double Radius => _radius;

        public Circle(double radius)
        {
            _radius = radius < 0 ? 0 : radius;
        }

        public override double GetArea() => Math.PI * _radius * _radius;
        public override double GetPerimeter() => 2 * Math.PI * _radius;
    }

    /*Квадрат*/
    public class Square : Figure
    {
        private double _x1, _y1, _x2, _y2;

        public Square(double x1, double y1, double x2, double y2)
        {
            _x1 = x1; _y1 = y1; _x2 = x2; _y2 = y2;
        }

        private double GetSide() => Math.Sqrt(Math.Pow(_x2 - _x1, 2) + Math.Pow(_y2 - _y1, 2));

        public override double GetArea() => Math.Pow(GetSide(), 2);
        public override double GetPerimeter() => 4 * GetSide();
    }
}