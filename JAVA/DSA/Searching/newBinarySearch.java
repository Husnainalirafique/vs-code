package Searching;

public class newBinarySearch {
    public static void main(String[] args) {
        int[] sortedArray = { 1, 2, 3, 4, 5, 6, 8, 9 };
        newBinarySearch.binarySearch(sortedArray, 2);
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
}
