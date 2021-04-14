/*20 Write a program to read temperature entigrade and display a suitable message according to temperature state below : Temp < 0 then Freezing weatherTemp 0-10 then Very Cold weatherTemp 10-20 then Cold weatherTemp 20-30 then Normal in TempTemp 30-40 then Its HotTemp >=40 then Its Very Hot
*/
import java.util.Scanner;
public class ReadTemperature {
    public final static Scanner STDIN_SCANNER = new Scanner(System.in); 
    public static void main(String[] args) {
		int tmp;

		System.out.print("Input days temperature : ");
		tmp = STDIN_SCANNER.nextInt();
		if(tmp < 0) {
			System.out.println("Freezing weather.");
		} else if(tmp < 10) {
			System.out.println("Very cold weather.");
		} else if(tmp < 20) {
			System.out.println("Cold weather.");
		} else if(tmp < 30) {
			System.out.println("Normal in temp.");
		} else if(tmp < 40) {
			System.out.println("Its Hot.");
		} else {
			System.out.println("Its very hot.");
		}
	}

}
