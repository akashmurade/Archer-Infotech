class Conditionals
{
	public static void main(String []args)
	{
		System.out.println("Decision");
		System.out.println("if else");
		boolean b = true;
		System.out.println("boolean b = true");
				
		if(b)
		{
			System.out.println("since b is true");
		}
		else 
		{
			System.out.println("since b is false");
		}

		System.out.println("else if");
		int i = 10;
		System.out.println("i = 10");		

		if(i == 10) {
			System.out.println("i is equal to 10");
		}
		else if(i > 2) {
			System.out.println("i is greater than 2");
		}
		else {
			System.out.println("something else");
		}

		System.out.println("Loops");
		System.out.println("for");
		for(i = 0; i < 10; i++) // i is already defined if we make i there
		{
			System.out.println(i);
		}

		i = 0;
		System.out.println("while");
		while(i < 10)
		{
			System.out.println(i);
			i++;
		}
		i = 5;
		System.out.println("i = 5");
		System.out.println("do while i is less than 1");
		do
		{
			System.out.println(i); // will execute atleast once whatever i may be
		} while(i < 1);
		
		System.out.println("switch");
		i = 0;
		switch(i)
		{
			case 0:
				System.out.println("i is 0");
				break;
			case 1:
				System.out.println("i is 1");
				break;
			default:
				System.out.println("i is something else");
		}
		
		System.out.println("break");
		for(i = 0; i < 10; i++)
		{
			if(i == 2)
			{
				System.out.println("broke at 2");
				break;
			}
			System.out.println(i);
		}

		System.out.println("continue");
		for(i = 0; i < 10; i++)
		{
			if(i == 2)
			{
				System.out.println("continued at 2");
				continue;
			}
			System.out.println(i);
		}

		System.out.println("labelled break");
		outer:for(i = 0; i < 10; i++)
		{
			for(int j = 0; j < 10; j++)
			{
				if(j == 2)
				{
					System.out.println("if j == 2 broke from outer loop");
					break outer;
				}
				System.out.println("i: " + i + "\tj: " + j);
			}
		}

		System.out.println("labelled continue");
		outer:for(i = 0; i < 10; i++)
		{
			for(int j = 0; j < 10; j++)
			{
				if(j == 2)
				{
					System.out.println("if j == 2 continued next iteration of outer loop");
					continue outer;
				}
				System.out.println("i: " + i + "\tj: " + j);
			}
		}
	}
}