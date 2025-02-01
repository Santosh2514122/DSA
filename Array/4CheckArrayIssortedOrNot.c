//check array sorted or not

#include <stdio.h>
#include <stdbool.h>
bool isSorted(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(arr[j] < arr[i])
				return false;
		}
	}

	return true;
} 
int main() {
      int arr[] = {7, 2, 30, 10}, n = 4;
      printf("%s", isSorted(arr, n)? "true": "false");
    
}
// output false
//efficient
/*
#include <stdio.h>
#include<stdbool.h>
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
      int arr[] = {5, 12, 30, 32, 35}, n = 5;
      printf("%s", isSorted(arr, n)? "true": "false");
}
*/