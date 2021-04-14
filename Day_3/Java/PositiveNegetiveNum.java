//3 Write a program to check whether a given number is positive or negative.
public class PositiveNegetiveNum {
    public static void main(String[] args) 
    {
        int number=109;
        if(number > 0)
        {
            System.out.println(number+" is a positive number");
        }
        else if(number < 0)
        {
            System.out.println(number+" is a negative number");
        }
        else
        {
            System.out.println(number+" is neither positive nor negative");
        }
    }
}
