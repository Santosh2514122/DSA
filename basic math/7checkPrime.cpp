//check number prime or not  
// naive method
#include<iostream>
#include<limits.h>
using namespace std;
 bool  prime (int n)
 {
  if(n==1)
  return false;
  for(int i=2;i<n;i++)
  if(n%i==0)
  return false;
  return true;
 }
 int main()
 {
 int n;
 cout<<"enter the number:";
 cin>>n;
 cout<<prime( n);
 }
//efficient method