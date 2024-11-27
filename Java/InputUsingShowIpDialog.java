// Input through the use of Scanner class
import javax.swing.JOptionPane;

class InputUsingShowIpDialog
{
	public static void main(String []args)
	{
		String s = JOptionPane.showInputDialog("Enter a string: ");
		System.out.println("String: " + s);

		boolean b = Boolean.parseBoolean(JOptionPane.showInputDialog("Enter a boolean value(true or false): ")); // true case-insensitive = true else false
		System.out.println("boolean: " + b);

		char c = JOptionPane.showInputDialog("Enter a char: ").charAt(0);
		System.out.println("char: " + c);

		byte by = Byte.parseByte(JOptionPane.showInputDialog("Enter a byte value: "));
		System.out.println("byte: " + by);

		short sh = Short.parseShort(JOptionPane.showInputDialog("Enter a short value: "));
		System.out.println("short: " + sh);

		int i = Integer.parseInt(JOptionPane.showInputDialog("Enter a int value: "));
		System.out.println("int: " + i);
		
		long l = Long.parseLong(JOptionPane.showInputDialog("Enter a long value: "));
		System.out.println("long: " + l);

		float f = Float.parseFloat(JOptionPane.showInputDialog("Enter a float value: "));
		System.out.println("float: " + f);

		double d = Double.parseDouble(JOptionPane.showInputDialog("Enter a double value: "));
		System.out.println("double: " + d);
	}
}