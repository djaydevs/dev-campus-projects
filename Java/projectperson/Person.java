/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
//package projectperson;

// Person class is the example to illustrate adding, viewing, deleting of records to and from a text file
// Needed for TryAdd, TrySearch, TryEdit, TryDelete

public class Person {
	private String name;
	private String phone;
	private String city;
	private String state;

	public Person(String name, String phone, String city, String state) {
		this.name = name;
		this.phone = phone;
		this.city = city;
		this.state = state;
	}

	public String getName() {
		return name;
	}

	public String getPhone() {
		return phone;
	}

	public String getCity() {
		return city;
	}

	public String getState() {
		return state;
	}

	public void setName(String name) {
		this.name = name;
	}

	public void setPhone(String phone) {
		this.phone = phone;
	}

	public void setCity(String city) {
		this.city = city;
	}

	public void setState(String state) {
		this.state = state;

	}
}
