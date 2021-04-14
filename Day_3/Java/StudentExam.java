/*A student will not be allowed to sit in exam if his/her attendance is less than 75%. Take following input from user,  Number of classes held Number of classes attended, and print percentage of class attended. 
Is student is allowed to sit in exam or not*/

import java.util.Scanner;
public class StudentExam {
    
	public final static Scanner STDIN_SCANNER = new Scanner(System.in);
    public static void main(String[] args) {
		float attendance;
		float a;
		float b;
		System.out.println(" Enter Number of classes held");
		a = STDIN_SCANNER.nextFloat();
		System.out.println(" Enter Number of class attended");
		b = STDIN_SCANNER.nextFloat();

		// check percentage

		attendance = b / a * 100;
		System.out.printf("Attendance is %f \n", attendance);
		if(attendance >= 75) {
			System.out.print("The student is allowed to sit in the exam hall");
		} else {
			System.out.print("The student is not allowed to sit in the exam hall");
		}
	}


}
