#include<iostream>
using namespace std;

int main() {

    int amount;
    cout << "Enter the Amount you want to know how many change you have: ";
    cin >> amount;

    int Rs2000, Rs500, Rs100, Rs50, Rs20, Rs10, Rs5, Rs2, Rs1;

    switch (1)
    {
    case 1:
        Rs2000 = amount / 2000;
        amount = amount % 2000;
        cout << "Two thousand Currency = " << Rs2000 << endl;

    case 2:
        Rs500 = amount / 500;
        amount = amount % 500;
        cout << "Five hundred Currency = " << Rs500 << endl;

    case 3:
        Rs100 = amount / 100;
        amount = amount % 100;
        cout << "Hundred Currency = " << Rs100 << endl;

    case 4:
        Rs50 = amount / 50;
        amount = amount % 50;
        cout << "Fifty Currency = " << Rs50 << endl;

    case 5:
        Rs20 = amount / 20;
        amount = amount % 20;
        cout << "Twenty Currency = " << Rs20 << endl;

    case 6:
        Rs10 = amount / 10;
        amount = amount % 10;
        cout << "Ten Currency = " << Rs10 << endl;

    case 7:
        Rs5 = amount / 5;
        amount = amount % 5;
        cout << "Five Currency = " << Rs5 << endl;

    case 8:
        Rs2 = amount / 2;
        amount = amount % 2;
        cout << "Two Currency = " << Rs2 << endl;

    case 9:
        Rs1 = amount / 1;
        amount = amount % 1;
        cout << "One Currency = " << Rs1 << endl;
        break;
    }
}