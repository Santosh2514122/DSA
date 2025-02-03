//stock buy and sell
#include<stdio.h>
 int maxprofit(int price[],int n)
 {
    int profit=0;
    for(int i=1;i<n;i++)
    {
       if(price[i]>price[i-1])
       profit=profit+(price[i]-price[i-1]);
       }
       return profit;
    }
 int main()
 {
    int price[]={1,5,3,8,12},n=5;
    printf("%d",maxprofit(price,n));
    return 0;
 }
 // output 13