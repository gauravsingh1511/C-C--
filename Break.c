#include<stdio.h>
#include<conio.h>

int main() {

    int n;
    scanf("%d", n);

    boolean isPrime = 1;

    for ( int i = 2; i < n; i++) {

        if (n % i == 0) {

            //cout << "Number is Not Prime" << endl;
            isPrime = 0;
            break;

        }
    }

    if (isPrime == 0)
    {
        printf ("Number is Not Prime");
    }
    else {

        printf ("Number is Prime");

    }

    printf (" Continue Program Start ");

    for ( int j = 1; j <= 5; j++)
    {   
        printf (" Hi " );
        printf (" Hey " );
        continue;

        printf (" Hello ");
    }

}