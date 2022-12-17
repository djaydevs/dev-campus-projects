/* Danny Jay M. Flores
   BSIT-2B
   Activity 3 - Applying Scanner with Try Catch Block (OOP 1)
   10/21/2021
*/

import java.util.Scanner;
import java.util.InputMismatchException;

public class TryCatchAct3 {
    public static void main(String[] args) {
        Scanner scanGrade = new Scanner(System.in);

        System.out.println("Prepared by: Flores, Danny Jay (BSIT-2B)\n");

        String studName;
        float aveQuiz = 0, majorExam = 0, recitGrade = 0, projGrade = 0, rating;

        try {
            System.out.print("Enter Student Name: ");
            studName = scanGrade.nextLine();

            System.out.print("Enter Average Quiz: ");
            aveQuiz = scanGrade.nextFloat();

            System.out.print("Enter Major Exam: ");
            majorExam = scanGrade.nextFloat();

            System.out.print("Enter Recitation Grade: ");
            recitGrade = scanGrade.nextFloat();

            System.out.print("Enter Project Grade: ");
            projGrade = scanGrade.nextFloat();

            scanGrade.close();
        } catch (InputMismatchException e) {
            System.out.println("\nSorry, you have entered an incorrect data.");
            aveQuiz = 0;
            majorExam = 0;
            recitGrade = 0;
            projGrade = 0;
        } finally {
            rating = (float) ((aveQuiz * 0.3) + (majorExam * 0.3) + (recitGrade * 0.1) + (projGrade * 0.3));
            System.out.print("\nFinal Rating: " + rating);
        }
    }
}