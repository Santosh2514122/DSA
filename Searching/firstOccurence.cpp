#include<iostream>
using namespace std;

int firstSear(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;
    int result = -1;  //when x is not found

    while (low <= high) //check condition
    {
        int mid = (low + high) / 2;//for mid
        if (arr[mid] == x) 
        {
            result = mid;  //  the index of x=mid
            high = mid - 1;  // Continue searching in the left half
        }
        else if (arr[mid] > x) // x is smaller than arr[mid], search the left half
        {
            high = mid - 1;
        }
        else// x is larger than arr[mid], search the right half
         {
            low = mid + 1;
        }
    }
    
    return result;  // Return the first occurrence index or -1 if not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};  // Example array
    int n = 7;  // Size of the array
    int x = 20;  // Value x for search

    int index = firstSear(arr, n, x);  // Call the function
    cout << "First occurrence of " << x << " is at index: " << index << endl;

    return 0;
}
