// Display the area of a triangle by inputting the base and height measurement
// Makes use of BufferedReader 
// Uses try catch block - IOException and NumberFormatException
// Makes use of Integer class with method parseInt

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class AreaTri2 {
  public static void main(String[] args) {
    BufferedReader dataIn = new BufferedReader(new InputStreamReader(System.in));

    int base = 0;
    int height = 0;
    int area = 0;

    try {
      System.out.print("Please Enter base :");
      base = Integer.parseInt(dataIn.readLine());

      System.out.print("Please Enter height :");
      height = Integer.parseInt(dataIn.readLine());
    } catch (IOException e) {
      System.out.print("Error on input....");
    } catch (NumberFormatException er) {
      System.out.print("Number Format Error...");
    }

    area = base * height / 2;
    System.out.println("Area of triangle  :" + area);

  }
}
