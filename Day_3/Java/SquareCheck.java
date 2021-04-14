//5. Take values of length and breadth of a rectangle from user and check if it is square or not.
import java.util.Scanner;
public class SquareCheck {
    
    // Function to check if the given    
    // Driver code
    public static void main(String[] args)
    {
         
        int a ,b;
        Scanner s = new Scanner(System.in);
        System.out.print("Enter Length:");
        a = s.nextInt();
        System.out.print("Enter Breadth:");
        b = s.nextInt();
      if(a==b){
        System.out.println("The Rectangle is a square\n");
      }else{
        System.out.println("The Rectangle is not a square\n");
      }
    }
}
