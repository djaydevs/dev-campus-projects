/* Danny Jay M. Flores
   BSIT-2B
   Activity 4 - Applying BufferedReader with Try Catch Block (OOP 1)
   10/21/2021
*/

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class BuffReaderAct4 {
    public static void main(String[] args) {
        BufferedReader inputData = new BufferedReader(new InputStreamReader(System.in));

        double radius = 0, circleArea = 0, sides = 0, squareArea = 0;

        try {
            System.out.print("Enter radius measurement: ");
            radius = Double.parseDouble(inputData.readLine());

            System.out.print("Enter measurement of the side of the square: ");
            sides = Double.parseDouble(inputData.readLine());
        } catch (IOException e) {
            System.out.println("\nSorry, but there's an input error.");
        } catch (NumberFormatException ex) {
            System.out.println("\nSorry, but there's a number format error.");
        } finally {
            circleArea = 3.14 * radius * radius;
            squareArea = sides * sides;

            System.out.println("\nRadius Measurement: " + radius);
            System.out.println("Area of Circle: " + circleArea);

            System.out.println("\nSide Measurement: " + sides);
            System.out.println("Area of Square: " + squareArea);
        }
    }
}