package Searching;

import java.util.Arrays;

public class BS {

    public static void main(String[] args) {
        int[] sortedArray = { -1, 0, 1, 2, 3, 4, 5, 6 };
                           // {0, 1, 2, 3, 4, 5, 6, 7}
        System.out.println(Arrays.toString(sortedArray));
        BS.bs(sortedArray, 6);
    }

    public static void bs(int[] arr, int target) {
        int start = 0;
        int end = arr.length - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (target == arr[mid]) {
                System.out.println(arr[mid] + " is at index " + mid);
                return;
            } else if (target < arr[mid]) {
                end = mid - 1;
            } else if (target > arr[mid]) {
                start = mid + 1;
            }

        }
        System.out.println("Element is not present in the array");
    }
}