
//28 Write a program  to read any digit, display in the word. 
import java.util.Scanner;
public class DisplayDigit {
    public final static Scanner STDIN_SCANNER = new Scanner(System.in);
    public static void main(String[] args) {

    int cdigit;

		System.out.print("Input Digit(0-9) : ");
		cdigit = STDIN_SCANNER.nextInt();
		switch(cdigit) {
		case 0:
			System.out.println("Zero");
			break;

		case 1:
			System.out.println("one");
			break;
		case 2:
			System.out.println("Two");
			break;
		case 3:
			System.out.println("Three");
			break;
		case 4:
			System.out.println("Four");
			break;
		case 5:
			System.out.println("Five");
			break;
		case 6:
			System.out.println("Six");
			break;
		case 7:
			System.out.println("Seven");
			break;
		case 8:
			System.out.println("Eight");
			break;
		case 9:
			System.out.println("Nine");
			break;
		default:
			System.out.println("invalid digit. \nPlease try again ....");
			break;
        }
    }
}
