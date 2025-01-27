/*#include<iostream>
#include<limits.h>
using namespace std;
 int  power (int n , int x)
 {
 int res=1;
 for(int i=0;i<n;i++)
 res=res*x;
 return res;
 }
int main()
{ int x;
int n;
cout<<"enter the  power and number :";
cin>>x;
cin>>n;
cout <<power(x,n);
return 0;//time complexxity o(log n)  and space o(1)
}*/


//2efficient method
/*#include<iostream>
#include<limits.h>
using namespace std;
 int power (int x,int n)
 {if(n==0)
 return 1;
 int temp=power(x,n/2);
 temp=temp*temp;
 if(n%2==0)
 return temp;
 else
 return temp*x;
 }
 int main()
 {
 int x,n;
 cout<<"enter the number and its power:";
 cin>>x;
 cin>>n;
 cout<<power(x,n);
 }*/

//3 method  iterative power(x^y)
#include<iostream>
#include<limits.h>
using namespace std;
 int power (int x,int n)
 { int res=1;//iniclize result
 while(n>0)
 {
 if(n&1)//if res=odd ,multiply
 res=(res*x);
 x=x*x;
 n=n>>1;
 }
return res;
 }
 int main()// time complexity o(1)
 {
 int x,n;
 cout<<"enter tbhe number and power:";
 cin>>x;
 cin>>n;
 cout<<power(x,n)<<endl;
return 0;
 }