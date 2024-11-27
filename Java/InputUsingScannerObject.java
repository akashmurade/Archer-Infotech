// Input through the use of Scanner class
import java.util.Scanner;

class InputUsingScannerObject
{
	public static void main(String []args)
	{

		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter a String: ");
		String s = sc.nextLine();
		System.out.println("String: " + s);

		System.out.println("Enter a Boolean (true or false): ");
		boolean b = sc.nextBoolean();
		System.out.println("boolean: " + b);

		System.out.println("Enter a char: ");
		char c = sc.next().charAt(0);
		System.out.println("char: " + c);

		System.out.println("Enter a byte value: ");
		byte by = sc.nextByte();
		System.out.println("byte: " + by);

		System.out.println("Enter a short value: ");
		short sh = sc.nextShort();
		System.out.println("short: " + sh);

		System.out.println("Enter a int value: ");
		int i = sc.nextInt();
		System.out.println("int: " + i);
		
		System.out.println("Enter a long value: ");
		long l = sc.nextLong();
		System.out.println("long: " + l);

		System.out.println("Enter a float value: ");
		float f = sc.nextFloat();
		System.out.println("float: " + f);

		System.out.println("Enter a double value: ");
		double d = sc.nextDouble();
		System.out.println("double: " + d);
	}
}