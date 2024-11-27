class DataInputCmdln
{
	public static void main(String []args)
	{
		try
		{
			String s = args[0];
			System.out.println("String: " + s);

			boolean b = Boolean.parseBoolean(args[1]); // except case-insensitive true everything else is false
			System.out.println("boolean: " + b);

			char c = args[2].charAt(0);
			System.out.println("char: " + c);

			byte by = Byte.parseByte(args[3]);
			System.out.println("byte: " + by);

			short sh = Short.parseShort(args[4]);
			System.out.println("short: " + sh);

			int i = Integer.parseInt(args[5]);
			System.out.println("int: " + i);
		
			long l = Long.parseLong(args[6]); // l in the literal is not necessary since widening conversion
			System.out.println("long: " + l);

			float f = Float.parseFloat(args[7]); // f in the literal is necessary since narrowing conversion from double to float
			System.out.println("float: " + f);

			double d = Double.parseDouble(args[8]);
			System.out.println("double: " + d);
		}
		catch(Exception e)
		{
			System.out.println("Order of input through command line should be \nString - boolean - char - byte - short - int - long - float - double");
		}
	}
}