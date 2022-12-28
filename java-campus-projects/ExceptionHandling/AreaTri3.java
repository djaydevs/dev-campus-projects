// Display the area of a triangle by inputting the base and height measurement
// Makes use of JOptionPane
// Uses try catch block - NumberFormatException
// Makes use of Double class with method parseDouble

import javax.swing.JOptionPane;

public class AreaTri3 {
  public static void main(String[] args)

  {
    double base = 0;
    double height = 0;
    double area = 0;
    String strBase;

    try {
      strBase = JOptionPane.showInputDialog("Enter base : ");
      base = Double.parseDouble(strBase);

      String strHeight = JOptionPane.showInputDialog("Enter height : ");
      height = Double.parseDouble(strHeight);

    } catch (NumberFormatException ne) {
      System.out.println("Incorrect Number Format!");
    }

    area = base * height / 2;
    System.out.printf("Area of triangle  : %.2f", area);

  }
}
