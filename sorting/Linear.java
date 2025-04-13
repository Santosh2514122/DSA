
    
import java.util.Scanner;

public class Linear {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[10];
        int n, item, loc = -1;

        System.out.print("Enter the size of array: ");
        n = sc.nextInt();
        System.out.println("Enter the elements of the array:");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.print("Enter the element to search: ");
        item = sc.nextInt();

        // Linear Search
        for (int i = 0; i < n; i++) {
            if (arr[i] == item) {
                loc = i + 1; // location (not index)
                break;
            }
        }
        // Print result
        if (loc > 0) {
            System.out.println("Searching is successful, item found at location " + loc + ".");
        } else {
            System.out.println("Searching is unsuccessful.");
        }
        sc.close();
    }
}
/* 
Enter the size of array: 3
Enter the elements of the array:
1
1
2
Enter the element to search: 2
Searching is successful, item found at location 3.
*/

