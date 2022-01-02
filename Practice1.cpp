#include<iostream>
using namespace std;

int main() {

    /*int a, b = 1;
    a = 10;
    if (++a) {
        cout << b;
    }
    else {
        cout << ++b;
    }*/

    int a = 1;
    int b = 2;

    /*if (a-- > 0 && ++b > 2) {
        cout << "Stage1 - Inside If ";
    }
    else {
        cout << "Stage2 - Inside Else ";
    }
    cout << a << " " << b << endl;*/

    if (a-- > 0 || ++b > 2) {
        cout << "Stage1 - Inside If ";
    }
    else {
        cout << "Stage2 - Inside Else ";
    }
    cout << a << " " << b << endl;

    int number = 3;
    cout << (25 * (++number) ) << endl;

    int i = 1;
    int j = i++;
    int k = ++i;
    cout << j << endl;
    cout << k << endl;
}