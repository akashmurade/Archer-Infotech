// Input using BufferedReader and InputStreamReader from java.io package
import java.io.BufferedReader;
import java.io.InputStreamReader;

class IOUsingBI
{
	public static void main(String []args) throws Exception // code could be encased in try catch block as well
	{

		InputStreamReader isr = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(isr);
		
		System.out.println("Enter a String: ");
		String s = br.readLine();
		System.out.println("String: " + s);

		System.out.println("Enter a Boolean (true or false): ");
		boolean b = Boolean.parseBoolean(br.readLine()); // except case-insensitive true everything else is false
		System.out.println("boolean: " + b);

		System.out.println("Enter a char: ");
		char c = br.readLine().charAt(0);
		System.out.println("char: " + c);

		System.out.println("Enter a byte value: ");
		byte by = Byte.parseByte(br.readLine());
		System.out.println("byte: " + by);

		System.out.println("Enter a short value: ");
		short sh = Short.parseShort(br.readLine());
		System.out.println("short: " + sh);

		System.out.println("Enter a int value: ");
		int i = Integer.parseInt(br.readLine());
		System.out.println("int: " + i);
		
		System.out.println("Enter a long value: ");
		long l = Long.parseLong(br.readLine()); // l in the literal is not necessary since widening conversion
		System.out.println("long: " + l);

		System.out.println("Enter a float value: ");
		float f = Float.parseFloat(br.readLine()); // f in the literal is necessary since narrowing conversion from double to float
		System.out.println("float: " + f);

		System.out.println("Enter a double value: ");
		double d = Double.parseDouble(br.readLine());
		System.out.println("double: " + d);
	}
}