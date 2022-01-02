#include<iostream>
using namespace std;

int main() {

    /*int n;
    cin >> n;

    int i = 1;
    while (i<=n)
    {
        cout << i << endl;
        i = i+1;
    }*/

    /*int n;
    cin >> n;

    int i = 1;
    int sum = 0;

    while (i<=n)
    {
        sum = sum + i;
        i = i + 1;
    }

    cout << sum << endl;
    */

   //sum of all even number
   /*int n;
   cout << "Enter the number :" ;
   cin >> n;

   int i = 2;
   int sum = 0;

   while (i<=n) {
       sum = sum + i;
       i = i + 2;  
   }
   cout << sum << endl;
   */

  //F to C 
  /*float f,c;

  cout << "Enter the Fahrenheit: ";
  cin >> f;

  c = (f-32)*5/9;

  cout << c << " Celsius";
  */

    int n;
    cout << "Enter the number: ";
    cin >> n;

    int num = 2;

    while (num<n)
    {
        if (n % num == 0)
        {
            cout << "Number not Prime: " << num << endl;
        }
        else {
            cout << "Number is Prime: " << num << endl;
        }
        num = num + 1;
    }
}