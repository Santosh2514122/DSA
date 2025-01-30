#include <iostream>
using namespace std;
int lastOcc(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)// Binary search for last occurrence
    {
        int mid = (low + high) / 2;
        if (x > arr[mid])// If x is greater the
            low = mid + 1;

        else if (x < arr[mid])// If x is smaller then ignore right half
            high = mid - 1;

        else
        {
            // Check if it's the last occurrence
            if (mid == n - 1 || arr[mid + 1] != arr[mid])
                return mid; // return index of last occurrence
            else
                low = mid + 1; // Continue searching in the right half
        }
    }

    // If element is not found, return -1
    return -1;
}

int main() {
    int arr[] = {5, 10, 10, 10, 10, 20, 20}; // Sorted array
    int n = 7; // Size of the array

    int x = 10; // Element to find the last occurrence of

    // Output the last occurrence of x in the array
    cout << lastOcc(arr, n, x);
    return 0;
}
