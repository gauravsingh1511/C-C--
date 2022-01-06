#include<iostream>
using namespace std;

int main() {

    int num1,num2;
    float answer;
    char op;

    cout << "Enter the First number: ";
    cin >> num1;
    cout << "Enter the Second number: ";
    cin >> num2;
    cout << "Enter the Operator (+,-,*,/,%): ";
    cin >> op;

    switch (op)
    {
    case '+':
        answer = num1 + num2;
        cout << "Addition is: " << answer << endl;
        break;

    case '-':
        answer = num1 - num2;
        cout << "Subtration is: " << answer << endl;
        break;

    case '*':
        answer = num1 * num2;
        cout << "Multiplication is: " << answer << endl;
        break;

    case '/':
        answer = num1 / num2;
        cout << "Division is: " << answer << endl;
        break;

    case '%':
        answer = num1 % num2;
        cout << "Modulos is: " << answer << endl;
        break;
     
    default:
        cout << "You enter wrong Operator." << endl;
        break;
    }
}