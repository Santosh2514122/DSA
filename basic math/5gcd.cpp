//the gcd of 12 &13=1;100,200=100;7&13=1
//method 1
/*#include<iostream> 
#include<limits.h>
using namespace std;
 int gcd (int a ,int b)
{
 while(a!=b)
 {
  if(a>b)
  a=a-b;
  else
  b=b-a;
 }
 return a;
}
  int main()
 { int a=12, b=4;
    cout<<gcd(a,b);
  return 0;
 }*/

//2 method
#include<iostream>
#include<limits.h>
using namespace std;
 int gcd(int a,int b)// Euclidean algorithn or  optimized implementation
 {
 if(b==0)
 return a;
 else
 return gcd(b,a%b);
 }
 int main()
 {
 int a=10, b=1;
 cout<<gcd(a,b);
 return 0;
 }
