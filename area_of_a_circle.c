//program to return the area of a circle using a function
#include<stdio.h>
float area(float radius);
int main()
{
  #define pi 3.142
  float radius,result;
  printf("enter value of radius:");
  scanf("%f",&radius);
  result=area(radius);
  printf("required area is %f",result);
  return 0;
}
//function definition
float area( float radius)
{
float a;
#define pi 3.142
  a = pi * radius *radius;
  return a;
  }







