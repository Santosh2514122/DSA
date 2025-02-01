//check array sorted or not
#include <stdio.h>
#include<stdbool.h>//true or flase
bool isSorted(int arr[], int n)
{
	for(int i = 1; i < n; i++)
	{
	    if(arr[i] < arr[i - 1])
	        return false;
	}
	return true;
}  
int main() 
{
	  int arr[] = {5, 12, 30, 2, 35}, n = 5;
      printf("%s", isSorted(arr, n)? "true": "false");
    
}
//false