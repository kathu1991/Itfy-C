//12 Write a program to read the age of a candidate and determine whether it is eligible for casting his/her own vote. 
import java.until.scanner;
public class VoteByAge {
    public static void main(String[] args) {
		{
			int voteAge;

			System.out.print("Input the age of the candidate : ");
			voteAge = STDIN_SCANNER.nextInt();
			if(voteAge < 18) {
				System.out.println("Sorry, You are not eligible to caste your vote.");
				System.out.println("You would be able to caste your vote after " + (18 - voteAge) + " year.");
			} else {
				System.out.println("Congratulation! You are eligible for casting your vote.");
			}
		}
	}

	public final static Scanner STDIN_SCANNER = new Scanner(System.in);
}
