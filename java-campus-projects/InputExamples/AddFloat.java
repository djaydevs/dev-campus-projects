import java.util.Scanner;

public class AddFloat {

  public static void main(String[] args)

  {
    Scanner scan = new Scanner(System.in);

    System.out.println("Add Two Float Data" + "\n");
    System.out.print("Enter first number : ");

    float fl1 = scan.nextFloat();
    System.out.print("Enter second number : ");

    float fl2 = scan.nextFloat();

    scan.close();

    float sum = fl1 + fl2;

    System.out.print("Sum = " + sum);

  } // end of main
} // end of class
