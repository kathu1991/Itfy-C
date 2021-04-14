//15 Write a program to find the largest of three numbers.
import java.util.Scanner;
public class LargestOfThree {
    public final static Scanner STDIN_SCANNER = new Scanner(System.in);
    public static void main(String[] args) {
		double n1, n2, n3;
		System.out.print("Enter three different numbers: ");
		n1 = STDIN_SCANNER.nextDouble();
		n2 = STDIN_SCANNER.nextDouble();
		n3 = STDIN_SCANNER.nextDouble();

		// if n1 is greater than both n2 and n3, n1 is the largest
		if(n1 >= n2 && n1 >= n3) {
			System.out.printf("%.2f is the largest number.", n1);
		}

		// if n2 is greater than both n1 and n3, n2 is the largest
		if(n2 >= n1 && n2 >= n3) {
			System.out.printf("%.2f is the largest number.", n2);
		}

		// if n3 is greater than both n1 and n2, n3 is the largest
		if(n3 >= n1 && n3 >= n2) {
			System.out.printf("%.2f is the largest number.", n3);
		}
	}

}
