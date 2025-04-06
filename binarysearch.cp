//binary search
#include <iostream>
using namespace std;
int bSearch(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x)  
            return mid;
        else if (arr[mid] > x) 
            high = mid - 1;
        else  
            low = mid + 1;
    }
    return -1;  
int main() {
    int n, x;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];  
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the element to search: ";
    cin >> x;
    int result = bSearch(arr, n, x);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}
