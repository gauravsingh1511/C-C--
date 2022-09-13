#include <iostream>
#include <string>
using namespace std;

struct studentDiv
{
    string name;
    int roll;
    int marks;
    long long mob;
    string course;
    int subjects[5];
};

int main()
{
    studentDiv s;
    cout << "Enter information," << endl;
    cout << "Enter name: ";
    cin >> s.name;
    cout << "Enter roll number: ";
    cin >> s.roll;
    cout << "Enter marks: ";
    cin >> s.marks;
    cout << "Enter mob: ";
    cin >> s.mob;
    cout << "Enter course: ";
    cin >> s.course;

    cout << "\nDisplaying Information," << endl;
    cout << "Name: " << s.name << endl;
    cout << "Roll: " << s.roll << endl;
    cout << "Marks: " << s.marks << endl;
    cout << "Mob: " << s.mob << endl;
    cout << "Course: " << s.course << endl;

    if (s.marks >= 70)
    {
        cout << "\n Distinction";
    }
    else
    {
        if (s.marks >= 60)
        {
            cout << "\n First Class";
        }
        else
        {
            if (s.marks >= 50)
            {
                cout << "\n Second Class";
            }
            else
            {
                cout << "\n Fail";
            }
        }
    }
    return 0;
}