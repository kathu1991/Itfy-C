//23 Write a program to check whether a character is an alphabet, digit or special character. 
import java.util.Scanner;
public class CheckChar {
    public final static Scanner STDIN_SCANNER = new Scanner(System.in);
    public static void main(String[] args) {
		byte ch;

		/* Input character from user */
		System.out.print("Enter any character: ");
		ch = (byte)nextChar(STDIN_SCANNER);


		/* Alphabet check */
		if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') {
			System.out.print("'" + ((char)Byte.toUnsignedInt(ch)) + "' is alphabet.");
		} else if(ch >= '0' && ch <= '9') {
			System.out.print("'" + ((char)Byte.toUnsignedInt(ch)) + "' is digit.");
		} else {
			System.out.print("'" + ((char)Byte.toUnsignedInt(ch)) + "' is special character.");
		}
	
    }
	/**
	 * This method is missing from the Scanner interface.
	 */
	public final static int nextChar(Scanner scanner) {
		scanner.useDelimiter("");
		int ret = scanner.next().charAt(0);
		scanner.reset();
		return ret;
	}
}
