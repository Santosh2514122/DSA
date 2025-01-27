#include<iostream>
#include<limits.h>
using namespace std;
int gcd(int a,int b)
{
 if(b==0)
 return a;
 else
 return gcd(b,a%b) ;
 }
 int lcm(int a,int b)
 {
    return (a*b)/gcd(a,b);
 }
 int main()
 {
  int a,b;
  cout<<"enter the value of a:";
  cin>>a;
  cout<<"enter the value of b:";
  cin>>b;
  cout<<"lcm is :";
 cout<<lcm(a,b);
 return 0;
 }