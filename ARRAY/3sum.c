#include<stdio.h>
int main()
{
    int a[2][2],i,j,sum=0;
    printf("enter the element of array:");
    {
     for(i=0;i<2;i++)
      {
       for(j=0;j<2;j++)
        {
         scanf("%d",&a[i][j]);
        }
       printf("\n");
      }
       printf("matrix is\n");
       for(i=0;i<2;i++)
       { 
         for(j=0;j<2;j++)
         {
           printf("%d\t",a[i][j]);
            sum=sum+a[i][j];
          }
         printf("\n");
        }
         printf("%d",sum);

    }
}
