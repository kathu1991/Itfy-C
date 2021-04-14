//21 Write a program to check whether a triangle is Equilateral, Isosceles or Scalene. 

import java.util.Scanner;
public class CheckTriangle {
    public final static Scanner STDIN_SCANNER = new Scanner(System.in); 
    public static void main(String[] args) {
		int side1, side2, side3;

		/* Input sides of a triangle */
		System.out.print("Enter three sides of triangle: ");
		side1 = STDIN_SCANNER.nextInt();
		side2 = STDIN_SCANNER.nextInt();
		side3 = STDIN_SCANNER.nextInt();

		if(side1 == side2 && side2 == side3) {
			/* If all sides are equal */
			System.out.print("Equilateral triangle.");
		} else if(side1 == side2 || side1 == side3 || side2 == side3) {
			/* If any two sides are equal */
			System.out.print("Isosceles triangle.");
		} else {
			/* If none sides are equal */
			System.out.print("Scalene triangle.");
		}
	}

}
