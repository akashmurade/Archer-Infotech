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