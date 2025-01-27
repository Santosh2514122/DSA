#include<stdio.h>
int main()
{
    int n;
printf("enter the row:");
scanf("%d",&n);
for(int  i=1;i<=n;i++)//outer loop for row
{
 for( int j=1;j<=n;j++)//inner loop for column 
  {
    printf(" * ");
   }
printf("\n");
}
}   