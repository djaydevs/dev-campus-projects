// Deletes a record from a text file (family.txt). Needs Person.java
// Uses ArrayList

//package projectperson;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.List;

public class TryDelete {
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
			// instantiate br as FileReader with filename param
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
					members.add(new Person(name, phone, city, state)); // add
				}
			} finally {
				br.close(); // closes BufferedReader
			}
		} catch (IOException e) {
			e.printStackTrace();
		}
	}

	public static boolean writeToFile(String filename) {
		boolean saved = false;
		PrintWriter pw = null; // pw is an PrintWriter identifier

		try {
			File f = new File(filename); // f is a file identifier. instantiate
			// file

			pw = new PrintWriter(new FileWriter(filename)); // instantiate pw as
			// PrintWriter,
			// FileWriter
			try {

				// for each loop. each data from members is written to parameter
				// filename
				for (Person member : members) {
					pw.println(member.getName());
					pw.println(member.getPhone());
					pw.println(member.getCity());
					pw.println(member.getState());
				}
				saved = true;
			} finally {
				pw.close();
			}
		} catch (IOException e) {

			e.printStackTrace();
		}
		return saved;
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

		// searches the record to delete
		boolean found = false; // to determine if record being searched is found
		// or not
		int position = -1; // to hold the index of the record when found

		for (Person member : members) {
			position++;
			if (pName.equalsIgnoreCase(member.getName())) {
				System.out.println("\n" + member.getName());
				System.out.println(member.getPhone());
				System.out.println(member.getCity());
				System.out.println(member.getState());

				System.out.println("Position = " + position);
				found = true;
				break;
			}
		}

		if (!found) {
			System.out.println("\n" + "Name not Found!");

		}

		else {

			// prompts user if he wants to delete the record
			String del = " ";
			System.out
					.println("Are you sure you want to delete this record [Y/N]? ");

			try {

				del = dataIn.readLine();

			} catch (IOException e) {
				System.out.println("Error!");
			}

			if (del.equalsIgnoreCase("Y")) {
				members.remove(position); // deletes record from the list

				// displays the new list
				System.out.println("New List ");
				for (Person member : members) {
					System.out.println("\n" + member.getName());
					System.out.println(member.getPhone());
					System.out.println(member.getCity());
					System.out.println(member.getState());
				}

				// writes the new list to the text file
				if (writeToFile("family.txt")) {
					System.out.println("File successfully written.");
				} else {
					System.err.println("Problem writing file.");
				}

			}
		}

	} // end main
} // end of class
