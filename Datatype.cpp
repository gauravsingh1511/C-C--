#include<iostream>
using namespace std;

int main()
{
    /*
    int a;
    cout << "Size of Int " << sizeof(a) << endl;

    float b;
    cout << "Size of Float " << sizeof(b) << endl;

    char c;
    cout << "Size of Character " << sizeof(c) << endl;

    bool d;
    cout << "Size of Boolean " << sizeof(d) << endl;

    short int si;
    cout << "Size of Short Int " << sizeof(si) << endl;

    long int li;
    cout << "Size of Long Int " << sizeof(li) << endl;

    long long int lli;
    cout << "Size of Long Long Int " << sizeof(lli) << endl;

    double db;
    cout << "Size of Double " << sizeof(db) << endl;

    long double ldb;
    cout << "Size of Long Double " << sizeof(ldb) << endl;

    wchar_t w;
    cout << "Size of Wchar " << sizeof(w) << endl;

    return 0;

   int x = 10; // integer x
    char y = 'a'; // character c
  
    // y implicitly converted to int. ASCII
    // value of 'a' is 97
    x = x + y;
  
    // x is implicitly converted to float
    float z = x + 1.0;
  
    cout << "x = " << x << endl
         << "y = " << y << endl
         << "z = " << z << endl;


   double x = 1.2;
  
    // Explicit conversion from double to int
    int sum = (int)x + 1;
  
    cout << "Sum = " << sum;

   char ch = 123456;
   cout << ch << endl;
   
  unsigned int a = -112;
  cout << a << endl;
    
    int a = 2.0/5;
    cout << a << endl;
    cout << 2.0/5 << endl;
    */

   int a = 2;
   int b = 4;

   bool first = (a==b);
   cout << first << endl;

   bool second = (a<b);
   cout << second << endl;

   bool third = (a>b);
   cout << third << endl;

   bool fourth = (a!=b);
   cout << fourth << endl;

   bool fifth = (a<=b);
   cout << fifth << endl;

   bool sixth = (a>=b);
   cout << sixth << endl;


}