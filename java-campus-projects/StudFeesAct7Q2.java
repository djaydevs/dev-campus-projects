/* Danny Jay M. Flores
   BSIT-2B
   Activity 7 Quiz 2 - Applying Repetition Controls (OOP 1)
   11/20/2021
*/

import java.util.Scanner;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class StudFeesAct7Q2 {
    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));

        String anotherStud = " ";
        int cnt1 = 0, cnt2 = 0, cnt3 = 0;
        double grandFees = 0;

        System.out.println("Compute Student Fees");
        System.out.println("Prepared by: Danny Jay M. Flores (BSIT-2B)");
        do {
            String studName = " ";
            double lectUnits, labUnits, lectFee, labFee, totalFees, uponEnrol, midtermPay, finalPay;
            char payMode;

            System.out.print("\nEnter student name: ");
            studName = read.readLine();

            System.out.print("\nLecture Units: ");
            lectUnits = Double.parseDouble(read.readLine());

            System.out.print("Laboratory Units: ");
            labUnits = Double.parseDouble(read.readLine());

            System.out.print("Total Units: " + (lectUnits + labUnits));

            System.out.println("\n\nLecture Fee: " + (lectFee = lectUnits * 200));
            System.out.println("Laboratory Fee: " + (labFee = labUnits * 300));
            System.out.println("Total Fees: " + (totalFees = lectFee + labFee));

            grandFees += totalFees;

            System.out.print("\nPayment Mode [I, C]: ");
            payMode = scan.next().charAt(0);

            if ((payMode == 'I') || (payMode == 'i')) {
                System.out.println("Payment Type: Instalment");
                System.out.println("Upon Enrollment Payment: " + (uponEnrol = totalFees * 0.5));
                System.out.println("Midterm Payment: " + (midtermPay = totalFees * 0.25));
                System.out.println("Final Payment: " + (finalPay = totalFees * 0.25));
                cnt1++;
            } else if ((payMode == 'C') || (payMode == 'c')) {
                System.out.println("Payment Type: Cash Payment");

                uponEnrol = totalFees * 0.05;
                uponEnrol = totalFees - uponEnrol;

                System.out.println("Upon Enrollment Payment: " + uponEnrol);
                System.out.println("Midterm Payment: " + (midtermPay = 0));
                System.out.println("Final Payment: " + (finalPay = 0));
                cnt2++;
            } else {
                System.out.println("Sorry, an error occured.");
            }

            cnt3++;
            System.out.print("\nProcess another student [Y/N]?: ");
            anotherStud = scan.next();

        } while (anotherStud.equalsIgnoreCase("Y"));

        System.out.println("\nTotal Count of Instalment: " + cnt1);
        System.out.println("Total Count of Cash Payment: " + cnt2);
        System.out.println("Total student processed: " + cnt3);
        System.out.println("\nGrand Total Fees: " + (String.format("%.2f", grandFees)));

        scan.close();
    }
}