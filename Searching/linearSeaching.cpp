#include <iostream>
using namespace std;

// Binary Search function
int bSearch(int arr[], int n, int x) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == x)  // If element is found
            return mid;
        else if (arr[mid] > x)  // If element is smaller, search in left half
            high = mid - 1;
        else  // If element is larger, search in right half
            low = mid + 1;
    }

    return -1;  // Element not found
}

int main() {
    int n, x;

    // Ask for the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];  // Declare array of size n

    // Input elements into the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Ask for the element to search
    cout << "Enter the element to search: ";
    cin >> x;

    // Perform binary search
    int result = bSearch(arr, n, x);

    // Output the result
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
