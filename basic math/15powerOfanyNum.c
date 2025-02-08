//w.a.p exact power of 2 of given number using bitwise operater.
#include<stdio.h>
int main()
{
    int  num;
printf("enter the number");
scanf("%d",&num);
if(num>0 &&(num &(num-1))==0)
{
printf("%d is exact power of 2\n "); 
}
else
{
    printf("%d is not power of 2\n");
}
return 0;
}