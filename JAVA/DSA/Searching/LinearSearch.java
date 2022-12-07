package Searching;

import java.util.Arrays;
import java.util.Scanner;

public class LinearSearch {
    public static void linersearch(int[] arr, int key) {
        int i;
        for (i = 0; i < arr.length; i++) {
            if (arr[i] == key) {
                System.out.println(key + " Is at index " + i);
                return;
            }
        }
        

    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] array = { 1, 5, 7, 2, 4, 9, 0 };

        System.out.println(Arrays.toString(array));
        System.out.print("Enter he element you want to find = ");
        int n = in.nextInt();

        LinearSearch.linersearch(array, n);

    }
}