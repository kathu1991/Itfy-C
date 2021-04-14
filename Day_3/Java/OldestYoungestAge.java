//Take input of age of 3 people by user and determine oldest and youngest among them

import java.util.Scanner;

public class OldestYoungestAge {
    public final static Scanner STDIN_SCANNER = new Scanner(System.in);
    public static void main(String[] args) {
		int ram, shyam, ajay;

		System.out.println("Enter the age of Ram, Shyam and Ajay");
		ram = STDIN_SCANNER.nextInt();
		shyam = STDIN_SCANNER.nextInt();
		ajay = STDIN_SCANNER.nextInt();
		//check youngest
		if(ram <= shyam && ram <= ajay) {
			System.out.println("Ram is the youngest and his age is " + ram);
		}

		if(shyam <= ram && shyam <= ajay) {
			System.out.println("Shyam is the youngest and his age is " + shyam + " ");
		}

		if(ajay <= ram && ajay <= shyam) {
			System.out.println("Ajay is the youngest and his age is " + ajay + " ");
		}

		//check oldest
		if(ram >= shyam && ram >= ajay) {
			System.out.println("Ram is the oldest and his age is " + ram + " ");
		}

		if(shyam >= ram && shyam >= ajay) {
			System.out.println("Shyam is the oldest and his age is " + shyam);
		}

		if(ajay >= ram && ajay >= shyam) {
			System.out.println("Ajay is the oldest and his age is " + ajay);
		}
	}


}
