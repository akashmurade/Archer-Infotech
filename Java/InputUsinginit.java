class InputUsinginit
{
	public static void main(String []args)
	{
		String s = "some characters";
		System.out.println("String: " + s);

		boolean b = true;
		System.out.println("boolean: " + b);

		char c = 'a';
		System.out.println("char: " + c);

		byte by = 1;
		System.out.println("byte: " + by);

		short sh = 1;
		System.out.println("short: " + sh);

		int i = 1;
		System.out.println("int: " + i);
		
		long l = 1l; // l in the literal is not necessary since widening conversion
		System.out.println("long: " + l);

		float f = 1.1f; // f in the literal is necessary since narrowing conversion from double to float
		System.out.println("float: " + f);

		double d = 1.1;
		System.out.println("double: " + d);

	}
}