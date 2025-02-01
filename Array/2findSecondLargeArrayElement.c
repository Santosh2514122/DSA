/*
#include <bits/stdc++.h>
using namespace std;
void print2largest(int arr[], int arr_size)
{
    int i, first, second;
    //There should be atleast two elements 
    if (arr_size < 2) {
        printf(" Invalid Input ");
        return;
    }
    sort(arr, arr + arr_size);
    for (i = arr_size - 2; i >= 0; i--) {
        if (arr[i] != arr[arr_size - 1]) {
            printf("The second largest element is %d\n",arr[i]);
            return;
        }
    }
    printf("There is no second largest element\n");
}
int main()
{
    int arr[] = { 12, 35, 1, 10, 34, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    print2largest(arr, n);
    return 0;
}
*/
#include <stdio.h>
int secondLargest(int arr[], int n) {
    int largest = 0, secondLargest = -1;
    // finding the largest element in the array
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[largest])
            largest = i;
    }
// the largest element calculated above
    for (int i = 0; i < n; i++) {
        if (arr[i] != arr[largest])
         {
            if (secondLargest == -1)
                secondLargest = i;
            else if (arr[i] > arr[secondLargest])
                secondLargest = i;
        }
    }
    return secondLargest;
 }
 int main() {
    int arr[] = { 12, 35, 1, 10, 34, 1 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int secondLargest = secondLargest(arr, n);
    if (secondLargest == -1)
        printf("Second largest didn't exit\n");
    else
        printf( "Second largest %d: " ,arr[secondLargest]);
}
//Second largest : 34