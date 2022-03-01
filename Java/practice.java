// import java.util.Scanner;
public class practice {
    public static void main(String[] args) {
        // (For each) loop concept
        int sum = 0;
        int nums[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        for (int x : nums) {
            System.out.println("value = " + x);
            sum =sum + x;
        //All the values of nums here moves to x
        }
        System.out.println("Sumation = " + sum);
    }
}