/* Danny Jay M. Flores
   BSIT-2B
   Activity 5 - Applying JOptionPane with Try Catch Block (OOP 1)
   10/21/2021
*/

import javax.swing.JOptionPane;

public class JOptionPaneAct5 {
    public static void main(String[] args) {
        double length = 0, width = 0, perimeter = 0;

        try {
            String strLength = JOptionPane.showInputDialog("Enter the length: ");
            length = Double.parseDouble(strLength);

            String strWidth = JOptionPane.showInputDialog("Enter the width: ");
            width = Double.parseDouble(strWidth);
        } catch (NumberFormatException ex) {
            System.out.println("Sorry, but there's a number format error.");
        } finally {
            perimeter = 2 * (length + width);
            System.out.println("\nPerimeter of a Rectangle: " + perimeter);
        }
    }
}