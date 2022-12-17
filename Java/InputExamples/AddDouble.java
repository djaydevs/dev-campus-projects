import java.util.Scanner;

public class AddDouble {

  public static void main(String[] args)

  {
    Scanner scan = new Scanner(System.in);

    System.out.println("Add Two Double Data" + "\n");

    System.out.print("Enter first number : ");
    double num1 = scan.nextDouble();

    System.out.print("Enter second number : ");
    double num2 = scan.nextDouble();

    scan.close();

    double sum = num1 + num2;

    System.out.print("Sum = " + sum);

  } // end of main
} // end of class
