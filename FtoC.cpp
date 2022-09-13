#include <iostream>
using namespace std;

int main()
{

    double celsius, fahrenheit;
    cout << "Enter the fahrenheit to convert celsius: ";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
    cout << "Fahrenheit to Celsius: " << celsius;
    return 0;
}