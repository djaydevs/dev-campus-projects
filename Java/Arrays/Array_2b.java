//Ask the user to enter 5 integer elements using arrays, 
// and display their sum.

import java.util.Scanner;

public class Array_2b {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);
		int numArr[] = new int[5];
		int sum = 0;

		System.out.println("Input elements for Array : ");
		for (int i = 0; i < numArr.length; i++) {
			System.out.print("Enter numArr[" + i + "] : ");
			numArr[i] = scan.nextInt();
			sum = sum + numArr[i];
		}

		System.out.println("Elements of the Array : ");
		for (int i = 0; i < numArr.length; i++) {
			System.out.println("numArr[" + i + "] = " + numArr[i]);

		}
		System.out.println("Sum = " + sum);
		scan.close();
	}
}
