#include<iostream>
#include<stdio.h>

void main()
{
    struct student
    {
        int id;
        char name[50];
        float fee;
        int age;
    };

    cout << "Enter the ID: ";
    cin >> id;

    cout << "Enter the Name: ";
    cin >> name;

    cout << "Enter the Fee: ";
    cin >> fee;

    cout << "Enter the Age: ";
    cin >> age;

}