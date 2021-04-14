//22 Write a program to check whether a triangle can be formed by the given value for the angles. 
import java.util.Scanner;
public class CheckTriangle {
    public final static Scanner STDIN_SCANNER = new Scanner(System.in); 
    public static void main() {
		int anga, angb, angc, sum; //are three angles of a triangle  

		System.out.print("Input three angles of triangle : ");
		anga = STDIN_SCANNER.nextInt();
		angb = STDIN_SCANNER.nextInt();
		angc = STDIN_SCANNER.nextInt();

		/* Calculate the sum of all angles of triangle */
		sum = anga + angb + angc;

		/* Check whether sum=180 then its a valid triangle otherwise not */
		if(sum == 180) {
			System.out.println("The triangle is valid.");
		} else {
			System.out.println("The triangle is not valid.");
		}
	}
}
