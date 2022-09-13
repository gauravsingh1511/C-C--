#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    float triangle_sideA, triangle_sideB, triangle_sideC;
    float Area, Semi_Perimeter;
    cout << "Enter the traingle side A: ";
    cin >> triangle_sideA;
    cout << "Enter the traingle side B: ";
    cin >> triangle_sideB;
    cout << "Enter the traingle side C: ";
    cin >> triangle_sideC;
    Semi_Perimeter = (triangle_sideA + triangle_sideB + triangle_sideC) / 2;
    Area = sqrt(Semi_Perimeter * (Semi_Perimeter - triangle_sideA) * (Semi_Perimeter - triangle_sideB) * (Semi_Perimeter - triangle_sideC));
    cout << "The area of triangle is: " << Area;
    return 0;
}