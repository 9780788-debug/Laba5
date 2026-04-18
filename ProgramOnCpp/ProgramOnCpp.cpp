#include <iostream>  
#include <typeinfo>  
#include <iomanip>   
#include "LogicCPP.h"

using namespace std;

void PrintInfo(const Figure& fig)
{

    cout << "Type: " << typeid(fig).name() << "\n";


    cout << fixed << setprecision(2);

    cout << "Area: " << fig.GetArea() << "\n";
    cout << "Perimeter: " << fig.GetPerimeter() << "\n";
    cout << "\n";
}

int main()
{
    Circle myCircle(5.0);
    Square mySquare(1.0, 1.0, 4.0, 5.0);

    PrintInfo(myCircle);
    PrintInfo(mySquare);

    return 0;
}
