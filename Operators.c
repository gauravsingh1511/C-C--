#include <stdio.h>  
#include <conio.h>  
int main ()  

{

/*int a = 5; // positive value of a.  
int b = -(a); // use unary minus operator to change the value  
  
int n1 = 20;  
int n2 = -30;  
  
printf (" The value of a: %d \n", a);  
printf (" The value of b: %d \n", b);  
  
printf (" The value of -n1: %d \n", -n1);  
printf (" The value of -n2: %d ", -n2); 

int a = 10; // use unary plus operator  
int b = (-10); // It does not change the operand value  
printf (" The value of a: %d \n", a);  
printf (" The value of b: %d \n", b);*/

/*int x, y, a, b; // declare local variable  
    a = 10;  
    x = ++a; // It shows pre increment operator  
      
    printf (" Pre Increment Operator");  
    // Here the value of x is increased by 1.  
    printf (" \n The value of x is %d.", x);  
      
    printf (" \n The value of a is %d.", a);  
      
    b = 20;  
    y = b++; // It shows the post increment operator  
    printf (" \n\n Post Increment Operator");  
    printf (" \n The value of y is %d.", y);  
    // get updated value of b  
    printf (" \n The value of b is %d.", b);*/

    /*int x, y, a, b; // declare local variable  
    a = 10;  
    x = --a; // It shows pre decrement operator  
      
    printf (" Pre Decrement Operator");  
    // Here the value of x is decreased by 1.  
    printf (" \n The value of x is %d.", x);  
      
    printf (" \n The value of a is %d.", a);  
      
    b = 20;  
    y = b--; // It shows the post decrement operator  
    printf (" \n\n Post Decrement Operator");  
    printf (" \n The value of y is %d.", y);  
    // get updated value of b  
    printf (" \n The value of b is %d.", b);*/ 

    // declaration of different types of data variables  
    /*int x;  
    float y;  
    char ch;  
    double z;  
    
    // use sizeof() operator and pass the different data type variable to get their size.  
    printf (" The size of the int (x) variable is: %d", sizeof(x));  
    printf (" \n The size of the float (y) variable is: %d", sizeof(y));  
    printf (" \n The size of the char (ch) variable is: %d", sizeof(ch));  
    printf (" \n The size of the double (z) variable is: %d", sizeof(z));*/

    // declare variables  
    int a = 10;  
    int b;  
    
    // use addressof (&) operator to assign the address  
    b = &a;  
    printf (" The value of variable a is: %d", a);  
    printf (" \n The address of variable b is: %d", b);
    
    return 0;  
}