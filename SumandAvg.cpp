#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, sum = 0;
    float avg;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;
    sum = num1 + num2 + num3;
    cout << "Sum of three number is: " << sum << endl;
    avg = sum / 3;
    cout << "Avg of three number is: " << avg << endl;
    return 0;
}