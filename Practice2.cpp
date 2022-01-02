#include<iostream>
using namespace std;

int main() {

    for ( int i = 0; i <= 5; i++) {
        cout << i << endl;
        i++;
    }

    //InfiniteLoop
    /*for ( int i = 0; i <= 5; i--) {
        cout << i << " ";
        i++;
    }*/

    cout << "2nd Program Start" << endl;

    for ( int i = 0; i <= 15; i += 2) {
        cout << i << endl;

        if ( i&1 ) {
            continue;
        }
        i++;
    }

    cout << "3rd Program start" << endl;

    for (int i = 0; i <= 5; i++) {
        for (int j = i; j <= 5; j++) {
            cout << i << " " << j << endl;
        }
    }

    cout << "4th Program start" << endl;

    for (int i = 0; i < 5; i++) {
        for (int j = i; j <= 5; j++) {
            if (i + j == 10) {
                break;
            }
            cout << i << " " << j << endl;
        }
    }
}