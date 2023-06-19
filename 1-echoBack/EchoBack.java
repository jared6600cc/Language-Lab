import java.util.Scanner;

public class EchoBack {
	static int MAXLENGTH = 8;
	public static void main(String[] args) {
		/* Get string */
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter string: ");
		String s = sc.nextLine();
		
		while(true) {
			if(s.length() > MAXLENGTH) {
				// Entered string is too long
				System.out.print("Exceeded max string length [ " + MAXLENGTH + " ]\nEnter string: ");
				s = sc.nextLine();
			} else {
				System.out.print("[ Entered: " + s + "]");
				break;
			}				
		}
		sc.close();
	}
}
