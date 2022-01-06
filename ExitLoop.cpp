#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {

    int b = 2;

    while (1)
    {
        switch (b)
        {
        case 2:
            cout << b;
            break;
        
        default:
            cout << "Default";
            break;
        }
        exit(0);
    }
}