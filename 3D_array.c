//program to output elements of a 3D array using a for loop
#include <stdio.h>
int main ()
{
  int i,j,k;
  int marks[3][3][3]={{{2,3,4},{7,9,6},{8,7,6}},
                        {{6,7,8},{9,10,11},{12,13,14}},
                      {{7,8,4},{9,12,14},{8,4,3}}};
  
                  
  for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
    {
      for(k=0;k<3;k++)
        {
      printf("%d ",marks[i][j][k]);
       }
    }
  }
  return 0;
  }
  