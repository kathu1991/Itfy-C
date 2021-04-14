/*
25
Write a program to calculate and print the Electricity bill of a given customer. The customer id., name and unit consumed by the user should be taken from the keyboard and display the total amount to pay to the customer. The charge are as follow : 
Unit
Charge/unit
upto 199
@1.20
200 and above but less than 400
@1.50
400 and above but less than 600
@1.80
600 and above
@2.00
If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should be of Rs. 100/-

*/
import java.util.Scanner;
public class ElectricityBill {
    public final static Scanner STDIN_SCANNER = new Scanner(System.in);
    public static void main(String[] args) {
		int custid, conu;
		float chg, surchg = 0, gramt, netamt;
		String connm ;

		System.out.print("Input Customer ID :");
		custid = STDIN_SCANNER.nextInt();
		System.out.println("Input the name of the customer :");
		connm=STDIN_SCANNER.next();
		System.out.print("Input the unit consumed by the customer : ");
		conu = STDIN_SCANNER.nextInt();
		if(conu < 200) {
			chg = 1.20f;
		} else if(conu >= 200 && conu < 400) {
			chg = 1.50f;
		} else if(conu >= 400 && conu < 600) {
			chg = 1.80f;
		} else {
			chg = 2.00f;
		}
		gramt = conu * chg;
		if(gramt > 400) {
			surchg = (float)(gramt * 15 / 100.0);
		}
		netamt = gramt + surchg;
		if(netamt < 100) {
			netamt = 100;
		}
		System.out.println("\nElectricity Bill");
		System.out.println("Customer IDNO                       :" + custid);
		System.out.println("Customer Name                       :" + connm);
		System.out.println("unit Consumed                       :" + conu);
		System.out.printf("Amount Charges @Rs. %4.2f  per unit :%8.2f\n", chg, gramt);
		System.out.printf("Surchage Amount                     :%8.2f\n", surchg);
		System.out.printf("Net Amount Paid By the Customer     :%8.2f\n", netamt);
	}

}
