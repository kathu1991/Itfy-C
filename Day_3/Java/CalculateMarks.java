//19 Write a program to read roll no, name and marks of three subjects and calculate the total, percentage and division

import java.util.Scanner;
public class CalculateMarks {
    public final static Scanner STDIN_SCANNER = new Scanner(System.in); 
    public static void main() {
		int rl, phy, che, ca, total;
		float per;
		String8 nm = new String8(20), div = new String8(10);
		System.out.print("Input the Roll Number of the student :");
		rl = STDIN_SCANNER.nextInt();
		System.out.print("Input the Name of the Student :");
		nm.copyFrom(STDIN_SCANNER.next());
		System.out.print("Input  the marks of Physics, Chemistry and Computer Application : ");
		phy = STDIN_SCANNER.nextInt();
		che = STDIN_SCANNER.nextInt();
		ca = STDIN_SCANNER.nextInt();
		total = phy + che + ca;
		per = (float)(total / 3.0);
		if(per >= 60) {
			div.copyFrom("First");
		} else if(per < 60 && per >= 48) {
			div.copyFrom("Second");
		} else if(per < 48 && per >= 36) {
			div.copyFrom("Pass");
		} else {
			div.copyFrom("Fail");
		}

		System.out.println("\nRoll No : " + rl + "\nName of Student : " + nm);
		System.out.println("Marks in Physics : " + phy + "\nMarks in Chemistry : " + che + "\nMarks in Computer Application : " + ca);
		System.out.printf("Total Marks = %d\nPercentage = %5.2f\nDivision = %s\n", total, per, div);
	}
}
