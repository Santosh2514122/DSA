//find the max different in element
//naive solution
/*#include <stdio.h>
int maxDiff(int arr[], int n){
    int res = arr[1] - arr[0];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int diff = arr[j] - arr[i];
            if (diff > res) {
                res = diff;
            }
        }
    }
    return res;
}
int main() {
    int arr[] = {2, 3, 10, 6, 4, 8, 1},n=7;
    printf("%d\n", maxDiff(arr, n));
    return 0;
}*/
//output=maxdifferent =8
#include <stdio.h>
#include <limits.h>
int maxDiff(int arr[], int n)
{
    int res = arr[1] - arr[0], minVal = arr[0];

    for(int i = 1; i < n; i++)
    {
        res = (res > (arr[i] - minVal)) ? res : (arr[i] - minVal);
        minVal = (minVal < arr[i]) ? minVal : arr[i];
    }
    return res;
}
int main() {
    int arr[] = {2, 3, 10, 6, 4, 8, 1}, n = 7;
    printf("%d", maxDiff(arr, n));
    return 0;
}
//output=8