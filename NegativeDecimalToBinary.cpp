#include<iostream>
#include<bitset>
using namespace std;

int main() {

    int n;
    cin >> n;
    n = n* - 1;

    bitset<32> x(n);

    cout << "Binary of n " << n << ":";
    cout << x;

    cout << endl;
}