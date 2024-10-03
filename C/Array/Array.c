#include <stdio.h>
/**
// Enter any 10 nos and display list of primes from it.
int main()
{
    int size = 10, nos[size];

    // Taking Input
    printf("Enter any 10 nos:\n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &nos[i]);
    }

    // Checking prime for each number and printing
    for(int i = 0; i < size; i++) {
        int isPrime = 1;
        for(int factor = 2; factor <= nos[i] / 2; factor ++) {
            if(nos[i] % factor == 0) {
                isPrime = 0;
                break;
            }
        }
        // Printing if no is prime and not one due to the edge case
        if(isPrime && nos[i] != 1) {
            printf("%8d", nos[i]);
        }
    }

    return 0;
}

// Sorting
// Selection Sort
#define SIZE 5
int main()
{
    int x[SIZE];
    printf("Enter %d numbers: ", SIZE);

    // Inputting Array
    for(int i = 0; i < SIZE; i++) {
        scanf("%d", &x[i]);
    }

    printf("\nArray Before Sorting: ");
    for(int i = 0; i < SIZE; i++) {
        printf("%8d", x[i]);
    }

    // Selection Sort
    for(int i = 0; i < SIZE - 1; i++) {
        for(int j = i+1; j < SIZE; j++) {
            if(x[i] > x[j]) {
                int temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }

    printf("\nAfter Sorting: ");
    for(int i = 0; i < SIZE; i++) {
        printf("%8d", x[i]);
    }
    return 0;
}

// Bubble Sort
#define SIZE 5
int main()
{
    int x[SIZE];
    printf("Enter %d numbers: ", SIZE);

    // Inputting Array
    for(int i = 0; i < SIZE; i++) {
        scanf("%d", &x[i]);
    }

    printf("\nArray Before Sorting: ");
    for(int i = 0; i < SIZE; i++) {
        printf("%8d", x[i]);
    }

    // Bubble Sort
    for(int i = 0; i < SIZE - 1; i++) {
        for(int j = 0; j < SIZE - 1 - i; j++) {
            if(x[j] > x[j+1]) {
                int temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
            }
        }
    }

    printf("\nAfter Sorting: ");
    for(int i = 0; i < SIZE; i++) {
        printf("%8d", x[i]);
    }
    return 0;
}

// Insertion Sort
#define SIZE 5
int main()
{
    int x[SIZE];
    printf("Enter %d numbers: ", SIZE);

    // Inputting Array
    for(int i = 0; i < SIZE; i++) {
        scanf("%d", &x[i]);
    }

    printf("\nArray Before Sorting: ");
    for(int i = 0; i < SIZE; i++) {
        printf("%8d", x[i]);
    }

    // Insertion Sort
    for(int i = 1; i < SIZE; i++) {
        int pivot = x[i];
        int j = i - 1;
        while(j >= 0 && x[j] > pivot) {
            x[j+1] = x[j];
            j--;
        }
        x[j+1] = pivot;
    }

    printf("\nAfter Sorting: ");
    for(int i = 0; i < SIZE; i++) {
        printf("%8d", x[i]);
    }
    return 0;
}
// Searching
// Linear Search
#define SIZE 5
int main()
{
    int x[SIZE], key, i;

    // Inputting numbers
    printf("Enter %d numbers: ", SIZE);
    for(int i = 0; i < SIZE; i++) {
        scanf("%d", &x[i]);
    }

    printf("Enter number to be searched: ");
    scanf("%d", &key);

    for(i = 0; i < SIZE; i++) {
        if(key == x[i]) {
            printf("%d found at %d position", key, i);
            break;
        }
    }

    if(i == SIZE) {
        printf("%d not found in array", key);
    }

    return 0;
}

// Binary Search
#define SIZE 5
int main()
{
    int x[SIZE], key, i, start = 0, end = SIZE - 1, mid;

    // Inputting numbers
    printf("Enter %d numbers: ", SIZE);
    for(int i = 0; i < SIZE; i++) {
        scanf("%d", &x[i]);
    }

    printf("Enter number to be searched: ");
    scanf("%d", &key);

    // Bubble Sort
    for(int i = 0; i < SIZE - 1; i++) {
        for(int j = 0; j < SIZE - 1 - i; j++) {
            if(x[j] > x[j+1]) {
                int temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
            }
        }
    }

    while(start <= end) {
        mid = start + (end - start) / 2;
        if(x[mid] == key) {
            printf("%d found at position %d", key, mid);
            break;
        }
        else if(key < x[mid]) {
            end = mid - 1;
        }
        else if(key > x[mid]) {
            start = mid + 1;
        }
    }

    if(start > end) {
        printf("%d not found in array", key);
    }

    return 0;
}
*/


