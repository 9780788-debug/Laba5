using System;
using Logic;

class Program
{
    static void PrintInfo(Figure fig)
    {
        Console.WriteLine($"Type: {fig.GetType().Name}");
        Console.WriteLine($"Area: {fig.GetArea():F2}");
        Console.WriteLine($"Perimeter: {fig.GetPerimeter():F2}");
        Console.WriteLine(" ");
    }

    static void Main()
    {
        Figure myCircle = new Circle(10);
        Figure mySquare = new Square(0, 0, 3, 4);

        PrintInfo(myCircle);
        PrintInfo(mySquare);
    }

}