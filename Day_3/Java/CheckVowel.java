//24 Write a program to check whether an alphabet is a vowel or consonant. 
import java.util.Scanner;
public class CheckVowel {
    public final static Scanner STDIN_SCANNER = new Scanner(System.in);
    public static void main(String[] args) {
		byte c;
		boolean lowercaseVowel, uppercaseVowel;
		System.out.print("Enter an alphabet: ");
		c = (byte)nextChar(STDIN_SCANNER);

		// evaluates to 1 if variable c is a lowercase vowel
		lowercaseVowel = c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';

		// evaluates to 1 if variable c is a uppercase vowel
		uppercaseVowel = c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';

		// evaluates to 1 (true) if c is a vowel
		if(lowercaseVowel || uppercaseVowel) {
			System.out.print(((char)Byte.toUnsignedInt(c)) + " is a vowel.");
		} else {
			System.out.print(((char)Byte.toUnsignedInt(c)) + " is a consonant.");
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
