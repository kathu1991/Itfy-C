//Write a program to accept the height of a person m and categorize the person according to their height. 0 to 100 category dwarf; 101 to 150 category short; 151 to 165 category medium; >165 tall

import java.util.Scanner;

public class HeightOfPerson {
    public final static Scanner STDIN_SCANNER = new Scanner(System.in);
    public static void main(String[] args) {
		float perHeight;

		System.out.print("Input the height of the person (in centimetres) :");
		perHeight = STDIN_SCANNER.nextFloat();
		if(perHeight < 100.0) {
			System.out.println("The person is Dwarf. ");
		} else if(perHeight > 100.0 && perHeight <= 150.0) {
			System.out.println("The person is  short heighted. ");
		} else if(perHeight > 150.0 && perHeight <= 165.0) {
			System.out.println("The person is  medium heighted. ");
		} else if(perHeight > 165.0) {
			System.out.println("The person is taller. ");
		} else {
			System.out.println("Abnormal height.");
		}
	}
}
