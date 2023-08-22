package Sorting;

import java.util.Arrays;

public class BubbleSort {

    public static void bubbleSort(int[] arr) {
        for (int i = 0; i < arr.length ; i++) {
            for (int j = 0; j < arr.length - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    Swap.swap(arr, j, j + 1);
                }
            }
        }
    }

    public static void main(String[] args) {
        int intArray[] = { 23, 43, -3, 13, 65, 11, 62, 100, 76, 83, 9, 71, 84, 34, 96, 80 };
        // After sorting[9, 11, 13, 23, 34, 43, 62, 65, 71, 76, 80, 83, 84, 96]
        System.out.println("orignal array" + Arrays.toString(intArray));
        BubbleSort.bubbleSort(intArray);
        System.out.println("After sorting" + Arrays.toString(intArray));

    }
}
