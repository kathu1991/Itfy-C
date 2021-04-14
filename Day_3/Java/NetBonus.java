/* 8. A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
Ask user for their salary and year of service and print the net bonus amount.*/
public class NetBonus {
    public final static Scanner STDIN_SCANNER = new Scanner(System.in);
    public static void main(String[] args) {
		int service;
		float cost;
		float bonus;
		int salary;
		float total;
		System.out.println(" Enter Salary");
		salary = STDIN_SCANNER.nextInt();
		System.out.println(" Enter Years of service");
		service = STDIN_SCANNER.nextInt();

		if(service > 5) {
			bonus = (salary * 5) / 100;
			System.out.printf("You are Bonus is %f \n", bonus);
		} else {
			System.out.println("You are not eligible for bonus as you have less service years.");
		}
	}



}
