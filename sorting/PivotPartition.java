package Sorting;

public class PivotPartition {
    // Method to print array
    public static void printArr(int arr[]) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
    // QuickSort method
    public static void quickSort(int arr[], int si, int ei) {
        if (si >= ei) {
            return;
        }
        int pIdx = partition(arr, si, ei);

        quickSort(arr, si, pIdx - 1);   // Sort left part
        quickSort(arr, pIdx + 1, ei);   // Sort right part
    }
    // Partition method
    public static int partition(int arr[], int si, int ei) {
        int pivot = arr[ei];
        int i = si - 1;
        for (int j = si; j < ei; j++) {
            if (arr[j] <= pivot) {
                i++;
                // Swap arr[i] and arr[j]
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        // Swap pivot to its correct position
        i++;
        int temp = arr[i];
        arr[i] = arr[ei];
        arr[ei] = temp;

        return i;
    }
    // Main function
    public static void main(String[] args) {
        int arr[] = {5, 9, 8, 6, 5, 2, 10,-3};
        quickSort(arr, 0, arr.length - 1);
        printArr(arr);
    }
}
