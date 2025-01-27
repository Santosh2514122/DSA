#include <stdio.h>
#include<stdbool.h>
//using namespace std;

bool isSorted(int arr[], int n)
{
	for(int i = 1; i < n; i++)
	{
	    if(arr[i] < arr[i - 1])
	        return false;
	}

	return true;
} 

    
int main() {

	 //printf ("enter the element:");
      int arr[] = {5, 12, 30, 2, 35}, n = 5;
      //scanf("%d",&arr[]);
      printf("%s", isSorted(arr, n)? "true": "false");
    
}