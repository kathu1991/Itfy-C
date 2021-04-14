//27 Write a program  to read any day number in integer and display day name in the word. 
import java.util.Scanner;
public class DisplayNumToWord {
    public final static Scanner STDIN_SCANNER = new Scanner(System.in);
    
    public static void main(String[] args) {
        int dayno;
		System.out.print("Input Day No : ");
		dayno = STDIN_SCANNER.nextInt();
		switch(dayno) {
		case 1:
			System.out.println("Monday ");
			break;
		case 2:
			System.out.println("Tuesday ");
			break;
		case 3:
			System.out.println("Wednesday ");
			break;
		case 4:
			System.out.println("Thursday ");
			break;
		case 5:
			System.out.println("Friday ");
			break;
		case 6:
			System.out.println("Saturday ");
			break;
		case 7:
			System.out.println("Sunday  ");
			break;
		default:
			System.out.println("Invalid day number. \nPlease try again ....");
			break;
		}
    }
}
