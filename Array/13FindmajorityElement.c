//find the majority element
/**
#include <stdio.h>
int findMajority(int arr[], int n)
{
    for(int i = 0; i < n; i++)
	{
		int count = 1;
		for(int j = i + 1; j < n; j++)
		{
			if(arr[i] == arr[j])
				count++;
		}
		if(count > n / 2)
			return i;
	}
	return -1;
int main() {
     int arr[] = {8, 7, 6, 8, 6, 6, 6, 6}, n = 8;
     printf("%d",findMajority(arr, n)); 
}
*/
//efficient methed
#include <stdio.h>
int findMajority(int arr[], int n)
{
	int res = 0, count = 1;
    	for(int i = 1; i < n; i++)
    	{
    		if(arr[res] == arr[i])
    			count++;
    		else 
    			count --;
    		if(count == 0)
    		{
    			res = i; count = 1;
    		}
    	}
    	count = 0;
    	for(int i = 0; i < n; i++)
    		if(arr[res] == arr[i])
    			count++;
    	if(count <= n /2)
    		res = -1;
    	return res; 
}
int main() {
     int arr[] = {8, 8, 6, 6, 6, 4, 6}, n = 7;
     printf("%d",findMajority(arr, n));
    
}