#include<stdio.h>
int main()
{ int a[2][2],i,j;
 printf("enter the  element of matrix");
 for(i=0;i<2;i++)
   {
     for(j=0;j<2;j++)
     {
      scanf("%d",&a[i][j]);
     }
      printf("\n");
    }
     printf("matrix is =\n");
    for(i=0;i<2;i++)
    {
       for(j=0;j<2;j++)
      {
       printf("%d\t",a[i][j]);
      }
      printf("\n");
    }
}

