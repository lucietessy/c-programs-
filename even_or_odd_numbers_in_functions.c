//program of a function to find whether a number is even or odd
#include<stdio.h>
int a(int x);
int main()
{
  int x;
printf("enter an integer:");
scanf("%d",&x);
  if(x%2==0){
printf("xis divisible by 2");
  }
else{
printf("x is not divisible by 2");
  }
return 0;
}
//function definition
int a(int x)
{
  int a;
   a=x%2;
  return a;
}
  
