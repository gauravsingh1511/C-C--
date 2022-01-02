#include<iostream>
using namespace std;

int main() {

    int n;
    //cout << " Enter the value of n: ";
    //cin >> n;

    cout << "Printing count from 1 to n" << endl;

    //for (int i = 1; i <= n; i++) {
    /*int i = 1;
    for ( ; ; ) {
        if (i <= n) {
            cout << i << endl;
        }
        else {
            break; //exit the loop and go to line 23.
        }
        i++;
    }*/

    for ( int a=1, b=2, c=3; a>=1 && b>=2 && c>=3; a--, b--, c--) {
        cout << a << " " << b << " " << c << endl;
    }
}