/* Danny Jay M. Flores
   BSIT-2B
   Activity 2 - Applying Scanner (OOP 1)
   10/15/2021
*/

import java.util.Scanner;

public class ScannerAct2 {
    public static void main(String[] args) {
        Scanner scanGrade = new Scanner(System.in);

        System.out.println("Prepared by: Flores, Danny Jay (BSIT-2B)\n");

        String studName;
        float aveQuiz, majorExam, recitGrade, projGrade, rating;

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

        rating = (float) ((aveQuiz * 0.3) + (majorExam * 0.3) + (recitGrade * 0.1) + (projGrade * 0.3));

        System.out.print("\nFinal Rating: " + rating);
    }
}