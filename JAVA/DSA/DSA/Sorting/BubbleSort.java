package DSA.Sorting;

import java.util.Arrays;

import Searching.BinarySearch;

public class BubbleSort {
    public static void bubbleSort(int[] arr) {
        int n = arr.length;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j+1]) {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }
   
    public static void binarySearch(int[] arr, int target) {
        int start = 0;
        int end = arr.length - 1;
        while (start <= end) {
            int mid = start + end / 2;
            if (target == arr[mid]) {
                System.out.println(target + " is at index " + mid);
                return;
            } else if (target < arr[mid]) {
                end = mid - 1;
            } else if (target > arr[mid]) {
                start = mid + 1;
            }
        }
        System.out.println("Element is not pressent in array");
    }
    public static void main(String[] args) {
        int intArray[] = {23,43,13,65,11,62,76,83,9,71,84,34,96,80};
        //After sorting[9, 11, 13, 23, 34, 43, 62, 65, 71, 76, 80, 83, 84, 96]
        System.out.println("orignal array" + Arrays.toString(intArray));
        BubbleSort.bubbleSort(intArray);
        System.out.println("After sorting" + Arrays.toString(intArray));
        BubbleSort.binarySearch(intArray, 999);
    }
}
