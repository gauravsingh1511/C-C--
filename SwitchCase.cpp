#include<iostream>
using namespace std;

int main() {

    int num = 2;
    char ch = '1';

    switch (num)
    {
    case 1:
        cout << "This is One.";
        break;

    case 2: switch (ch)
            {
            case '1':
                cout << "Nested Switch Case." << endl;
                break;
            
            default:
                cout << "This is Nested default.";
                break;
            }
        cout << "This is Second.";
        break;
    
    default:
        cout << "This is Default Value.";
        break;
    }

}