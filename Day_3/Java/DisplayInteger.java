//13 Write a program to read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0. 

import java.util.Scanner;
public class DisplayInteger {
    public final static Scanner STDIN_SCANNER = new Scanner(System.in);
    public static void main() {
		int m, n;

		System.out.print("Input the value of m :");

		m = STDIN_SCANNER.nextInt();

		if(m != 0) {
			if(m > 0) {
				n = 1;
			} else {
				n = -1;
			}
		} else {
			n = 0;
		}

		System.out.println("The value of m = " + m + " ");

		System.out.println("The value of n = " + n + " ");
	}



}
