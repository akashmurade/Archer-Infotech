/*
// Escape Sequence Characters
#include <iostream>
int main()
{
    std::cout << "Escape Sequence Characters";
    std::cout << "1. Newline: Line 1\n Line 2\n Line 3\n";
    std::cout << "2. Horizontal Tab: Column 1\t Column 2\t Column 3\n";
    std::cout << "3. Backspace: 123\b45\n";
    std::cout << "4. Carriage Return: 1234\rAB\n";
    std::cout << "5. Backslash: C:\\path\\to\\file\n";
    std::cout << "6. Single Quote: It\'s Raining.\n";
    std::cout << "7. Double Quote: She said, \"Hello\".\n";
    std::cout << "8. Null Character: Hello\0World\n";
    std::cout << "9. Alert (bell): Beep!\a\n";
    std::cout << "10. Form Feed: Page1\fPage2\n";
    std::cout << "11. Vertical Tab: Line 1\v Line 2\n";
    std::cout << "12. Question Mark: What\?\n";
    std::cout << "13. Octal Representation: \101\113\101\123\110\n";
    std::cout << "14. Hexadecimal Representation: \x41\x4B\x41\x53\x48\n";
    return 0;
}

// Manipulators
// Manipulators in C++: In C++, manipulators are special functions or objects provided by the Standard Library that 
// are used to modify the behaviour of input and output streams. They are typically used in conjunction with the 
// insertion (<<) and extraction (>>) operators to format input and output data. 
// Manipulators can perform various tasks such as setting field width, formatting numbers, controlling precision, and more. 

// 	std::setw(<size>) : set the width of next output fields.
// 	std::setprecision(int n): decides the number if digits after decimal point while displaying the fractional number
// 	std::fixed: 
// 	std::scientific:
// 	std::left: 
// 	std::right:
// 	std::boolalpha: 
// 	std::hex:
// 	std::oct:
// 	std::dec: 
#include <iostream>
#include <iomanip> // for manipulators
using namespace std;
int main() 
{
    // setw(int n)
    cout << setw(20) << "Name" << setw(10)  << "Age" << setw(10) << "Salary" << endl;
    cout << setw(20) << "John Doe" << setw(10) << 30 << setw(10) << 50000.0 << endl;

    // setprecision(int n) and fixed
    double pi = 22.0/7;
    cout << setprecision(3) << fixed << "PI: " << pi << endl;

    // scientific
    double num = 123456.789;
    cout << scientific << "Number: " << num << endl;

    // left and right
    cout << setw(10) << "left" << setw(10) << "right" << endl;

    // boolalpha
    bool flag = true;
    cout << boolalpha << "Flag: " << flag << endl;

    // hex, oct and dec
    int value = 255;
    cout << "Hexadecimal: " << hex << value << endl;
    cout << "Octal: " << oct << value << endl;
    cout << "Decimal: " << dec << value << endl;
    return 0;
}


// 	Constants and Literals: 
		
// 		- literals: These are the fixed values, which are assigned to variable.
		
// 			45 - integer literal		'a' - character literal

// 		- constant: These are the named values defined using identifier, which remains unchanged throughout
// 			     the program execution. It not possible to change its value. if sameone attempt to change
// 			      it, compiler will generate an error message.

// 			There are following ways of defining the constants:

// 			- Using const Keyword: (C++98)
// 			- Using constexpr Keyword: (C++11)
#include <iostream>
int main()
{
    // - Using const Keyword: (C++98): 
    // 	int x=100;		const int y=200;
    int i;
    std::cout << "Enter i: ";
    std::cin >> i;
    const int MAX_VALUE = i * 5; // value could be assigned at runtime
    // MAX_VALUE = 10; // error: assignment of read-only variable 'MAX_VALUE'
    std::cout << MAX_VALUE << std::endl;

    // - Using const expr Keyword: (C++11):
    // std::cout << "Enter int: ";
    // std::cin >> i;

    constexpr int MIN_VALUE = 100; // value should be known at compile time // i.e. must be initialized with a constant expression
    // constexpr int MIN_VALUE = 100 * i; // doesn't work this way
    // MAX_VALUE = 10; // error: assignment of read-only variable 'MAX_VALUE'
    std::cout << MIN_VALUE << std::endl;
    return 0;
}

// 			- Using enum: (C++98)

- Using enum: (C++98)

	enum [<name>]{const1, const2,...,constN};

	e.g.	enum color {red, green, blue, black};		or 	enum {red, green, blue, black}; 



	enum color {RED, GREEN, BLUE, BLACK};	or 	enum {RED, GREEN, BLUE, BLACK};
 
	RED	Equivalent to 0
	GREEN   Equivalent to 1 
	BLUE    Equivalent to 2
	BLACK   Equivalent to 3

 
Unscoped Enum:
// Declaration
enum Color { RED, GREEN, BLUE};
// Usage
Color c = RED;

Scoped Enum:
// Declaration
enum class Fruit {
    APPLE,
    BANANA,
    ORANGE
};
// Usage
Fruit f = Fruit::APPLE;
*/
#include <iostream>
int main()
{
    // // Unscoped enum
    // enum Color {RED, GREEN, BLUE};
    // // enum Ink {BLACK, PINK, YELLOW, RED}; // error: redeclaration of 'RED' // since it is unscoped
    // enum Ink {BLACK, PINK, YELLOW};

    // std::cout << "\nValue of RED from Color enum: " << RED << std::endl;
    // std::cout << "\nValue of BLACK from Ink enum: " << BLACK << std::endl;
    // std::cout << "\nIs BLACK from Ink enum and RED from Color enum same: " << std::boolalpha << (BLACK == RED) << std::endl; // warning but same

    // Scoped enum
    enum class Color {RED, GREEN, BLUE};
    enum class Ink {BLACK, PINK, YELLOW, RED}; // since scoped no error
    Color c = Color::RED;
    Ink i = Ink::BLACK;

    // enum classes (also called scoped enumerations), that makes enumerations both strongly typed and strongly scoped. 
    // Class enum doesn’t allow implicit conversion to int, and also doesn’t compare enumerators from different enumerations.
    std::cout << "\nValue of RED from Color enum: " << (c == Color::RED) << std::endl;
    return 0;
}


// 			- Using #define Preprocessor Directive: (C++98)
// 			- Using using Alias: (C++14)