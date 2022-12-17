import java.util.Scanner;

public class Add {

  public static void main(String[] args)

  {
    Scanner scan = new Scanner(System.in);

    int num1 = 0;
    int num2 = 0;
    int sum = 0;

    System.out.println("Add Two Numbers" + "\n");
    System.out.print("Enter first number : ");

    num1 = scan.nextInt();
    System.out.print("Enter second number : ");

    num2 = scan.nextInt();

    scan.close();

    sum = num1 + num2;

    System.out.print("Sum = " + sum);

  } // end of main
} // end of class
