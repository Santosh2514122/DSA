//wap enter number fro user and check number is armstrong or not.
#include<stdio.h>
int main()
{
int n,r,arm=0,c;
c=n;
while(n>0)
{
r=n%10;
arm=(r*r*r)+arm;
n=n/10;
}
if(c==arm)
printf("armstrong number");
else
printf(" not armstrong");
return 0;
}