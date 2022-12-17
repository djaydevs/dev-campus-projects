/* Danny Jay M. Flores
   BSIT-2B
   Activity 6 - Applying Conditions (OOP 1)
   11/13/2021
*/

import java.util.Scanner;

public class ConditionsAct6 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        String studName;
        int subCode;
        float prelim, midterm, fGrade, fRating;

        System.out.print("Student Name: ");
        studName = scan.nextLine();

        System.out.print("Subject Code [1,2,3,4,5]: ");
        subCode = scan.nextInt();

        switch (subCode) {
        case 1:
            System.out.print("Subject Title: Math");
            break;
        case 2:
            System.out.print("Subject Title: Science");
            break;
        case 3:
            System.out.print("Subject Title: English");
            break;
        case 4:
            System.out.print("Subject Title: History");
            break;
        case 5:
            System.out.print("Subject Title: Arts");
            break;
        default:
            System.out.println("\nSorry, incorrect subject code has been inputted.");
            break;
        }

        System.out.print("\nPrelim Grade: ");
        prelim = scan.nextFloat();

        System.out.print("Midterm Grade: ");
        midterm = scan.nextFloat();

        System.out.print("FInal Grade: ");
        fGrade = scan.nextFloat();

        scan.close();

        fRating = (float) ((prelim * 0.3) + (midterm * 0.3) + (fGrade * 0.4));
        System.out.print("Final Rating: " + String.format("%.2f", fRating));

        if ((fRating >= 90) && (fRating <= 100)) {
            System.out.print("\nRemarks: Excellent");
        } else if ((fRating >= 85) && (fRating <= 89)) {
            System.out.print("\nRemarks: Very Good");
        } else if ((fRating >= 80) && (fRating <= 84)) {
            System.out.print("\nRemarks: Good");
        } else if ((fRating >= 75) && (fRating <= 79)) {
            System.out.print("\nRemarks: Fair");
        } else if (fRating <= 74) {
            System.out.print("\nRemarks: Poor");
        } else {
            System.out.println("\n\nSorry, an error occurred for displaying remarks.\n");
        }
    }
}