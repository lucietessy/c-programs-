`//program to calclate compound interest
#include<stdio.h>
#include<math.h>
int main()
{
    float t,r,p,interest;
    printf("\n enter the value of p:");
    scanf("%f",&P);
    printf("\n enter the value of t:");
    scanf("%f",&t);
    printf("\n ener the value of r:");
    scanf("%f",&r);
    interest=p*pow((1+r),t);
    //pow(2,8)
    printf("interest=%7.2f",interest);
    return 0;
}
  