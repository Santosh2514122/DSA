#include<stdio.h>
int main()
{
  int a[3][3],i,j,sum=0;
  printf("enter the element of array:");
  for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
       {
         scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
printf("matrix  is:\n");
  {
     for(i=0;i<3;i++)
      {
       for(j=0;j<3;j++)
        {
         printf("%d\t", a[i][j]);
         sum=sum+a[i][j];
        }
       printf("\n");
      }
        printf("\nsum=%d",sum);
  
  }
}
/*enter the element of array:
1
1
1

1
1
1

1
1
1

matrix  is:
1       1       1
1       1       1
1       1       1

sum=9



