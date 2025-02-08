//swap of two number using third variable help of ternary operater
#include<stdio.h>
int main()
{
int a,b,temp;
printf ("enter vthe first number:");
scanf("%d",&a);
printf ("enter vthe second number:");
scanf("%d",&b);
a=a+b,
b=a-b,
a=a-b;
//temp=a;
//temp=b;
printf("a=%d",a);
printf("b=%d",b);
return 0;
}