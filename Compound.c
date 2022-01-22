#include<stdio.h>
#include<math.h>
void main()
{
    int H,L,B,V;

    printf("cube\n");
    printf ("Enter the Height=");
    scanf("%d",&H);
    printf("Enter the Lenth=");
    scanf("%d",&L);
    printf("Enter the breadth=");
    scanf("%d",&B);
    V= H*L*B;
    printf("volume of cube= %d cm",V);
    
}