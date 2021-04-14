/*
17 Write a program to find the eligibility of admission for a professional course based on the following criteriaEligibility Criteria : PCM minimum score should be 55 and combined score should be minimum 175
*/ 

import java.util.Scanner;
public class Admission {
    public final static Scanner STDIN_SCANNER = new Scanner(System.in);
    public static void main(String[] args) {
		int p, c, m;

		System.out.println("Eligibility Criteria :");
		System.out.println("Marks in Maths >=55");
		System.out.println("and Marks in Phy >=55");
		System.out.println("and Marks in Chem>=55");
		System.out.println("and Total in all three subject >=175");
		System.out.println("-------------------------------------");

		System.out.print("Input the marks obtained in Physics :");
		p = STDIN_SCANNER.nextInt();
		System.out.print("Input the marks obtained in Chemistry :");
		c = STDIN_SCANNER.nextInt();
		System.out.print("Input the marks obtained in Mathematics :");
		m = STDIN_SCANNER.nextInt();
		System.out.println("Total marks of Maths, Physics and Chemistry : " + (m + p + c));

		if(m >= 55 && p >= 55 && c == 55) {
			if(m + p + c >= 175) {
				System.out.println("The  candidate is eligible for admission.");
			} else {
				System.out.println("The candidate is not eligible.");
			}
		} else {
			System.out.println("The candidate is not eligible.");
		}
	}

}
