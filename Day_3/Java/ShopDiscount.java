
import java.util.Scanner;

public class ShopDiscount {
    public final static Scanner STDIN_SCANNER = new Scanner(System.in);
	public static void main(String[] args) {
		int qty;
		float cost;
		int dis = 0;
		int rate = 100;
		System.out.println("Please Enter Quantity");
		qty = STDIN_SCANNER.nextInt();

		if(qty > 1_000) {
			// 10% discount
			dis = 10;
		}
		cost = qty * rate - qty * rate * dis / 100;
		System.out.printf("Total Cost is %.2f", cost);
	}


}