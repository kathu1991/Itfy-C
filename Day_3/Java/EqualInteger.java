//1. Write a program to accept two integers and check whether they are equal or not. 
import java.util.Scanner;

public class EqualInteger {
    public static void main(String[] args)

    {

        int m, n;

        Scanner s = new Scanner(System.in);

        System.out.print("Enter the first number:");

        m = s.nextInt();

        System.out.print("Enter the second number:");

        n = s.nextInt();

        if (m == n)

        {

            System.out.println(m + " and " + n + " are equal ");

        }

        else

        {

            System.out.println(m + " and " + n + " are not equal ");

        }

    }
}
