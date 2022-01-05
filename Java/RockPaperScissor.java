import java.util.Scanner;
import java.util.Random;

public class RockPaperScissor {

    public static void main(String[] args) {
        System.out.println("\t\t\t\t\t|--------------------------------|");
        System.out.println("\t\t\t\t\t|       Rock Paper Scissor       |");
        System.out.println("\t\t\t\t\t| ----> Husnain Ali Rafique <----|");
        System.out.println("\t\t\t\t\t|--------------------------------|");
        // Looping to keep asking the user to enter a move

        while (true) {

            // Getting the player move

            Scanner input = new Scanner(System.in);
            System.out.print("\n\t\t\t\t\t-----> TYPE YOUR MOVE <-----\n\t\t\t\t\trock - paper - scissor \n\t\t\t\t\tFor Exit = Q \n\t\t\t\t\t--------------------\n\t\t\t\t\tYour Move = ");
            // System.out.print("\n\t\t\t\t\t >>>>>TYPE YOUR MOVE<<<<<\n\t\t\t\t\trock\n\t\t\t\t\tpaper\n\t\t\t\t\tscissor\n\t\t\t\t\t--------------------\n\t\t\t\t\tYour Move = ");
            String move = input.nextLine();
            System.out.println("\t\t\t\t\t--------------------");

            // Check if the user want to quit

            if (move.equalsIgnoreCase("Q")) {
                break;
            }

            // Move is valid

            if (!move.equalsIgnoreCase("Rock") && !move.equalsIgnoreCase("Paper")
                    && !move.equalsIgnoreCase("Scissor")) {
                System.out.print("\n\t\t\t\t\t .......Your move isn't valid.......");
            } else {

                // Randomly generating the opponents move(0, 1, 2,)
                Random in = new Random();
                int random = in.nextInt(3);
                String opponentmove = "";
                if (random == 0) {
                    opponentmove = "paper";
                } else if (random == 1) {
                    opponentmove = "scissor";
                } else {
                    opponentmove = "rock";
                }
                System.out.println("\t\t\t\t\tOpponent move = " + opponentmove);
                System.out.println("\t\t\t\t\t--------------------");

                if (move.equals(opponentmove)) {
                    System.out.println("\t\t\t\t\tTie");
                } else if (move.equalsIgnoreCase("scissor") && opponentmove.equalsIgnoreCase("paper")
                        || move.equalsIgnoreCase("paper") && opponentmove.equalsIgnoreCase("rock")
                        || move.equalsIgnoreCase("rock") && opponentmove.equalsIgnoreCase("scissor")) {
                    System.out.println("\t\t\t\t\tYOU WON :)");
                } else {
                    System.out.println("\t\t\t\t\tYOU LOSE:(");
                }
            }

        }
        System.out.println("\t\t       |::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::|");
        System.out.println("\t\t       |                     --> Thanks for playing <--                     |");
        System.out.println("\t\t       |::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::|");
    }
}