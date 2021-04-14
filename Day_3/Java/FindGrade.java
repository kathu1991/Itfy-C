
/**
 *26 Write a program  to accept a grade and declare the equivalent description : 
Grade
Description
E
Excellent
V
Very Good
G
Good
A
Average
F
Fail

 */
import java.util.Scanner;

public class FindGrade {
    public final static Scanner STDIN_SCANNER = new Scanner(System.in);

    public static void main(String[] args) {
        String notes;
        System.out.print("Enter Grade :");
        char  c = STDIN_SCANNER.next().charAt(0); ;
        char  grd = Character.toUpperCase(c);
        switch (grd) {
            case 'E':
            notes= " Excellent";
                break;
            case 'V':
               notes=" Very Good";
                break;
            case 'G':
            notes="Good";
                break;
            case 'A':
            notes="Average";
                break;
            case 'F':
            notes="Fail";
                break;
            default:
            notes="Invalid Grade";
                break;
        }
        System.out.print("You have chosen : "+ notes);
    }

}
