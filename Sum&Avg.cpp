#include<iostream>
using namespace std;

int main () {
    int num1, num2, num3, sum = 0, avg;
    cout << "Enter the three number: ";
    cin >> num1 >> num2 >> num3;
    sum = num1 + num2 + num3;
    cout << sum;
    avg = sum / 3;
    cout << avg;
}