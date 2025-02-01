//remove the  dublicate  element of array
 #include<stdio.h>
 int remDuplicate(int arr[], int n) {
    if (n == 0) return 0;  // Handle edge case for empty array
    int res = 1;  // Start from the second element
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[res - 1]) {  // Check for unique elements
            arr[res] = arr[i];  // Store unique element
            res++;
        }
    }
    return res;  // Return the count of unique elements
 }
 int main() {
    int arr[] = {1, 1, 2, 2, 3, 3};
    int n = 6;
    int uniqueCount = remDuplicate(arr, n);
    // Print the unique elements
    for (int i = 0; i < uniqueCount; i++) {
       printf("%d",arr[i]);
    }
    return 0;
}
