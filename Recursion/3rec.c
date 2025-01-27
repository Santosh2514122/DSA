#include<stdio.h>
 void fun(int n)
 {
 if (n==0)
 return ;
 else
 fun(n/2);
 printf("n%2");
 }
 /*int main()
 {
 
printf("%d",fun(31));
return 0 ;
 }*/