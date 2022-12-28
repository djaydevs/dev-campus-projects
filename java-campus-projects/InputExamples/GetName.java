import java.util.Scanner;

public class GetName {

  public static void main(String[] args)

  {
    Scanner scan = new Scanner(System.in);

    String name;

    System.out.print("What is your name ? ");
    name = scan.nextLine();

    scan.close();

    System.out.print("Hello, " + name + ". ");
    System.out.print("Welcome to Java....");

  } // end of main
} // end of class
