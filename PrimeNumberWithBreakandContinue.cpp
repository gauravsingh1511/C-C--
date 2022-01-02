#include<iostream>
using namespace std;

int main() {

    int n;
    cout << " Enter any number : " ;
    cin >> n;

    bool isPrime = 1; //Number is Prime

    for ( int i = 2; i < n; i++) {

        if (n % i == 0) {

            //cout << "Number is Not Prime" << endl;
            isPrime = 0; //Not prime.
            break;

        }
    }

    if (isPrime == 0) //Condition check the value.
    {
        cout << "Number is Not Prime" << endl;
    }
    else {

        cout << "Number is Prime" << endl;

    }

    /*cout << " Continue Program Start " << endl;

    for ( int j = 1; j <= 3; j++)
    {   
        cout << " Hi " << endl;
        cout << " Hey " << endl;
        continue;

        cout << " Hello " << endl;
    }*/

}