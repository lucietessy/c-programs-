//program to calcuate interest
#include<stdio.h>
int main()
{
    int p,r,t, interest;
    printf("\ln enter value of p:");
    scanf("%d",&p);
    printf("\ln enter value of r:");
    scanf("%d",&r);
    printf("\ln enter value of t:");
    scanf("%d",&t);
     interest =(p*r*t)/100;
    printf(" interest = %d",interest);
    return 0;
}