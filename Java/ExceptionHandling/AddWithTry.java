import java.util.Scanner;
import java.util.InputMismatchException;

public class AddWithTry {
  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);

    int num1 = 0, num2 = 0, sum = 0;

    System.out.println("Add Two Numbers" + "\n");

    try {
      System.out.print("Enter first number : ");
      num1 = scan.nextInt();

      System.out.print("Enter second number : ");
      num2 = scan.nextInt();

      scan.close();
    } catch (InputMismatchException e) {
      System.out.print("You have entered an incorrect data.");
      num1 = 0;
      num2 = 0;
    } finally {
      sum = num1 + num2;
      System.out.print("\n\n" + "Sum = " + sum);
    }
  } // end of main
} // end of class
