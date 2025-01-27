#include<iostream>
#include<limits.h>
using namespace std;
 int countZero( int number)
 {
   int res=0;
   for(int i=5;i<=number;i=i*5)
  {
    res=res+(number/i);
  }
 return res;
 }


 int main()
 {
 int  number=3;
 cout<<countZero(number);
 return 0;
 }