/*16 Write a program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies. */

import java.util.Scanner;
public class Quadrant {
    public final static Scanner STDIN_SCANNER = new Scanner(System.in);
    public static void main() {
		int co1, co2;

		System.out.print("Input the values for X and Y coordinate : ");
		co1 = STDIN_SCANNER.nextInt();
		co2 = STDIN_SCANNER.nextInt();

		if(co1 > 0 && co2 > 0) {
			System.out.println("The coordinate point (" + co1 + "," + co2 + ") lies in the First quandrant.");
		} else if(co1 < 0 && co2 > 0) {
			System.out.println("The coordinate point (" + co1 + "," + co2 + ") lies in the Second quandrant.");
		} else if(co1 < 0 && co2 < 0) {
			System.out.println("The coordinate point (" + co1 + ", " + co2 + ") lies in the Third quandrant.");
		} else if(co1 > 0 && co2 < 0) {
			System.out.println("The coordinate point (" + co1 + "," + co2 + ") lies in the Fourth quandrant.");
		} else if(co1 == 0 && co2 == 0) {
			System.out.println("The coordinate point (" + co1 + "," + co2 + ") lies at the origin.");
		}
	}
}
