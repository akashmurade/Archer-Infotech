#include<stdio.h>
/**
// Welcome Program
int main()
{
    printf("Welcome to C Programming");
    return 0;
}

// WAP to display personal details
int main()
{
    printf("\n**** Personal Information ****");
    printf("\nName: Akash Murade");
    printf("\nAge: 20 \t Gender: \'M\'");
    printf("\nAddress: \"Pune\"");
    printf("\nMarks: \nSSC: 82%% \t HSC: 88.5%%");
    printf("\nSonya is my brother\rM");
    printf("\nWhat about you?");
}

// WAP to init and display the values
int main()
{
    int x = 2;
    char ch = 'a';
    float ft = 2.4;
    double db = 44.33;

    printf("\nValue of x is: %d", x);
    printf("\nch = %c \t ft = %.3f \n db = %lf", ch, ft, db);

    return 0;
}

// WAP to input and display the values
int main()
{
    int x;
    char ch;
    float ft;
    double db;

    printf("\nEnter one character, integer and two fractional values: ");
    scanf("%c %d %f %lf", &ch, &x, &ft, &db);

    printf("\nValue of x is: %d", x);
    printf("\nch=%c \t ft = %.3f\nVal of db is %lf", ch, ft, db);

    return 0;
}

// Using fflush(stdin) to clear keyboard buffer

#include<stdio.h>

int main()
{
    int x;
    char ch;
    float ft;
    double db;

    printf("\nEnter one integer and two fractional values: ");
    scanf("%d %f %lf", &x, &ft, &db);

    printf("Enter the character: ");
    fflush(stdin);
    scanf("%c", &ch);

    printf("\nValue of x is: %d", x);
    printf("\nch = %c \ ft = %.2f \n Value of db is %lf", ch, ft, db);

    return 0;
}

// Write a program to interchange the values of 2 variables
int main()
{
    int x, y, tmp;

    printf("\nEnter 2 nos: ");
    scanf("%d %d", &x, &y);

    printf("\nBefore Interchange Values of x: %d and y: %d", x, y);

    // interchange
    tmp = x;
    x = y;
    y = tmp;

    printf("\nAfter Interchange Values of x: %d and y: %d", x, y);
    return 0;
}
// Write a program to interchange the values of 3 Characters.
int main()
{
    char a, b, c;
    printf("Enter 3 characters: ");
    scanf("%c %c %c", &a, &b, &c);

    char temp = a;
    a = b;
    b = c;
    c = temp;

    printf("\na: %c, b: %c, c: %c", a, b, c);
    return 0;
}

// Write a program to interchange the values of 2 variables (without using tmp)
int main()
{
    int a, b;
    printf("Enter 2 integers: ");
    scanf("%d %d", &a, &b);

    // logic for swapping without the need of a extra variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("\na: %d \t b: %d", a, b);

    return 0;
}
// Using unary operators
int main()
{
    int a = 10, b = 20;

    printf("\n%d", (++a));
    printf("\n%d", (a++));
    printf("\n%d", a);

    printf("\n%d", (--b));
    printf("\n%d", (b--));
    printf("\n%d", -b); // is an expression (-b)
    printf("\n%d", b);

    return 0;
}

// Casting example
int main()
{
    int a = 10, b = 15;
    float ans;


    ans = a / b; // int / int  = int
    ans = (float)a / b; // float / int = float // thereby giving the correct answer

    printf("%d / %d = %.2f", a, b, ans);

    return 0;
}

// sizeof operator
int main()
{
    printf("%d", sizeof(int));
    printf("%d", sizeof(float));
    printf("%d", sizeof(char));
    printf("%d", sizeof(double));
    printf("%d", sizeof(long)); // long is type modifier

    return 0;
}
// Enter any two numbers, multi. by 10 to the half of 2nd number, sub ans from x^3

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    float ans = a * a * a - b * 5.0;

    printf("\nAnswer: %.2f", ans);

    return 0;
}

// WAP to calc the simple interest
// formula: si = ( p * r * t ) / 100 ;
int main()
{
    int p, t;
    float r;

    printf("Enter Principal Amount, Rate (per annum), Time (in years): ");
    scanf("%d %f %d", &p, &r, &t);

    float si = p * r * t / 100;

    printf("\nSimple Interest: %f", si);
    return 0;
}

// WAP to convert the temp from Deg to F.
// formula: (0°C × 9/5) + 32 = 32°F
// (°F − 32) / 1.8 = °C
int main()
{
    float fah, deg;

    printf("Enter temperature in Degrees: ");
    scanf("%f", &deg);

    fah = deg * 9.0 / 5 + 32;

    printf("\nFahrenheit: %.2f", fah);
    return 0;
}

// Enter any 3 digit number and display the addition of all 3 digits.
int main()
{
    int n, sum = 0;
    printf("Enter 3 digit number: ");
    scanf("%d", &n);

    sum = sum + n % 10;
    n = n / 10;
    sum = sum + n % 10;
    n = n / 10;
    sum = sum + n % 10;

    printf("\nSum: %d", sum);

    return 0;
}

// Enter any 3 digit number and reverse it.
int main()
{
    int n, rev;
    printf("Enter 3 digit number: ");
    scanf("%d", &n);

    rev = n % 10;
    n = n / 10;
    rev = rev * 10 + n % 10;
    n = n / 10;
    rev = rev * 10 + n % 10;

    printf("\nReverse: %d", rev);
    return 0;
}

// Relational and Equality Operators
int main()
{
    int x = 10, y = 20;

    printf("\n%d", x > y);
    printf("\n%d", x < y);
    printf("\n%d", x >= y);
    printf("\n%d", x <= y);
    printf("\n%d", x == y);
    printf("\n%d", x != y);
    return 0;
}

// Logical Operators
int main()
{
    printf("\n%d", 0 && 0);
    printf("\n%d", '0' || 0);
    printf("\n%d", !0);
    return 0;
}

// WAP to find max bet 2 nos using conditional operator
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int max = a > b ? a : b;

    printf("Max: %d", max);

    return 0;
}

// WAP to find max from any 3 nos
int main()
{
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int max = a > b ? a > c ? a : c : b > c ? b : c;

    printf("\nMax: %d", max);

    return 0;
}

// program to find the total bill and discount
// 7% if tot > 500 else 3%
int main()
{
    int p1, p2, p3, tot;
    float dis;
    printf("Enter price of 3 products: ");
    scanf("%d %d %d", &p1, &p2, &p3);

    tot = p1 + p2 + p3;
    dis = tot > 500 ? tot * .07 : tot * .03;

    printf("\nTotal: %d \nDiscount: %.2f \nPayable: %.2f", tot, dis, tot - dis);

    return 0;
}

// Bitwise Operators
int main()
{
    int x = 10, y = 20; // 01010 10100

    printf("\n%d", x & y); // 00000
    printf("\n%d", x | y); // 11110
    printf("\n%d", x ^ y); // 11110

    printf("\n%d", x << 1); // 10100
    printf("\n%d", x >> 1); // 00101
    return 0;
}

// Enter the number and display the entered number is even or odd
int main()
{
    int n;
    printf("Number: ");
    scanf("%d", &n);

    if(n % 2 == 0) {
        printf("\nEven");
    }
    else {
        printf("\nOdd");
    }
    return 0;
}

// WAP to enter price of 3 items and calc the discount. (discount is 7% when amount exceeds 500)
int main()
{
    int p1, p2, p3, total;
    printf("Enter price of 3 numbers: ");
    scanf("%d %d %d", &p1, &p2, &p3);

    total = p1 + p2 + p3;
    float dis = 0;
    if(total > 500)
    {
        dis = (p1 + p2 + p3) * .07;
    }
    printf("\nTotal: %d \nDiscount: %.2f \nPayable: %.2f", total, dis, total - dis);
    return 0;
}

// Enter the number and display the entered number is even or odd (using if else)
int main()
{
    int n;
    printf("Number: ");
    scanf("%d", &n);

    if(n % 2)
    {
        printf("Odd");
    }
    else
    {
        printf("Even");
    }
    return 0;
}
// WAP to enter price of 3 items and calc the discount. (discount is 7% when amount exceeds 500 otherwise 3%)
int main()
{
    int p1, p2, p3, total;
    printf("Enter price of 3 numbers: ");
    scanf("%d %d %d", &p1, &p2, &p3);

    total = p1 + p2 + p3;
    float dis;
    if(total > 500)
    {
        dis = total * .07;
    }
    else
    {
        dis = total * .03;
    }
    printf("\nTotal: %d \nDiscount: %.2f \nPayable: %.2f", total, dis, total - dis);
    return 0;
}

// WAP to enter the number thw keyboard and multi. it by 5 when
// it is less than 10 otherwise subtract 100 from it.
int main()
{
    int n, ans;
    printf("Number: ");
    scanf("%d", &n);

    if(n < 10)
    {
        ans = n * 5;
    }
    else
    {
        ans = n - 100;
    }

    printf("\nAnswer: %d", ans);
    return 0;
}

// Enter the PCM marks of student and calculate the PCM total and percentage
// when he is pass otherwise just display student is fail.

int main()
{
    int p, c, m;

    printf("Enter marks of Physics, Chemistry and Mathematics: ");
    scanf("%d %d %d", &p, &c, &m);

    if(p >= 35 && c >=35 && m >= 35)
    {
        int tot = p + c + m;
        float per = tot / 3.0;
        printf("Percentage: %.2f", per);
    }
    else
    {
        printf("Failed");
    }
    return 0;
}

// Enter 3 nos and display the max from it.
int main()
{
    int a, b, c, max;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b) {
        if(a > c) {
            printf("%d is max", a);
        }
        else {
            printf("%d is max", c);
        }
    }
    else {
        if(b > c) {
            printf("%d is max", b);
        }
        else {
            printf("%d is max", c);
        }
    }
    return 0;
}

// Enter any no and find No is div by 3 or No is div by 5 or No is div by both or not by both
int main()
{
    int n;
    printf("Number: ");
    scanf("%d", &n);

    if(n % 3 == 0) {
        if(n % 5 == 0) {
            printf("%d div by 3 & 5", n);
        }
        else {
            printf("%d div by 3", n);
        }
    }
    else {
        if(n % 5 == 0) {
            printf("%d div by 5", n);
        }
        else {
            printf("%d not div by both 3 & 5", n);
        }
    }
    return 0;
}
// Enter any character and find it is ucase, lcase, digit or special symbol
int main()
{
    char ch;
    printf("Char: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z') {
        printf("Uppercase Alphabet");
    }
    else {
        if(ch >= 'a' && ch <= 'z') {
            printf("Lowercase Alphabet");
        }
        else {
            if(ch >= '0' && ch <= '9') {
                printf("Digit");
            }
        }
    }
    return 0;
}

// Enter the no thw keyboard and display menu to perform following operations
//	option 1 - to check the number is positive or negative.
//	option 2 - to check number is divisible by 5 or not.

int main()
{
    int opn, n;
    printf("Number: ");
    scanf("%d", &n);

    printf("\nOptions \n 1. To check the number is positive or negative. \n 2. To check if number is divisible by 5 or not. \n Select: ");
    scanf("%d", &opn);
    if(opn == 1) {
        if(n > 0) {
            printf("%d is positive.", n);
        }
        else if(n < 0) {
            printf("%d is negative.", n);
        }
        else {
            printf("0 is neutral.");
        }
    }
    else if(opn == 2) {
        if(n % 5 == 0) {
            printf("%d is divisible by 5.", n);
        }
        else {
            printf("%d is not divisible by 5.", n);
        }
    }
    return 0;
}

// There are another 3 different ways can be used to take the character as a input
// - using getch(), getche() and getchar()int main()
{
    char ch;

    printf("\nch: ");
    ch = getch();
    printf("\nch is: %c", ch);

    printf("\nche: ");
    ch = getche();
    printf("\nche is: %c", ch);

    printf("\nchar: ");
    ch = getchar();
    printf("\nchar is: %c", ch);

    return 0;
}
*/


