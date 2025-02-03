/
#include <stdio.h>
int maxConsecutiveOnes(int arr[], int n)
{ 
	int res = 0;
	for(int i = 0; i < n; i++)
	{
		int curr = 0;
		for(int j = i; j < n; j++)
		{
			if(arr[j] == 1) curr++;
			else break;
		}
		res = (res, curr);
	}
	return res;
}
int main() {
     int arr[] = {0, 1, 1, 1, 0, 1, 1}, n = 7;
     printf("%d",maxConsecutiveOnes(arr, n));
    
}

/*#include <stdio.h>
int maxConsecutiveOnes(int arr[], int n)
{
	int res = 0, curr = 0;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] == 0)
			curr = 0;
		else
		{
			curr++;
			res = (res, curr);
		}
	}
	return res;
}
int main() {
     int arr[] = {0, 1, 1, 0, 1, 1, 1}, n = 7;
     printf("%d",maxConsecutiveOnes(arr, n));
    
}
*/