class Operators
{
	public static void main(String []args)
	{
		// Assignment Operators
		System.out.println("Assignment Operators");
		int x;

		x = 10; // = 
		System.out.println("Assignment of 10: " + x);

		x += 10; // += 
		System.out.println("Value of x += 10: " + x);

		x -= 10; // -=
		System.out.println("Value of x -= 10: " + x);

		x *= 10; // *=
		System.out.println("Value of x *= 10: " + x);

		x /= 10; // /=
		System.out.println("Value of x /= 10: " + x);

		x %= 10; // %=
		System.out.println("Value of x %= 10: " + x);

		x &= 10; // &=
		System.out.println("Value of x &= 10: " + x);

		x |= 10; // |=
		System.out.println("Value of x |= 10: " + x);

		x ^= 10; // ^=
		System.out.println("Value of x ^= 10: " + x);

		x <<= 10; // <<=
		System.out.println("Value of x <<= 10: " + x);

		x >>= 10; // >>=
		System.out.println("Value of x >>= 10: " + x);

		x >>>= 10; // >>>=
		System.out.println("Value of x >>>= 10: " + x);
		
		// Unary Operators
		System.out.println("Unary Operators");
		x = 10;
		System.out.println("x = 10");

		int y;

		y = +x;
		System.out.println("y = +x: " + y);

		y = -x;
		System.out.println("y = -x: " + y);

		y = ++x;
		System.out.println("y = ++x: " + y);

		y = x++;
		System.out.println("y = x++: " + y);

		y = --x;
		System.out.println("y = --x: " + y);

		y = x--;
		System.out.println("y = x--: " + y);

		boolean b = true;
		System.out.println("boolean b = true");
		System.out.println("!b: " + !b);

		y = ~x;
		System.out.println("y = ~x: " + y);

		// Casting
		System.out.println("(float)x: " + (float)x);

		// Arithmetic Operators
		System.out.println("Arithmetic Operators");
		x = 10;
		System.out.println("x = 10");
		System.out.println("x + 10" + (x + 10));
		System.out.println("x - 10" + (x - 10));
		System.out.println("x * 10" + (x * 10));
		System.out.println("x / 10" + (x / 10));
		System.out.println("x % 9" + (x % 9));

		// Relational Operators
		System.out.println("Relational Operators");
		System.out.println("10 == 9: " + (10 == 9));
		System.out.println("10 != 9: " + (10 != 9));
		System.out.println("10 > 9: " + (10 > 9));
		System.out.println("10 < 9: " + (10 < 9));
		System.out.println("10 >= 9: " + (10 >= 9));
		System.out.println("10 <= 9: " + (10 <= 9));

		// Logical Operators
		System.out.println("Logical Operators");

		System.out.println("Logical AND");
		System.out.println("false && false: " + (false && false));
		System.out.println("false && true: " + (false && true));
		System.out.println("true && false: " + (true && false));
		System.out.println("true && true: " + (true && true));

		System.out.println("Logical OR");
		System.out.println("false || false: " + (false || false));
		System.out.println("false || true: " + (false || true));
		System.out.println("true || false: " + (true || false));
		System.out.println("true || true: " + (true || true));

		System.out.println("Logical NOT");
		System.out.println("!true: " + !true);
		System.out.println("!false: " + !false);

		// Conditional Operators
		System.out.println("Conditional Operators");
		System.out.println("condition ? if_true : if_false");
		System.out.println("(9>4 ? 1 : 0): " + (9>4 ? 1 : 0));

		// Bitwise Operators
		System.out.println("Bitwise Operators");
		System.out.println("3&2: " + (3&2));
		System.out.println("3|2: " + (3|2));
		System.out.println("3^2: " + (3^2));
		System.out.println("~3: " + ~3);
		System.out.println("3<<2: " + (3<<2));
		System.out.println("3>>2: " + (3>>2));
		System.out.println("10>>>2: " + (10>>>2));
	}
}