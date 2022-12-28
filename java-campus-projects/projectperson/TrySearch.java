// View record from a text file (family.txt). Needs Person.java
// Uses ArrayList

//package projectperson;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;

public class TrySearch {
	// members is an arraylist of type Person
	private static List<Person> members = new ArrayList<Person>();

	// method which gets data from members and displays the content.
	public static void listMembers() {
		System.out.println("Name" + "\t\t\t" + "Phone" + "\t\t" + "City"
				+ "\t\t" + "State" + "\n");

		// for each loop. each data from members is stored on identifier member.
		// Both are of type Person.
		for (Person member : members) {
			System.out.print(member.getName() + "\t\t");
			System.out.print(member.getPhone() + "\t\t");
			System.out.print(member.getCity() + "\t\t");
			System.out.print(member.getState() + "\n");

		}
	}

	// method which reads data from the opened text file - filename parameter
	// uses BufferedReader
	public static void readFromFile(String filename) {

		// initializes br identifer as BufferedReader.
		BufferedReader br = null;

		members.clear(); // removes all elements in arraylist members

		try {
			// instantiate br as FileReader with filename parameter
			br = new BufferedReader(new FileReader(filename));
			try {

				String name, phone, city, state; // initialize identifiers

				// reads each line through br identifier, and stores it on
				// temporary identifiers
				// loop continues until null is encountered
				while ((name = br.readLine()) != null) {
					phone = br.readLine();
					city = br.readLine();
					state = br.readLine();

					// add the data to members arraylist
					members.add(new Person(name, phone, city, state));
				}
			} finally {
				br.close(); // closes BufferedReader
			}
		} catch (IOException e) {
			e.printStackTrace();
		}
	}

	public static void main(String[] args) {

		BufferedReader dataIn = new BufferedReader(new InputStreamReader(
				System.in));

		String pName = "";

		// accepts data input to search
		System.out.print("\nPlease Enter Name to Search :");
		try {

			pName = dataIn.readLine();

		} catch (IOException e) {
			System.out.println("Error!");
		}

		// calls readFromFile method using "family.txt" as file parameter
		// family.txt should be existing.
		readFromFile("family.txt");

		// searches the name from the array list
		boolean found = false;
		for (Person member : members) {
			if (pName.equalsIgnoreCase(member.getName())) {
				System.out.println("\n" + member.getName());
				System.out.println(member.getPhone());
				System.out.println(member.getCity());
				System.out.println(member.getState());
				found = true;
				break;
			}
		}

		if (!found) {
			System.out.println("\n" + "Name not Found!");
		}

	} // end main

}