/**
// 2D Array - Numeric
// init any 2D array and display it.
int main()
{
    int x[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

    printf("2D Array is: \n");
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d\t", x[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// Input array of 4x3 and display it.
int main()
{
    int x[4][3];
    printf("Input Matrix: \n");
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &x[i][j]);
        }
    }

    printf("Matrix Received: \n");
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d\t", x[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// WAP using 2D array to store the PCM  marks of 3 students and display marks with
// total and percentage.
int main()
{
    int marks[3][4], i, j;

    for(i = 0; i < 3; i++) {
        printf("\nEnter Marks for Student %d", i+1);
        int total = 0;
        for(j = 0; j < 3; j++) {
            printf("\nSubject %d: ", j+1);
            scanf("%d", &marks[i][j]);
            total = total + marks[i][j];
        }
        marks[i][j] = total;
    }

    printf("Result:\t\tP\tC\tM\tTotal\tPercentage\n");
    for(i = 0; i < 3; i++) {
        printf("\nStudent %d:\t", i+1);
        for(j = 0; j < 3; j++) {
            printf("%d\t", marks[i][j]);
        }
        printf("%d\t%f", marks[i][j], marks[i][j] / 3.0);
    }
    return 0;
}

// Enter two arrays of 3x3 and find the addition of two matrix
int main()
{
    int x[3][3], y[3][3], z[3][3];
    printf("1st Matrix: \n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &x[i][j]);
        }
    }
    printf("2nd Matrix: \n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &y[i][j]);
            z[i][j] = x[i][j] + y[i][j]; // addition while receiving 2nd Matrix
        }
    }

    printf("Addition of Matrix: \n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d\t", z[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// Matrix Multiplication
int main()
{
    int x[3][3], y[3][3], z[3][3];
    printf("1st Matrix: \n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &x[i][j]);
        }
    }
    printf("2nd Matrix: \n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &y[i][j]);
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            z[i][j] = 0; // assignment of value 0 to all matrix locations
            for(int k = 0; k < 3; k++) {
                z[i][j] = z[i][j] + x[i][k] * y[k][j]; // multiplication formula
            }
        }
    }

    printf("Addition of Matrix: \n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d\t", z[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// in above program print arrays in hori. manner
int main()
{
    int x[3][3], y[3][3], z[3][3];
    printf("1st Matrix: \n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &x[i][j]);
        }
    }
    printf("2nd Matrix: \n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &y[i][j]);
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            z[i][j] = 0; // assignment of value 0 to all matrix locations
            for(int k = 0; k < 3; k++) {
                z[i][j] = z[i][j] + x[i][k] * y[k][j]; // multiplication formula
            }
        }
    }

    printf("Addition of Matrix: \n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d\t", z[j][i]);
        }
        printf("\n");
    }
    return 0;
}

// Character Array
// Different ways of string display
int main()
{
    char str[] = {'h', 'e', 'l', 'l', 'o', '\0'};

    // Method 1: Using %s as format specifier
    printf("\nString: %s", str);

    // Method 2: Using loop and %c - character by character display
    printf("\nString: ");
    for(int i = 0; str[i] != '\0'; i++) {
        printf("%c", str[i]);
    }

    // Method 3: Using puts() function
    printf("\nString: ");
    puts(str);

    return 0;
}

// String input and display
int main()
{
    char str[50];
    // Using %s for input - Ok for single word, it considers space as a string terminating character.
    printf("Enter String: ");
    // scanf("%s", &str);

    // Using loop and %c - character by character input - Not a proper option

	// Using %[^\n] for input - here \n defined as a terminator. - OK
    // scanf("%[^\n]", &str);

	// Using gets() - input all entered characters and when user hits enter key, it will will place null('\0') at the end and terminates.
    gets(str);
    printf("String: %s", str);
    return 0;
}
// String processing
// Enter any string and find the length (no of characters in string)
int main()
{
    char str[50];
    int cnt;

    printf("\nEnter String: ");
    gets(str);

    for(cnt = 0; str[cnt] != '\0'; cnt++);

    printf("Length: %d", cnt);
    return 0;
}

// Enter any string and convert it in to uppercase.
int main()
{
    char str[50];

    printf("Enter String: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    }

    printf("Uppercase String: %s", str);

    return 0;
}

// Enter the string contains digits and random symbols in between,
// remove all symbols and digits and display the actual string
// (perform the operation @ same locations)
int main()
{
    char str[50];
    int curr = 0;

    printf("Enter String: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') {
            str[curr] = str[i];
            curr++;
        }
    }
    str[curr] = '\0';

    printf("String: %s", str);

    return 0;
}

// Enter the string and copy the string into another character array.
int main()
{
    char str[50], cpy[50];

    printf("Enter String: ");
    gets(str);

    int i;
    for(i = 0; str[i] != '\0'; i++) {
        cpy[i] = str[i];
    }
    cpy[i] = '\0';

    printf("Copied String: %s", cpy);
    return 0;
}

// Enter the string and copy the string into another character array in reverse manner.
int main()
{
    char str[50], rev[50];

    printf("Enter String: ");
    gets(str);

    int i, j;
    for(i = 0; str[i] != '\0'; i++);
    for(i--, j = 0; i >= 0; i--, j++) {
        rev[j] = str[i];
    }
    rev[j] = '\0';

    printf("Reversed String: %s", rev);
    return 0;
}

// WAP to find two strings are matching or not.
int main()
{
    char s1[50], s2[50];
    int match = 1;

    printf("Enter String 1: ");
    gets(s1);

    printf("Enter String 2: ");
    gets(s2);
    int i;
    for(i = 0; s1[i] != '\0'; i++) {
        if(s1[i] != s2[i]) {
            match = 0;
            break;
        }
    }
    // Checks for the end
    if(s1[i] != s2[i]) {
        match = 0;
    }

    if(match) {
        printf("%s and %s matches.", s1, s2);
    }
    else {
        printf("%s and %s doesn't match.", s1, s2);
    }
    return 0;
}

// Enter any string and find the number of words in it.
int main()
{
    char s[300];
    int fc = 1, cnt = 0;
    printf("Enter String: ");
    gets(s);

    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] != ' ' && fc) {
            fc = 0;
            cnt++;
        }
        else if(s[i] == ' ') {
            fc = 1;
        }
    }

    printf("No. of words is: %d", cnt);
    return 0;
}

// HW: WAP to delete all unwanted spaces from from string
int main()
{
    char s[300];
    printf("Enter String: ");
    gets(s);

    int fs = 0, curr = 0;
    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] != ' ') {
            s[curr] = s[i];
            curr++;
            fs = 1;
        }
        else if(fs && s[i] == ' ') {
            s[curr] = ' ';
            curr++;
            fs = 0;
        }
    }
    s[curr] = '\0';

    printf("Formatted String: %s", s);
    return 0;
}

// WAP to convert the string into title case
int main()
{
    char s[300];
    int fc = 1;
    printf("Enter String: ");
    gets(s);

    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] != ' ' && fc) {
            fc = 0;
            if(s[i] >= 'a' && s[i] <= 'z') {
                s[i] -= 32;
            }
        }
        else if(s[i] == ' ') {
            fc = 1;
        }
        else if(s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
        }
    }

    printf("Formatted String: %s", s);
    return 0;
}

// WAP to interchange the first and last character of every word in the string
int main()
{
    char s[300];
    int fc = 1, fcl, i;
    printf("Enter String: ");
    gets(s);

    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] != ' ' && fc) {
            fc = 0;
            fcl = i;
        }
        else if(!fc && s[i] == ' ') {
            fc = 1;
            char temp = s[i-1];
            s[i-1] = s[fcl];
            s[fcl] = temp;
        }
    }
    if(s[i-1] != ' ') {
        char temp = s[i-1];
        s[i-1] = s[fcl];
        s[fcl] = temp;
    }

    printf("Formatted String: %s", s);
    return 0;
}

// WAP to reverse every word in the string at same location
int main()
{
    char s[300];
    int fc = 1, fcl, i;
    printf("Enter String: ");
    gets(s);

    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] != ' ' && fc) {
            fc = 0;
            fcl = i;
        }
        else if(!fc && s[i] == ' ') {
            fc = 1;
            for(int sp = fcl, lp = i-1; sp < lp; sp++, lp--) {
                char temp = s[lp];
                s[lp] = s[sp];
                s[sp] = temp;
            }
        }
    }
    if(s[i-1] != ' ') {
        for(int sp = fcl, lp = i-1; sp < lp; sp++, lp--) {
            char temp = s[lp];
            s[lp] = s[sp];
            s[sp] = temp;
        }
    }

    printf("Formatted String: %s", s);
    return 0;
}

// WAP to search entered word in the entered string
int main()
{
    char s[300], word[300];
    int cnt = 0, i, curr = 0;

    printf("Enter String: ");
    gets(s);
    printf("Enter word to search: ");
    gets(word);

    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] == word[curr]) {
            curr ++;
            if(word[curr] == '\0') {
                curr = 0;                if(s[i+1] == ' ' || s[i+1] == '\0') {
                    cnt ++;
                }
            }
        }
    }

    printf("The word '%s' is %d times", word, cnt);
    return 0;
}
*/
