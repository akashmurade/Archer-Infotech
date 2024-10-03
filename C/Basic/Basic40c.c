#include <stdio.h>
/**
// Write a C program to convert days into years, weeks and days.
int main()
{
    int d, y, w;

    printf("Enter Days: ");
    scanf("%d", &d);

    y = d / 365;
    d = d % 365;

    w = d / 7;
    d = d % 7;

    printf("Years: %d \tWeeks: %d \tDays: %d", y, w, d);
    return 0;
}

// Write a C program to find power of any number x ^ y
int main()
{
    int x, y, ans  = 1;

    printf("Base: ");
    scanf("%d", &x);

    printf("Exponent: ");
    scanf("%d", &y);

    for(int yc = y;yc > 0; yc--) {
        ans = ans * x;
    }

    printf("%d^%d = %d", x, y, ans);
    return 0;
}

// Write a C program to enter any number and calculate its square root.
int main()
{
    int n, sr = 0;
    printf("Number: ");
    scanf("%d", &n);

    while(sr * sr <= n) {
        sr++;
    }
    sr--;

    printf("Square Root: %d", sr);
    return 0;
}

// Write a C program to enter two angles of a triangle and find the third angle
int main()
{
    int a1, a2, a3;

    printf("Angle 1: ");
    scanf("%d", &a1);

    printf("Angle 2: ");
    scanf("%d", &a2);

    a3 = 180 - a1 - a2;

    printf("Angle 3: %d", a3);
    return 0;
}

// Write a C program to enter base and height of a triangle and find its area.
int main()
{
    int b, h;
    float area;

    printf("Base: ");
    scanf("%d", &b);

    printf("Height: ");
    scanf("%d", &h);

    area = .5 * b * h;

    printf("Area: %f", area);
    return 0;
}

// Write a C program to calculate area of an equilateral triangle.
int main()
{
    int side;
    float area;

    printf("Length of side an equilateral trianle: ");
    scanf("%d", &side);

    area = 0.433012702 * side * side; // sqrt(3) / 4 * side^2

    printf("Area: %.2f", area);
    return 0;
}

// Write a C program to enter marks of five subjects and calculate total, average and percentage.
int main()
{
    int n, tot = 0, i = 1;
    float avg, per;

    while(i <= 5) {
        printf("\nMarks of subject %d: ", i);
        scanf("%d", &n);
        tot = tot + n;
        i++;
    }

    printf("\nMarks out of: ");
    scanf("%d", &n);

    avg = tot / 5.0;
    per = avg * 100 / n;

    printf("\nAverage: %.2f \nPercentage: %.2f", avg, per);

    return 0;
}

// Write a C program to enter P, R, T and calculate Simple Interest.
int main()
{
    float p, r, t, si;

    printf("Enter Principal Amount, Rate (in percentage), Time (in years): ");
    scanf("%f %f %f", &p, &r, &t);

    si = p * r * t / 100;

    printf("\nSimple Interest: %f", si);
    return 0;
}

// Write a C program to enter P, T, R and calculate Compound Interest.
int main()
{
    int n;
    float p, r, a = 1, ci;

    printf("Enter Principal Amount, Rate per year (in percentage) Time (in years): ");
    scanf("%f %f %d", &p, &r, &n);

    for(int i = 0; i < n; i++) {
        a = a * (1 + r / 100);
    }

    a = a * p;
    ci = a - p;

    printf("\nCompound Interest: %.2f", ci);
    return 0;
}

// Write a C program to find maximum between two numbers using conditional operator.
int main()
{
    int a, b, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    max = a > b ? a : b;
    printf("Max: %d", max);
    return 0;
}

// Write a C program to find maximum between three numbers using conditional operator.
int main()
{
    int a, b, c, max;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    max = a > b ? a > c ? a : c : b > c ? b : c;

    printf("Max: %d", max);
    return 0;
}


// Write a C program to check whether a number is even or odd using conditional operator.
int main()
{
    int n;
    printf("Number: ");
    scanf("%d", &n);

    printf(n % 2 ? "Odd" : "Even");
    return 0;
}

// Write a C program to check whether year is leap year or not using conditional operator.
int main()
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    int isLeap = year % 400 == 0 ? 1 : year % 100 == 0 ? 0 : year % 4 == 0 ? 1 : 0;

    printf(isLeap ? "Is Leap Year" : "Not a Leap Year");
    return 0;
}

// Write a C program to check whether character is an alphabet or not using a conditional operator.
int main()
{
    char ch;
    printf("Character: ");
    scanf("%c", &ch);

    printf(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z' ? "Alphabet" : "Not Alphabet");
    return 0;
}

// Write a C program to find the maximum between two numbers.
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if(a > b) {
        printf("Max: %d", a);
    }
    else {
        printf("Max: %d", b);
    }
    return 0;
}

// Write a C program to find maximum between three numbers.
int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b) {
        if(a > c) {
            printf("Max: %d", a);
        }
        else {
            printf("Max: %d", c);
        }
    }
    else {
        if(b > c) {
            printf("Max: %d", b);
        }
        else {
            printf("Max: %d", c);
        }
    }
    return 0;
}

// Write a C program to check whether a number is negative, positive or zero.

int main() {
    int n;
    printf("Number: ");
    scanf("%d", &n);

    if(n > 0) {
        printf("Positive");
    }
    else if(n < 0) {
        printf("Negative");
    }
    else {
        printf("Neutral");
    }
    return 0;
}

// Write a C program to check whether a number is divisible by 5 and 11 or not.
int main()
{
    int n;
    printf("Number: ");
    scanf("%d", &n);

    if(n % 5 == 0 && n % 11 == 0) {
        printf("%d is divisible by 5 & 11.", n);
    }
    else {
        printf("%d is not divisible by 5 & 11.", n);
    }
    return 0;
}

// Write a C program to check whether a number is even or odd.
int main()
{
    int n;
    printf("Number: ");
    scanf("%d", &n);

    if(n % 2) {
        printf("Odd");
    }
    else {
        printf("Even");
    }
    return 0;
}

// Write a C program to check whether a year is a leap year or not.
int main()
{
    int year;
    printf("Year: ");
    scanf("%d", &year);

    if(year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) {
        printf("%d is leap year.", year);
    }
    else {
        printf("%d is not leap year.", year);
    }
    return 0;
}

// Write a C program to check whether a character is an alphabet or not.
int main()
{
    char ch;
    printf("Character: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {
        printf("Alphabet");
    }
    else {
        printf("Not Alphabet");
    }
    return 0;
}

// Write a C program to input any alphabet and check whether it is a vowel or consonant.
int main()
{
    char ch;
    printf("Character: ");
    scanf("%c", &ch);
    char cpy = ch;

    if(ch >= 97) {
        ch = ch - 32;
    }

    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel", cpy);
    }
    else {
        printf("%c is a consonant", cpy);
    }
    return 0;
}

// Write a C program to input any character and check whether it is alphabet, digit or special character.
int main()
{
    char ch;
    printf("Character: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {
        printf("Alphabet");
    }
    else if(ch >= '0' && ch <= '9') {
        printf("Digit");
    }
    else {
        printf("Special Character");
    }
    return 0;
}

// Write a C program to check whether a character is uppercase or lowercase alphabet.
int main()
{
    char ch;
    printf("Character: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z') {
        printf("Uppercase Alphabet");
    }
    else if(ch >= 'a' && ch <= 'z') {
        printf("Lowercase Alphabet");
    }
    return 0;
}

// Write a C program to input week number and print week day.
int main() {
    int weekNum;
    printf("Enter week number: ");
    scanf("%d", &weekNum);

    switch(weekNum) {
        case 0:
            printf("Sunday");
            break;
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        default:
            printf("Invalid Input");
    }
    return 0;
}

// Write a C program to input month number and print number of days in that month.
int main()
{
    int mn;
    printf("Month Num: ");
    scanf("%d", &mn);

    if(mn < 1 || mn > 12) {
        printf("Invalid Input.");
    }
    else if(mn == 2) {
        printf("No of days is 28 or 29.");
    }
    else if((mn < 8 && mn % 2) || (mn >= 8 && mn % 2 == 0)) {
        printf("No of days is 31.");
    }
    else {
        printf("No of days is 30.");
    }

    return 0;
}

// Write a C program to count total number of notes in given amount.
int main()
{
    int amt, damt;
    printf("Amount: ");
    scanf("%d", &amt);

    damt = amt;
    if(damt >= 500) {
        printf("\n500: %d", damt / 500);
        damt = damt % 500;
    }
    if(damt >= 200) {
        printf("\n200: %d", damt / 200);
        damt = damt % 200;
    }
    if(damt >= 100) {
        printf("\n100: %d", damt / 100);
        damt = damt % 100;
    }
    if(damt >= 50) {
        printf("\n50: %d", damt / 50);
        damt = damt % 50;
    }
    if(damt >= 20) {
        printf("\n20: %d", damt / 20);
        damt = damt % 20;
    }
    if(damt >= 10) {
        printf("\n10: %d", damt / 10);
        damt = damt % 10;
    }
    if(damt >= 5) {
        printf("\n5: %d", damt / 5);
        damt = damt % 5;
    }
    if(damt >= 2) {
        printf("\n2: %d", damt / 2);
        damt = damt % 2;
    }
    if(damt == 1) {
        printf("\n1: %d", damt);
        damt = 0;
    }

    return 0;
}

// Write a C program to input angles of a triangle and check whether triangle is valid or not.
int main()
{
    int a1, a2, a3;
    printf("Enter 3 angles: ");
    scanf("%d %d %d", &a1, &a2, &a3);

    if((a1 + a2 + a3 == 180) && !(a1 == 0 || a2 == 0 || a3 == 0)) {
        printf("Triangle is valid.");
    }
    else {
        printf("Triangle is invalid.");
    }
    return 0;
}

// Write a C program to input all sides of a triangle and check whether triangle is valid or not.
int main()
{
    int s1, s2, s3;
    printf("Enter lengths of 3 sides: ");
    scanf("%d %d %d", &s1, &s2, &s3);
    int isValid = s1 > s2 && s1 > s3 ? s1 < s2 + s3 : s2 > s3 ? s2 < s1 + s3 : s3 < s1 + s2;

    if(s1 > 0 && s2 > 0 && s3 > 0 && isValid) {
        printf("Triangle is valid.");
    }
    else {
        printf("Triangle is invalid.");
    }
    return 0;
}

// Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.
int main()
{
    int s1, s2, s3;
    printf("Enter lengths of 3 sides: ");
    scanf("%d %d %d", &s1, &s2, &s3);
    int isValid = s1 > s2 && s1 > s3 ? s1 < s2 + s3 : s2 > s3 ? s2 < s1 + s3 : s3 < s1 + s2;

    if(s1 > 0 && s2 > 0 && s3 > 0 && isValid) {
        if(s1 == s2 && s2 == s3) {
            printf("Equilateral Triangle.");
        }
        else if(s1 == s2 || s2 == s3 || s1 == s3) {
            printf("Isosceles Triangle.");
        }
        else {
            printf("Scalene Triangle.");
        }
    }
    else {
        printf("Triangle is invalid.");
    }
    return 0;
}

// Write a C program to find all roots of a quadratic equation.
int main()
{
    int a, b, c, temp;
    float a1, a2;
    printf("Enter value of a, b, c in a quadratic equation: ");
    scanf("%d %d %d", &a, &b, &c);

    temp = b * b - 4 * a * c;

    // square root finder
    int sr = 0;
    while(sr * sr <= temp) {
        sr++;
    }
    sr--;

    a1 = (-b + sr) / (2.0 * a);
    a2 = (-b - sr) / (2.0 * a);

    if(a1 == a2)
    {
        printf("Root: %f", a1);
    }
    else {
        printf("Root1: %.2f \nRoot2: %.2f", a1, a2);
    }

    return 0;
}

// Write a C program to calculate profit or loss.

// Write a C program to input marks of five subjects Physics, Chemistry, Biology,
// Mathematics and Computer. Calculate percentage and grade according to following:
// Percentage >= 90% : Grade A
// Percentage >= 80% : Grade B
// Percentage >= 70% : Grade C
// Percentage >= 60% : Grade D
// Percentage >= 40% : Grade E
// Percentage < 40% : Grade F


// Write a C program to input basic salary of an employee and calculate its Gross salary according to the following:
// Basic Salary <= 10000 : HRA = 20%, DA = 80%
// Basic Salary <= 20000 : HRA = 25%, DA = 90%
// Basic Salary > 20000 : HRA = 30%, DA = 95%

int main()
{
    int bs;
    float gs = 0;
    printf("Enter basic salary: ");
    scanf("%d", &bs);

    if(bs <= 10000) {
        gs = 2 * bs;
    }
    else if(bs <= 20000) {
        gs = 2.15 * bs;
    }
    else if(bs > 20000) {
        gs = 2.25 * bs;
    }
    printf("Gross Salary: %.2f", gs);
    return 0;
}

// Write a C program to input electricity unit charges and calculate total electricity bill
// according to the given condition: For the first 50 units Rs. 0.50/unit
// For next 100 units Rs. 0.75/unit
// For next 100 units Rs. 1.20/unit
// For unit above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill
int main()
{
    int units;
    float bill = 0;
    printf("Enter electricity units: ");
    scanf("%d", &units);
    int dunits = units;

    if(units > 250) {
        bill = bill + 1.5 * (units - 250);
        units = 250;
    }
    if(units > 150) {
        bill = bill + 1.2 * (units - 150);
        units = 150;
    }
    if(units > 50) {
        bill = bill + .75 * (units - 50);
        units = 50;
    }
    if(units > 0) {
        bill = bill + .5 * units;
        units = 0;
    }

    bill *= 1.2;

    printf("%d units: %.2f bill", dunits, bill);
    return 0;
}

// Write a C program to print all natural numbers from 1 to n.
int main()
{
    int n;
    printf("Number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        printf("%d\t", i);
    }
    return 0;
}

// Write a C program to print all natural numbers in reverse (from n to 1).
int main()
{
    int n;
    printf("Number: ");
    scanf("%d", &n);
    for(; n > 0; n--) {
        printf("%d\t", n);
    }
    return 0;
}

// Write a C program to print all alphabets from a to z.
int main()
{
    for(char ch = 'a'; ch <= 'z'; ch++) {
        printf("%c\t", ch);
    }
    return 0;
}

// Write a C program to print all even numbers from 1 to 100.
int main()
{
    for(int i = 2; i <= 100; i += 2) {
        printf("%d\t", i);
    }
    return 0;
}

// Write a C program to print all odd numbers from 1 to 100.
int main()
{
    for(int i = 1; i < 100; i += 2) {
        printf("%d\t", i);
    }
    return 0;
}

// Write a C program to find the sum of all natural numbers from 1 to n.
int main()
{
    int n, sum = 0;
    printf("Number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of natural numbers from 1 to %d is %d", n, sum);
    return 0;
}

// Write a C program to find the sum of all even numbers from 1 to n.
int main()
{
    int n, sum = 0;
    printf("Number: ");
    scanf("%d", &n);

    for(int i = 2; i <= n; i += 2) {
        sum = sum + i;
    }

    printf("Sum of even numbers from 1 to %d is %d", n, sum);
    return 0;
}

// Write a C program to find sum of all odd numbers between 1 to n.
int main()
{
    int n, sum = 0;
    printf("Number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i += 2) {
        sum = sum + i;
    }

    printf("Sum of odd numbers from 1 to %d is %d", n, sum);
    return 0;
}

// Write a C program to print multiplication table of any number.
int main()
{
    int n;
    printf("Number: ");
    scanf("%d", &n);

    for(int i = 1; i <= 10; i++) {
        printf("%d X %d = %d\n", n, i, n*i);
    }
    return 0;
}

// Write a C program to count number of digits in a number.
int main()
{
    int n, cnt = 0;
    printf("Number: ");
    scanf("%d", &n);

    for(int num = n; num > 0; num /= 10) {
        cnt++;
    }
    printf("Count of digits in %d is %d", n, cnt);
    return 0;
}

// Write a C program to find first and last digit of a number.
int main()
{
    int fd, ld, n;
    printf("Number: ");
    scanf("%d", &n);

    ld = n % 10;

    for(int num = n; num > 0; num /= 10) {
        fd = num % 10;
    }

    printf("First Digit: %d\nLast Digit: %d", fd, ld);
    return 0;
}

// Write a C program to find sum of first and last digit of a number.
int main()
{
    int fd, ld, n;
    printf("Number: ");
    scanf("%d", &n);

    ld = n % 10;

    for(int num = n; num > 0; num /= 10) {
        fd = num % 10;
    }

    printf("Sum of first and last digit of %d is %d", n, fd+ld);
    return 0;
}

// Write a C program to swap first and last digits of a number.
// 45126
// 4512     60000
int main()
{
    int n, divider = 1;
    printf("Number: ");
    scanf("%d", &n);
    int dn = n;

    int res = n % 10;
    n /= 10;
    for(int i = n; i > 0; i /= 10, divider *= 10);
    res = (res * divider) + ((n % (divider/10)) * 10) + (n / (divider/10));

    printf("%d after swap: %d", dn, res);
    return 0;
}

// Write a C program to calculate sum of digits of a number.
int main()
{
    int n, sum = 0;
    printf("Number: ");
    scanf("%d", &n);

    for(int i = n; i > 0; i /= 10) {
        sum = sum + i % 10;
    }

    printf("Sum of digits of %d is %d", n, sum);
    return 0;
}

// Write a C program to calculate product of digits of a number.
int main()
{
    int n;
    printf("Number: ");
    scanf("%d", &n);

    int prod = n > 0 ? 1 : 0;

    for(int i = n; i > 0; i /= 10) {
        prod = prod * (i % 10);
    }

    printf("Product of digits of %d is %d", n, prod);
    return 0;
}

// Write a C program to enter a number and print its reverse.
int main()
{
    int n, rev = 0;
    printf("Number: ");
    scanf("%d", &n);

    for(int i = n; i > 0; i /= 10) {
        rev = rev * 10 + i % 10;
    }

    printf("Reverse: %d", rev);
    return 0;
}

// Write a C program to check whether a number is palindrome or not.
int main()
{
    int n, rev = 0;
    printf("Number: ");
    scanf("%d", &n);

    for(int i = n; i > 0; i /= 10) {
        rev = rev * 10 + i % 10;
    }

    if(n == rev) {
        printf("Palindrome.");
    }
    else {
        printf("Not Palindrome.");
    }
    return 0;
}

// Write a C program to find frequency of each digit in a given integer.
int main()
{
    int n;
    printf("Number: ");
    scanf("%d", &n);

    for(int d = 0; d < 10; d++) {
        int dcnt = 0;
        for(int i = n; i > 0; i /= 10) {
            if(i % 10 == d) {
                dcnt ++;
            }
        }
        if(dcnt) {
            printf("%d: %d\n", d, dcnt);
        }
    }
    return 0;
}

// Write a C program to enter a number and print it in words.
int main()
{
    int n, rev = 0;
    printf("Number: ");
    scanf("%d", &n);

    for(int i = n; i > 0; i /= 10) {
        rev = rev * 10 + i % 10;
    }

    for(int i = rev; i > 0; i /= 10) {
        switch(i % 10) {
            case 0:
                printf("zero ");
                break;
            case 1:
                printf("one ");
                break;
            case 2:
                printf("two ");
                break;
            case 3:
                printf("three ");
                break;
            case 4:
                printf("four ");
                break;
            case 5:
                printf("five ");
                break;
            case 6:
                printf("six ");
                break;
            case 7:
                printf("seven ");
                break;
            case 8:
                printf("eight ");
                break;
            case 9:
                printf("nine ");
                break;
        }
    }

    return 0;
}

// Write a C program to print all ASCII character with their values.
int main()
{
    for(int ch = 0; ch < 128; ch++) {
        printf("%d: %c\n", ch, ch);
    }
    return 0;
}

// Write a C program to find power of a number using for loop.
int main()
{
    int x, y, ans = 1;
    printf("Base & Exponent: ");
    scanf("%d %d", &x, &y);

    for(int i = 0; i < y; i++) {
        ans = ans * x;
    }

    printf("%d^%d = %d", x, y, ans);
    return 0;
}

// Write a C program to find all factors of a number.
int main() {
    int n;
    printf("Number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n / 2; i++) {
        if(n % i == 0) {
            printf("%d\t", i);
        }
    }
    return 0;
}

// Write a C program to calculate factorial of a number.
int main() {
    int n, fact = 1;
    printf("Number: ");
    scanf("%d", &n);

    for(int i = 2; i <= n; i++) {
        fact = fact * i;
    }

    printf("Factorial of %d is %d", n, fact);
    return 0;
}

// Write a C program to find HCF (GCD) of two numbers.
int main()
{
    int a, b, hcf = 1;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for(int i = 2; i <= (a > b ? a : b) / 2 ; i++) {
        if(a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }

    printf("HCF of %d & %d is %d", a, b, hcf);
    return 0;
}

// Write a C program to find LCM of two numbers.
int main()
{
    int a, b, hcf = 1, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for(int i = 2; i <= (a > b ? a : b) / 2 ; i++) {
        if(a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }

    lcm = (a*b > 0 ? a*b : -(a*b)) / hcf;
    printf("LCM of %d & %d is %d", a, b, lcm);
    return 0;
}

// Write a C program to check whether a number is Prime number or not.
int main()
{
    int n;
    printf("Number: ");
    scanf("%d", &n);

    if(n == 1) {
        printf("1 is not Prime.");
        return 0;
    }

    for(int i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            printf("%d is not Prime.", n);
            return 0;
        }
    }

    printf("%d is Prime.", n);
    return 0;
}

// Write a C program to print all Prime numbers between 1 to n.
int main()
{
    int num;
    printf("Number: ");
    scanf("%d", &num);

    for(int n = 2; n <= num; n++) {
        int isPrime = 1;

        for(int i = 2; i <= n/2; i++) {
            if(n % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime) {
            printf("%d\n", n);
        }
    }
    return 0;
}

// Write a C program to find sum of all prime numbers between 1 to n.
int main()
{
    int num, sum = 0;
    printf("Number: ");
    scanf("%d", &num);

    for(int n = 2; n <= num; n++) {
        int isPrime = 1;

        for(int i = 2; i <= n/2; i++) {
            if(n % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime) {
            sum = sum + n;
        }
    }

    printf("Sum of prime numbers from 1 to %d is %d", num, sum);
    return 0;
}

// Write a C program to find all prime factors of a number.
int main()
{
    int num;
    printf("Number: ");
    scanf("%d", &num);
    printf("Factors of %d:\n", num);
    for(int n = 2; n <= num / 2; n++) {
        int isPrime = 1;

        for(int i = 2; i <= n/2; i++) {
            if(n % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime && num % n == 0) {
            printf("%d\n", n);
        }
    }
    return 0;
}

// Write a C program to check whether a number is Armstrong number or not.
int main()
{
    int num, cnt = 0, sum = 0;
    printf("Number: ");
    scanf("%d", &num);

    for(int i = num; i > 0; i /= 10) {
        cnt++;
    }

    for(int i = num; i > 0; i /= 10) {
        int dp = 1;
        for(int j = 0; j < cnt; j++) {
            dp = dp * (i % 10);
        }
        sum = sum + dp;
    }

    if(sum == num) {
        printf("%d is armstrong number.", num);
    }
    else {
        printf("%d is not armstrong number.", num);
    }
    return 0;
}

// Write a C program to print all Armstrong numbers between 1 to n.
int main()
{
    int n;
    printf("Number: ");
    scanf("%d", &n);

    for(int num = 1; num <= n; num++) {
        int cnt = 0, sum = 0;
        for(int i = num; i > 0; i /= 10) {
            cnt++;
        }

        for(int i = num; i > 0; i /= 10) {
            int dp = 1;
            for(int j = 0; j < cnt; j++) {
                dp = dp * (i % 10);
            }
            sum = sum + dp;
        }
        if(sum == num) {
            printf("%d\n", sum);
        }
    }
    return 0;
}

// Write a C program to check whether a number is Perfect number or not.
int main() {
    int n, sum = 0;
    printf("Number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n / 2; i++) {
        if(n % i == 0) {
            sum = sum + i;
        }
    }

    if(sum == n) {
        printf("%d is perfect number.", n);
    }
    else {
        printf("%d is not a perfect number.", n);
    }
    return 0;
}

// Write a C program to print all Perfect numbers between 1 to n.
int main() {
    int num;
    printf("Number: ");
    scanf("%d", &num);

    for(int n = 1; n <= num; n++) {
        int sum = 0;
        for(int i = 1; i <= n / 2; i++) {
            if(n % i == 0) {
                sum = sum + i;
            }
        }

        if(sum == n) {
            printf("%d\n", n);
        }
    }

    return 0;
}

// Write a C program to check whether a number is Strong number or not.
int main()
{
    int n, sum = 0;
    printf("Number: ");
    scanf("%d", &n);

    for(int num = n; num > 0; num /= 10) {
        int fact = 1;
        for(int i = 2; i <= num % 10; i++) {
            fact = fact * i;
        }
        sum = sum + fact;
    }

    if(n == sum) {
        printf("%d is a strong number.", n);
    }
    else {
        printf("%d is not a strong number.", n);
    }

    return 0;
}

// Write a C program to print all Strong numbers between 1 to n.
int main()
{
    int num;
    printf("Number: ");
    scanf("%d", &num);

    printf("Strong numbers between 1 & %d:\n", num);
    for(int n = 1; n <= num; n++) {
        int sum = 0;
        for(int num = n; num > 0; num /= 10) {
            int fact = 1;
            for(int i = 2; i <= num % 10; i++) {
                fact = fact * i;
            }
            sum = sum + fact;
        }
        if(n == sum) {
            printf("%d\n", n);
        }
    }

    return 0;
}

// Write a C program to print Fibonacci series up to n terms.
int main()
{
    int n;
    printf("Number: ");
    scanf("%d", &n);

    int prev2 = 1, prev1 = 1;
    if(n > 1) {
        printf("0\n");
    }
    if(n > 2) {
        printf("1\n");
    }
    for(int i = 2; i < n; i++) {
        printf("%d\n", prev1);
        prev1 = prev1 + prev2;
        prev2 = prev1 - prev2;
    }
    return 0;
}

// Write a C program to find one's complement of a binary number.
int main()
{
    int n, ones = 0;
    printf("Binary Number: ");
    scanf("%d", &n);


    for(int i = n, mul = 1; i > 0; i /= 10, mul *= 10) {
        ones = !(i % 10) * mul + ones;
    }

    printf("One's complement of %d is %d", n, ones);
    return 0;
}

// Finding Square
int main()
{
    int n;
    float sr = 0;
    printf("Number: ");
    scanf("%d", &n);

    while(sr * sr <= n) {
        sr++;
    }
    while(sr * sr - n > 0.0001 || n - sr * sr > 0.0001) {
        sr = (sr + (n / sr)) / 2;
    }

    printf("Square Root: %f", sr);
    return 0;
}

// Write a C program to find two's complement of a binary number.
// 101110
// 010001
// 010010
int main()
{
    int n, twos = 0;
    printf("Enter a Binary Number: ");
    scanf("%d", &n);
    int nd = n, mul = 1;
    while(twos == 0 && nd > 0) {
        twos = (nd % 10) * mul + twos;
        mul = mul * 10;
        nd = nd / 10;
    }

    for( ; nd > 0; nd = nd / 10, mul = mul * 10) {
        twos = (!(nd % 10)) * mul + twos;
    }
    printf("Two's complement of %d is %d", n, twos);
    return 0;
}

// Write a C program to convert Binary to Octal number system.
// 10
// 001 010
//   1   2

// 0 1 2
// 1 2 4
int main()
{
    int n, octal = 0;
    printf("Binary Number: ");
    scanf("%d", &n);

    int nd = n, mul = 1;
    while(nd > 0) {
        int i = 0, octalDigit = 0;
        while(i < 3) {
            if(nd % 10 == 1) {
                octalDigit = octalDigit + (i == 0 ? 1 : i * 2);
            }
            nd = nd / 10;
            i++;
        }
        octal = octalDigit * mul + octal;
        mul = mul * 10;
    }

    printf("Octal of %d (in binary) is %d", n, octal);
    return 0;
}

// Write a C program to convert Binary to Decimal number system.
*/



// Write a C program to convert Binary to Hexadecimal number system.
// Write a C program to convert Octal to Binary number system.
// Write a C program to convert Octal to Decimal number system.
// Write a C program to convert Octal to Hexadecimal number system.
// Write a C program to convert Decimal to Binary number system.
// Write a C program to convert Decimal to Octal number system.
// Write a C program to convert Decimal to Hexadecimal number system.
// Write a C program to convert Hexadecimal to Binary number system.
// Write a C program to convert Hexadecimal to Octal number system.
// Write a C program to convert Hexadecimal to Decimal number system.
// Write a C program to print Pascal triangle upto n rows.









