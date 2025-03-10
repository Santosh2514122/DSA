//
/*
#include <stdio.h>
#include<math.h>
#include<limits.h>
int maxSum(int arr[], int n, int k)
{
	int max_sum = INT_MIN;
	for(int i = 0; i + k - 1 < n; i++)
	{
		int sum = 0;

		for(int j = 0; j < k; j++)
		{
			sum += arr[i + j];
		}
		max_sum = fmax(max_sum, sum);
	}
	return max_sum;
}
int main() {
     int arr[] = {1, 8, 30, -5, 20, 7}, n = 6, k = 3;
    printf("%d",maxSum(arr, n, k));
    
}
*/
//efficient method
#include <stdio.h>
#include <math.h>
#include <limits.h>
int maxSum(int arr[], int n, int k)
{
	int curr_sum = 0;
	for(int i = 0; i < k; i++)
		curr_sum += arr[i];
	int max_sum = curr_sum;
	for(int i = k; i < n; i++)
	{
		curr_sum += (arr[i] - arr[i - k]);
		max_sum = fmax(max_sum, curr_sum);
	}
	return max_sum;
}
int main() {
     int arr[] = {1, 8, 30, -5, 20, 7}, n = 6, k = 3;
     printf("%d",maxSum(arr, n, k));
    
}