class DataTypes
{
	public static void main(String []args)
	{
		System.out.println("Data Types in Java");
		System.out.println("\tPrimitive Data Types");
		System.out.println("\t\tNumeric");
		System.out.println("\t\t\tIntegrals");

		System.out.println("\t\t\t\tInteger");

		byte b = 127;
		System.out.println("\t\t\t\t\tbyte: " + b);

		short s = 32767;
		System.out.println("\t\t\t\t\tshort: " + s);

		int i = 2147483647;
		System.out.println("\t\t\t\t\tint: " + i);

		long l = 9223372036854775807L;
		System.out.println("\t\t\t\t\tlong: " + l);

		System.out.println("\t\t\t\tFloating Point");

		float f = 340282346638528859811704183484516925440.0f;
		System.out.println("\t\t\t\t\tfloat: " + f);
		// Max Values are literally displayed
		double d = 179769313486231572484157265902400000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000.0;
		System.out.println("\t\t\t\t\tdouble: " + d);

		System.out.println("\t\t\tCharacter");
		
		char c = 'a';
		System.out.println("\t\t\t\t\tchar: " + c);
		
		System.out.println("\t\tBoolean");
		
		boolean bo = true;
		System.out.println("\t\t\tboolean: " + bo);

		System.out.println("\tNon-Primitive Data Types");
		System.out.println("\t\tString");
		System.out.println("\t\tArray");
		System.out.println("\t\tVector");
	}
}