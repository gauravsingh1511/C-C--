#include<iostream>
using namespace std;

int main() {

    /*int a,b;

    cin >> a >> b;
   // cout << "Values of n is :" << n << endl;
    
    if(a>0) {
        cout << "A is Postive :" << endl;
    }
    else {
        cout << "A is Negative :" << endl;
    }

    if(a>b) {
        cout << "A is greater then B :" << endl;
    }
    else {
        cout << "B is greater then A :" << endl;
    }

    int n;

    cout << "Enter the value of a :";
    cin >> n;

    if(n>0) {
        cout << "Number is Positive" << endl;
    }
    else if(n<0) {
        cout << "Number is Negative" << endl;
    }
    else {
        cout << "Number is Zero" << endl;
    }*/

    /*int a = 9;
    if(a==9) {
        cout << "Nine" << endl; 
    }  
    if(a>0) {
        cout << "Postive" << endl;
    }
    else {
        cout << "Negative" << endl;
    }*/

    /*int a = 3;
    int b = a+1;

    if((a=3)==b) {
        cout << a << endl;
    }
    else {
        cout << a+1;
    }*/

    /*int a = 24;
    
    if(a > 20) {
        cout << "Love" << endl;
    }
    else if (a == 24)
    {
        cout << "Lovely" << endl;
    }
    else {
        cout << "Babbar" << endl;
    }
    cout << a;*/

    char ch;

    cout << "Enter the value:";
    cin >> ch;

    if(ch>='a' && ch<='z') {
        cout << "Lower letter" << endl;
    }
    else if(ch>='A' && ch<='Z') {
        cout << "Upper letter" << endl;
    }
    else if(ch>='0' && ch<='9') {
        cout << "Numeric digit" << endl;
    }
}