// Enter the co-ordinates of point in 2D system, and display the exact location of that point.
/**
			       y axis
                                ^
                       II QD    |   I QD
                                |
                        -+      |   ++
                                |
                  <-------------|------------> x axis
                                |(0,0)
                                |
                        --      |   +-
                                |
                    III QD      V     IV QD



                There are 7 different possibilities.
int main()
{
    int x, y;
    printf("Enter x and y coordinates: ");
    scanf("%d %d", &x, &y);

    if(x == 0 && y == 0) {
        printf("\nOrigin");
    }
    else if(x == 0) {
        printf("\non Y axis");
    }
    else if(y == 0) {
        printf("\non X axis");
    }
    else if(x > 0 && y > 0) {
        printf("\nIst Quadrant");
    }
    else if(x < 0 && y > 0) {
        printf("\nIInd Quadrant");
    }
    else if(x < 0) {
        printf("\nIIIrd Quadrant");
    }
    else {
        printf("\nIVth Quadrant");
    }
    return 0;
}

// Enter any character and display it is ucase, lcase, digit or special symbol (use ladder)
int main()
{
    char ch;
    printf("Character: ");
    scanf("%c", &ch);

    if(ch >= '0' && ch <= '9') {
        printf("\nDigit");
    }
    else if(ch >= 'A' && ch <= 'Z') {
        printf("\nUppercase Alphabet");
    }
    else if(ch >= 'a' && ch <= 'z') {
        printf("\nLowercase Alphabet");
    }

    return 0;
}
*/
// WAP to the position of employee in the company using the salary.
/**
upto 1K --> Worker
1K - 3K --> Jr
3K - 5K --> Sr
5K - 7K --> Dr
7K Onward --> CEO
*/
/**
int main()
{
    int sal;
    printf("\nSalary: ");
    scanf("%d", &sal);

    if(sal <= 1000) {
        printf("\nWorker");
    }
    else if(sal <= 3000) {
        printf("\nJr");
    }
    else if(sal <= 5000) {
        printf("\nSr");
    }
    else if(sal <= 7000) {
        printf("\nDr");
    }
    else {
        printf("\nCEO");
    }
    return 0;
}

// WAP to display the "Hello"
int main()
{
    printf("\nHello");
    return 0;
}

// WAP to display the "Hello" 5 times
int main()
{
    int n = 5;
    for(int i = 0; i < n; i++) {
        printf("\nHello");
    }
    return 0;
}

// WAP to display 1-10 nos
int main()
{
    int n = 10;
    for(int i = 1; i <= n; i++) {
        printf("\n%d", i);
    }
    return 0;
}

// WAP to display all even nos from 1-25 nos
int main()
{
    int n = 25;
    for(int i = 1; i < n; i++) {
        if(i%2 == 0) {
            printf("\n%d", i);
        }
    }
    return 0;
}

// OR

int main()
{
    int n = 25;
    for(int i = 2; i <= 25; i += 2) {
        printf("\n%d", i);
    }
    return 0;
}

// WAP to display all Multiples of 3 and 5 nos from 1-100 no
int main()
{
    int n = 100;
    for(int i = 1; i <= n; i++) {
        if(i % 3 == 0 && i % 5 == 0) {
            printf("\n%d", i);
        }
    }
    return 0;
}

// WAP to add 1-10 nos
// (1+2+3+4+..+10)
int main()
{
    int n = 10, sum = 0;
    for(int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    printf("\nSum: %d", sum);
    return 0;
}

//  Enter any 5 nos thw keyboard and display the addition. (use loop)
int main()
{
    int n, sum = 0;
    printf("Enter 5 numbers: ");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &n);
        sum = sum + n;
    }
    printf("\nSum: %d", sum);
    return 0;
}

// Enter the no and just add all digits in it.
int main()
{
    int n, sum = 0;
    printf("\nNumber: ");
    scanf("%d", &n);

    for(int no = n; no > 0; no /= 10) {
        sum = sum + no % 10;
    }
    printf("Sum: %d", sum);
    return 0;
}

// WAP to Reverse the no entered thw keyboard.
int main()
{
    int n,rev = 0;
    printf("\nNumber: ");
    scanf("%d", &n);

    for(int no = n; no > 0; no /= 10) {
        rev = rev * 10 + no % 10;
    }

    printf("\nReverse: %d", rev);
    return 0;
}
// Enter any no and count digits from it
int main()
{
    int n, cnt = 0;
    printf("\nNumber: ");
    scanf("%d", &n);

    for(int no = n; no > 0; no /= 10) {
        cnt++;
    }

    printf("Count: %d", cnt);
    return 0;
}

// Enter any number and count the even digits in that number
int main()
{
    int n, ecnt = 0;
    printf("\nNumber: ");
    scanf("%d", &n);

    for(int no = n; no > 0; no /= 10) {
        if(no % 10 % 2 == 0) {
            ecnt++;
        }
    }

    printf("Even Count: %d", ecnt);
    return 0;
}
// WAP To find max digit in a number
int main()
{
    int n, max = 0;
    printf("\nNumber: ");
    scanf("%d", &n);

    for(int no = n; no > 0; no /= 10) {
        if(no % 10 > max) {
            max = no % 10;
        }
    }

    printf("Max Digit: %d", max);
    return 0;
}

// Enter any no and add the even and odd digits from it separately
int main()
{
    int n, esum = 0, osum = 0;
    printf("\nNumber: ");
    scanf("%d", &n);

    for(int no = n; no > 0; no /= 10) {
        if(no % 10 % 2 == 0) {
            esum = esum + no % 10;
        }
        else {
            osum = osum + no % 10;
        }
    }

    printf("Even: %d \nOdd: %d", esum, osum);
    return 0;
}
// Enter the number and add the alternate digit from it.
int main()
{
    int n, firstAlt = 0, secondAlt = 0;
    printf("Number: ");
    scanf("%d", &n);

    for(int i = 0, no = n; no > 0; no /= 10, i++) {
        if(i % 2) {
            secondAlt = secondAlt + no % 10;
        }
        else {
            firstAlt = firstAlt + no % 10;
        }
    }

    printf("\nFirst Alternate Sum: %d \nSecond Alternate Sum: %d", firstAlt, secondAlt);
    return 0;
}

// while loop
// WAP to display the 1=10 nos
int main()
{
    int i = 1;
    while(i <= 10) {
        printf("%6d", i);
        i++;
    }
    return 0;
}

// WAP to display the mult. table of a no entered thw keyboard.
int main()
{
    int i = 1, n;
    printf("Number: ");
    scanf("%d", &n);

    while(i <= 10) {
        printf("\n%d X %2d = %4d", n, i, n*i);
        i++;
    }

    return 0;
}

// Enter the number and find its factorial
int main()
{
    int n, fact = 1, i = 1;
    printf("Number: ");
    scanf("%d", &n);
    int copy = n;
    while(i <= copy) {
        fact = fact * i;\
        i++;
    }

    printf("\nFactorial of %d is %d.", n , fact);
    return 0;
}

// WAP to display the N^2 and N^3 where N is in range 1-10
int main()
{
    int i = 1;
    while(i <= 10) {
        printf("%d \t %d \t %d \n", i, i*i, i*i*i);
        i++;
    }
    return 0;
}
// WAP to count the digits in a number, and add every, digit ^ Count
*/
int main()
{
    int n, cnt = 0, sum = 0;
    printf("Number: ");
    scanf("%d", &n);

    int tmp = n;
    while(tmp > 0) {
        tmp = tmp / 10;
        cnt++;
    }

    tmp = n;
    while(tmp > 0) {
        int i = 0, expEval = 1;
        while(i < cnt) {
            expEval = expEval * (tmp % 10);
            i++;
        }
        sum = sum + expEval;
        tmp = tmp / 10;
    }

    printf("\nSum of all digits raised to the power of digit count is: %d", sum);
    return 0;
}

// WAP to find the missing digits from the number   3951  --> list of missing digits: 0 2 4 6 7 8























