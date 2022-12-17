import java.util.Scanner;

public class DoAnother {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		double b = 0, h = 0, a = 0;
		int cnt = 0;
		String again = " ";

		do {
			System.out.println("\n" + "Compute Area of Triangle" + "\n");
			System.out.print("Enter base measurement : ");
			b = scan.nextDouble();
			System.out.print("Enter height measurement : ");
			h = scan.nextDouble();
			a = b * h / 2;
			System.out.printf("\nArea of triangle = %.2f", a);

			cnt++;
			System.out.print("\n" + "Repeat Process [Y/N] ? ");
			again = scan.next();

		} while (again.equalsIgnoreCase("Y"));

		System.out.print("\n" + "Total Repetitions : " + cnt);

		scan.close();
	}
}
