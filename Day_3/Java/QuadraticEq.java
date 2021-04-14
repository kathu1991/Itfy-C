/*
18 Write a program to calculate the root of a Quadratic Equation (take input a, b, c)
*/
import java.util.Scanner;
public class QuadraticEq {
    public final static Scanner STDIN_SCANNER = new Scanner(System.in);
    public static void main(String[] args) {
		double a, b, c, discriminant, root1, root2, realPart, imagPart;
		System.out.print("Enter coefficients a, b and c: ");
		a = STDIN_SCANNER.nextDouble();
		b = STDIN_SCANNER.nextDouble();
		c = STDIN_SCANNER.nextDouble();

		discriminant = b * b - 4 * a * c;

		// condition for real and different roots
		if(discriminant > 0) {
			root1 = (-b + Math.sqrt(discriminant)) / (2 * a);
			root2 = (-b - Math.sqrt(discriminant)) / (2 * a);
			System.out.printf("root1 = %.2f and root2 = %.2f", root1, root2);
		} else // condition for real and equal roots
		if(discriminant == 0) {
			root1 = root2 = -b / (2 * a);
			System.out.printf("root1 = root2 = %.2f;", root1);
		} /* if roots are not real */ else {
			realPart = -b / (2 * a);
			imagPart = Math.sqrt(-discriminant) / (2 * a);
			System.out.printf("root1 = %.2f+%.2fi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
		}
	}

}
