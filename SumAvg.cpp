#include <iostream>
using namespace std;

int main() {

    int num[10];
    int n = 10;
    int sum;
    float avg;

    cout << "Enter the 10 numbers: ";
    
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
        sum = sum + num[i];
    }
    cout << "The sum of numbers is: " << sum << endl;
    avg = sum / 10.0;
    cout << "The avg of all numbers is: " << avg; 
}