
//29 Write a program  to read any Month Number in integer and display Month name in the word
import java.util.Scanner;
public class DisplayMonthName {
    public final static Scanner STDIN_SCANNER = new Scanner(System.in);
    public static void main(String[] args) {
        int monno;
		System.out.print("Input Month No : ");
		monno = STDIN_SCANNER.nextInt();
		switch(monno) {
		case 1:
			System.out.println("January");
			break;
		case 2:
			System.out.println("February");
			break;
		case 3:
			System.out.println("March");
			break;
		case 4:
			System.out.println("April");
			break;
		case 5:
			System.out.println("May");
			break;
		case 6:
			System.out.println("June");
			break;
		case 7:
			System.out.println("July");
			break;
		case 8:
			System.out.println("August");
			break;
		case 9:
			System.out.println("September");
			break;
		case 10:
			System.out.println("October");
			break;
		case 11:
			System.out.println("November");
			break;
		case 12:
			System.out.println("December");
			break;
		default:
			System.out.println("invalid Month number. \nPlease try again ....");
			break;
		}
    }  
}
