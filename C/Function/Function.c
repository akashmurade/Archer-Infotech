#include <stdio.h>
#include <stdlib.h>
/**
//  - User-Defined Functions: These functions are defined by the user of language.(programmer)
// 			    There are following types of UDF
// Addition of two numbers
// 			I] simple function (function without argument without return type)
void add();
int main()
{
    add();
    return 0;
}
void add() 
{
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    printf("Addition: %d", sum);
}

// 			II] function with argument without return type
void add(int, int);

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    add(a, b);
    return 0;
}

void add(int a, int b) 
{
    int sum = a + b;
    printf("Addition: %d", sum);
}

// 			III] function without argument with return type
int add();
int main()
{
    int sum;
    sum = add();
    printf("Addition: %d", sum);
    return 0;
}
int add() 
{
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    return sum;
}

// 			IV] function with argument with return type	
int add(int, int);

int main()
{
    int a, b, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum = add(a, b);
    printf("Addition: %d", sum);
    return 0;
}

int add(int a, int b) 
{
    int sum = a + b;
    return sum;
}

// 			V] Recursion
// Factorial
int fact(int);
int main()
{
    int n, f;
    printf("Enter a number: ");
    scanf("%d", &n);

    f = fact(n);
    printf("\nFactorial of %d is %d", n, f);
    return 0;
}

int fact(int n)
{
    if(n == 0 || n == 1) {
        return 1;
    }
    return n * fact(n - 1);
}

// WAP to reverse a number using function with prototype - int findreverse(int)

int findreverse(int);

int main()
{
    int no, rev;
    printf("Enter a number: ");
    scanf("%d", &no);

    rev = findreverse(no);
    printf("Reverse of %d is %d", no, rev);
    return 0;
}

int difReverse(int n, int m)
{
    if(m / 10 == 0) {
        return n * 10 + m;
    }
    return n * 10 + m % 10, m / 10;
}

int findreverse(int n) 
{
    int rev = 0;
    for(; n > 0; n = n / 10) {
        rev = rev * 10 + n % 10;
    }   
    return rev;
}

// Check Palindrome using function
int findreverse(int);
int isPalindrome(int);
int main()
{
    int no;
    printf("Enter a number: ");
    scanf("%d", &no);

    if(isPalindrome(no)) {
        printf("%d is Palindrome", no);
    }
    else {
        printf("%d is not Palinrome", no);
    }
    return 0;
}

int findreverse(int n) 
{
    int rev = 0;
    for(; n > 0; n = n / 10) {
        rev = rev * 10 + n % 10;
    }   
    return rev;
}

int isPalindrome(int n)
{
    return n == findreverse(n);
}

// Call by value
void swap(int, int);
int main()
{
    int x = 10, y = 12;
    printf("\nBefore swap\nx: %d\ty: %d", x, y);

    swap(x, y);
    printf("\nBefore swap\nx: %d\ty: %d", x, y);
}
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;   
}

// Doesn't work as intended therefore for this condition we use call by reference
// Call by Reference
void swap(int *, int *);
int main()
{
    int x = 10, y = 12;
    printf("\nBefore swap\nx: %d\ty: %d", x, y);

    swap(&x, &y);
    printf("\nBefore swap\nx: %d\ty: %d", x, y);
}
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;   
}

// WAP to sort the array using function
void input(int *, int);
void output(int *, int);
void sort(int *, int);
int main()
{
    int cnt, *nums;
    printf("Enter number of elements in array: ");
    scanf("%d", &cnt);

    nums = (int *)malloc(sizeof(int) * cnt);

    input(nums, cnt);

    sort(nums, cnt);

    printf("\nAfter sorting\n");
    output(nums, cnt);

    return 0;
}

void sort(int *nums, int cnt) {
    for(int i = 0; i < cnt - 1; i++) {
        for(int j = i + 1; j < cnt; j++) {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
        }
    }
}

void input(int *nums, int cnt) 
{
    printf("Enter %d elements:\n", cnt);
    for(int i = 0; i < cnt; i++) {
        scanf("%d", nums + i);
    }
}

void output(int *nums, int cnt)
{
    printf("Array is\n");
    for(int i = 0; i < cnt; i++) {
        printf("\t%d", nums[i]);
    }
}

// WAP to find the length of string using the function
int len(char *);
int main()
{
    char s[100];
    printf("Enter String: ");
    gets(s);

    printf("Length of string is %d", len(s));
    return 0;
}

int len(char *s)
{
    int len = 0;
    for(; s[len] != '\0'; len++);
    return len;
}

// WAP to find the strings are matching or not
int match(char *, char *);
int main()
{
    char s1[100], s2[100];
    printf("Enter String 1: ");
    gets(s1);

    printf("Enter String 2: ");
    gets(s2);

    if(match(s1, s2)) {
        printf("String's Match");
    }
    else {
        printf("String's Don't Match");
    }

    return 0;
}
int match(char *s1, char *s2)
{
    int i;
    for(i = 0; s1[i] != '\0'; i++) {
        if(s1[i] != s2[i]) {
            return 0;
        }
    }
    return s1[i] == s2[i];
}

// Write a program to implement x^y using function 
int power(int, int);
int main()
{
    int x, y, ans;
    printf("Enter base and exponenet: ");
    scanf("%d %d", &x, &y);

    ans = power(x, y);

    printf("%d ^ %d = %d", x, y, ans);
    return 0;
}
int power(int base, int exponent) {
    int ans = 1;
    while(exponent > 0) {
        ans = ans * base;
        exponent --;
    }
    return ans;
}

// Nested call to function
// Findmax
int findMax(int, int);
int main()
{
    int a, b, c, m;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    m = findMax(a, findMax(b, c));

    printf("Max: %d", m);
    return 0;
}
int findMax(int a, int b)
{
    return a > b ? a : b;
}

	// returning the array from function

	// enter the array and copy only even numbers using function
void input(int *, int);
void output(int *, int);
int* copyEven(int *, int);
int ec = 0;

int main()
{
    int cnt, *nums, *evens;
    printf("Enter number of elements: ");
    scanf("%d", &cnt);

    nums = (int *)malloc(sizeof(int) * cnt);

    input(nums, cnt);

    evens = copyEven(nums, cnt);

    output(evens, ec);

    return 0;
}

int* copyEven(int *nums, int cnt)
{
    static int* y;
    y = (int *)malloc(0);

    for(int i = 0; i < cnt; i++) {
        if(nums[i] % 2 == 0) {
            y = (int *)realloc(y, ec + 1);
            y[ec] = nums[i];
            ec++;
        }
    }

    return y; 
}

void input(int *nums, int cnt) 
{
    printf("Enter %d elements:\n", cnt);
    for(int i = 0; i < cnt; i++) {
        scanf("%d", nums + i);
    }
}

void output(int *nums, int cnt)
{
    printf("Array is\n");
    for(int i = 0; i < cnt; i++) {
        printf("\t%d", nums[i]);
    }
}

// Passing the pointer to function
// WAP to convert the string into uppercase
void ucase(char *);
int main()
{
    char s[100];
    printf("Enter String: ");
    gets(s);

    ucase(s);

    printf("String is %s", s);
    return 0;
}

void ucase(char *s)
{
    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;
        }        
    }
}

// find prime count using function from N elements
void input(int *, int);
void output(int *, int);
int primeCount(int *, int);
int main()
{
    int cnt, pc;
    printf("Enter number of elements: ");
    scanf("%d", &cnt);

    int *nums = (int *)malloc(sizeof(int) * cnt);

    input(nums, cnt);

    pc = primeCount(nums, cnt);

    printf("Prime Count is %d", pc);
}

int primeCount(int *nums, int cnt) {
    int pc = 0;
    for(int i = 0; i < cnt; i++) {
        pc++;
        int n = nums[i];
        if(n == 1) {
            pc--;
        }
        for(int j = 2; j <= n / 2; j++) {
            if(n % j == 0) {
                pc--;
                break;
            }
        }
    }
    return pc;
}

void input(int *nums, int cnt) 
{
    printf("Enter %d elements:\n", cnt);
    for(int i = 0; i < cnt; i++) {
        scanf("%d", nums + i);
    }
}

void output(int *nums, int cnt)
{
    printf("Array is\n");
    for(int i = 0; i < cnt; i++) {
        printf("\t%d", nums[i]);
    }
}

// Enter the N numbers and divide them in group of even and odd nos
*/
int ep = 0, op = 0, *evens, *odds;
void evenOddRegister(int *, int);
int main()
{
    int cnt;
    printf("Enter count of elements: ");
    scanf("%d", &cnt);

    int *nums = (int *)malloc(sizeof(int) * cnt);

    

    return 0;
}

