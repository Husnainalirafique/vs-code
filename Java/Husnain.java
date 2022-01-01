import java.util.Scanner;
public class Husnain {

    public static void main(String[] args) {
        System.out.println("Husnain");
        Scanner in = new Scanner(System.in);
        int arr[];
        arr = new int[5];
        //store the value in array by using for loop
        for (int i = 0; i < arr.length; i++) {
            System.out.print("Enter the value of array = ");
            arr[i] = in.nextInt();
        }
        //print the value of array by using for loop
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }
}