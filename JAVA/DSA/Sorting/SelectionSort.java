package DSA.Sorting;

import java.util.Arrays;

public class SelectionSort {
    public static void selectionSort(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            int minimum = i;
            for (int j = i + 1; j < arr.length; j++) {
                if (arr[j] < arr[minimum]){
                    minimum = j;
                }
                Swap.swap(arr, minimum, i);
            }
        }
    }

    public static void main(String[] args) {
        int[] arr2 = { 4, -33, 2, 1 };
        System.out.println("Array before sorting = " + Arrays.toString(arr2));

        SelectionSort.selectionSort(arr2);
        System.out.println("Array after sorting = " + Arrays.toString(arr2));
    }
}