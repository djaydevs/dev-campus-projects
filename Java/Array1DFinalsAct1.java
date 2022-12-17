/* Danny Jay M. Flores
   BSIT-2B
   Finals - Activity 1 - Applying Arrays (OOP 1)
   12/16/2021
*/

import java.util.Scanner;

public class Array1DFinalsAct1 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        String repeat = " ";

        System.out.println("Sum of Odd and Even Integers");
        System.out.println("Prepared by: Danny Jay M. Flores (BSIT-2B)");

        do {
            int num[] = new int[10];
            int i, odd = 0, even = 0;

            System.out.println("");

            for (i = 0; i < num.length; i++) {
                System.out.print("Enter integer for array [" + i + "] : ");
                num[i] = scan.nextInt();

                if (num[i] % 2 == 0) {
                    even = even + num[i];
                } else {
                    odd = odd + num[i];
                }
            }
            System.out.println("\nSum of Odd Integers = " + odd);
            System.out.println("Sum of Even Integers = " + even);

            System.out.print("\nRepeat Process [Y/N]?: ");
            repeat = scan.next();

        } while (repeat.equalsIgnoreCase("Y"));
        scan.close();
    }
}