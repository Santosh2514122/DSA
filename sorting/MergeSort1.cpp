//merge two sorted array:
/*#include<bits/stdtr1c++.h>
using namespace std;
     void mergeArrays(int arr1[],int arr2[],int n1, int n2,int arr3[]) 
     {
     int i = 0,j = 0,k = 0;
     while(i<n1 && j<n2)
       {
        if(arr1[i]<arr2[j])
        arr3[k++]=arr1[i++];
        else
        arr3[k++]=arr2[j++];
       }
       while(i<n1)
         arr3[k++]=arr1[i++];
       while ( j<n2)
     {
        arr3[k++]=arr2[j++];
     }
}
int main()
{
    int arr1[]={1,3,5,7};
    int n1=4;
    int arr2[]={2,4,6,8};
    int n2=4;
    
    int arr3[n1+n2];
    mergeArrays(arr1,arr2,n1,n2,arr3);//call the function
    cout<<"array of merging"<<"\n";
    for(int i=0;i<n1+n2;i++)
    {
        cout<<arr3[i]<<" ";
    }
    return 0;
}
*/
//array of merging
//1 2 3 4 5 6 7 8 
//naive method
#include <iostream>
#include <algorithm>
using namespace std;

void merge(int a[], int b[], int m, int n){
    
    int c[m+n];
    for(int i=0;i<m;i++)
        c[i]=a[i];
    for(int j=0;j<n;j++)
        c[j+m]=b[j];
    
    sort(c,c+m+n);
    
    for(int i=0;i<m+n;i++)
        cout<<c[i]<<" ";
}

int main() {
	
    int a[]={10,15,20,40};
    int b[]={5,6,6,10,15};
	
	int m=sizeof(a)/sizeof(a[0]);
	int n=sizeof(b)/sizeof(b[0]);
	merge(a,b,m,n);
}