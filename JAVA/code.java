import java.util.Scanner;

public class code {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a, b, c;
        System.out.println("welcome to the canteen menu");
        System.out.println("1.pizza:300Rs");
        System.out.println("2.burger:200Rs");
        System.out.println("3.sandwich:250Rs");
        System.out.println("4.coke:60Rs");
        System.out.print("enter serial number = ");
        a = in.nextInt();
        switch (a) {
            case 1:
                System.out.print("Enter quantity = ");
                b = in.nextInt();
                c = b * 300;
                System.out.println("Total bill = "+c);
                break;
            case 2:
                System.out.print("Enter quantity = ");
                b = in.nextInt();
                c = b * 200;
                System.out.println("Total bill = "+c);
                break;
            case 3:
                System.out.print("Enter quantity = ");
                b = in.nextInt();
                c = b * 250;
                System.out.println("Total bill = "+c);
                break;
            case 4:
                System.out.print("Enter quantity = ");
                b = in.nextInt();
                c = b * 250;
                System.out.println("Total bill = "+c);
                break;
            default:
                System.out.println("Invalid Choice");
                break;
        }
    }
}