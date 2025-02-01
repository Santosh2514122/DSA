
//find the largest element in array:
/*
#include<stdio.h>
#include<stdbool.h>
int getlargest(int arr[],int n)
 {
    for(int i=0;i<n;++i)
    {
       bool flag=true;
        for(int j=i;j<n;++j)
        {
          if(arr[j]>arr[i])
            {
                flag=false;
                 break;
            }
        }
        if(flag==true)
    {
        return arr[i];
    }
    }
    return -1;
 }
 int main()
 {
    int arr[]={5,8,20,15},n=4;
    printf("%d",getlargest(arr,n));
    return 0;
}
*/


// eff methed 2

#include<stdio.h>
int getlargest(int arr[], int n) {
    int result = 0; // Assume the first element is the largest
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[result])// Start from the second element 
        {
            result = arr[i];  // Update result if we find a larger element
        }
    }
    return result;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};  
    int n=6;
    printf("%d",getlargest(arr,n));
    return 0;
}
//output=6
