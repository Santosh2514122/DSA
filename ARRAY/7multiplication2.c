#include<stdio.h>
int main()
{
 int a[3][3],b[3][3],c[3][3],i,j,k,sum;
 printf("enter the element of matrix:");
 for(i=0;i<3;i++)
 {
   for(j=0;j<3;j++)
    {
     scanf("%d",&a[i][j]);
    }
    printf("\n");
  }
  
 printf("enter the element of second matrix:");
 for(i=0;i<3;i++)
 {
   for(j=0;j<3;j++)
    {
     scanf("%d",&b[i][j]);
    }
    printf("\n");
  }
 printf("first matrix is :\n");
 for(i=0;i<2;i++)
 {
   for(j=0;j<3;j++)
    {
     printf("%d\t",a[i][j]);
    }
    printf("\n");
 }
  
 printf(" second matrix is:\n");
 for(i=0;i<2;i++)
 {
   for(j=0;j<3;j++)
    {
      printf("%d\t",b[i][j]);
    }
    printf("\n");
  }
 printf("multiplication of two matrix is=");
 for(i=0;i<3;i++)
  {
   for(j=0;j<2;j++)
    { 
        sum=0;
      {
        for(k=0;k<3;k++)
       {
         sum=sum+a[i][k]*b[k][j];
        }
       c[i][j]=sum;
      }
      printf("%d\t",c[i][j]);
      
    }


  }
}  