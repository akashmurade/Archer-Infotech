#include <stdio.h>
/**
// List of star pattern programming exercises
// Square Star Patter
int main()
{
    int n = 5;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// Hollow Square Star Pattern
int main()
{
    int n = 5;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == 0 || j == 0 || j == n - 1 || i == n - 1) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}

// Hollow Square Star Pattern with Diagonal
int main()
{
    int n = 5;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == 0 || j == 0 || j == n - 1 || i == n - 1 || i == j || i == n - j - 1) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}

// Rhombus Star Pattern
int main()
{
    int n = 5;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            printf("  ");
        }
        for(int j = 0; j < n; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// Hollow Rhombus Star Pattern
int main()
{
    int n = 5;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            printf("  ");
        }
        for(int j = 0; j < n; j++) {
            if(i == 0 || j == 0 || j == n - 1 || i == n - 1) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}

// Mirrored Rhombus Star Pattern
int main()
{
    int n = 5;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            printf("  ");
        }
        for(int j = 0; j < n; j++) {
            if(i == 0 || j == 0 || j == n - 1 || i == n - 1) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}

// Right Triangle Star Pattern
int main()
{
    int n = 5;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// Hollow Right Triangle Star Pattern
int main()
{
    int n = 5;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            if(i == n - 1 || j == 0 || i == j) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}

// Mirrored Right Triangle Star Pattern
int main()
{
    int n = 5;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            printf("  ");
        }
        for(int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// Hollow Mirrored Right Triangle Star Pattern
int main()
{
    int n = 5;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            printf("  ");
        }
        for(int j = 0; j <= i; j++) {
            if(i == n - 1 || j == 0 || i == j) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}

// Inverted Right Triangle Star
int main()
{
    int n = 5;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// Hollow Inverted Right Triangle Star Pattern
int main()
{
    int n = 5;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i; j++) {
            if(i == 0 || j == 0 || i == n - j - 1) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}

// Inverted Mirrored Right Triangle Star Pattern
int main()
{
    int n = 5;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            printf("  ");
        }
        for(int j = 0; j < n - i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// Hollow Inverted Mirrored Right Triangle Star Pattern
int main()
{
    int n = 5;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            printf("  ");
        }
        for(int j = 0; j < n - i; j++) {
            if(i == 0 || j == 0 || i == n - j - 1) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}

// Pyramid Star Pattern
int main()
{
    int n = 5;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            printf("  ");
        }
        for(int j = 0; j < 2*i + 1; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// Hollow Pyramid Star Pattern
int main()
{
    int n = 5;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            printf("  ");
        }
        for(int j = 0; j < 2*i + 1; j++) {
            if(j == 0 || i == n - 1 || j == 2 * i) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}

// Inverted Pyramid Star Pattern
int main()
{
    int n = 5;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            printf("  ");
        }
        for(int j = 0; j < 2*(n - i) - 1; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// Hollow Inverted Pyramid Star Pattern
int main()
{
    int n = 5;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            printf("  ");
        }
        for(int j = 0; j < 2*(n - i) - 1; j++) {
            if(j == 0 || i == 0 || j == 2 * (n - i - 1)) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}

// Half Diamond Star Pattern
int main()
{
    int n = 5;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// Mirrored Half Diamond Star Pattern
int main()
{
    int n = 5;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for(int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    for(int i = n - 2; i >= 0; i--) {
        for(int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for(int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// Diamond Star Pattern
int main()
{
    int n = 5;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            printf("  ");
        }
        for(int j = 0; j <= 2*i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    for(int i = n - 2; i >= 0; i--) {
        for(int j = 0; j < n - i - 1; j++) {
            printf("  ");
        }
        for(int j = 0; j <= 2*i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// Hollow Diamond Star Pattern
int main()
{
    int n = 5;
    // Upper Half
    for(int i = 0; i < n; i++) {
        // First Half
        for(int j = 0; j < n; j++) {
            if(j < n - i) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        // Second Half
        for(int j = 0; j < n - i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Lower Half
    for(int i = n - 1; i >= 0; i--) {
        // First Half
        for(int j = 0; j < n; j++) {
            if(j < n - i) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        // Second Half
        for(int j = 0; j < n - i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// Right Arrow Star Pattern
int main()
{
    int n = 5;
    // Upper Half
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(j < i) {
                printf("  ");
            }
            else {
                printf("* ");
            }
        }
        printf("\n");
    }

    // Lower Half
    for(int i = n - 2; i >= 0; i--) {
        for(int j = 0; j < n; j++) {
            if(j < i) {
                printf("  ");
            }
            else {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}

// Left Arrow Star Pattern
int main()
{
    int n = 5;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            printf("  ");
        }
        for(int j = 0; j < n - i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    for(int i = n - 2; i >= 0; i--) {
        for(int j = 0; j < n - i - 1; j++) {
            printf("  ");
        }
        for(int j = 0; j < n - i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// Plus Star Pattern
int main()
{
    // n should be odd for desirable experience
    int n = 5;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(j == n / 2 || i == n / 2) {
                printf("+ ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}

// X Star Pattern
int main()
{
    int n = 5;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j || i == n - j - 1) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}

// Eight Star Pattern
int main()
{
    int n = 5;

    for(int i = 0; i < 2 * n - 1; i++) {
        for(int j = 0; j < n; j++) {
            if((j % (n - 1) != 0 || i % (n - 1) != 0) && (j == 0 || j == n - 1 || i == 0 || i == n - 1 || i == 2*(n - 1))) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}

// Heart Star Pattern

// Heart Star Pattern With Name

// List of Number Pattern Programming Exercises
// Square Number Patterns
int main()
{
    int n = 5;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", 1);
        }
        printf("\n");
    }
    return 0;
}

// Number Pattern 1
int main()
{
    int n = 5;
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", i%2);
        }
        printf("\n");
    }
    return 0;
}

// Number Pattern 2
int main()
{
    int n = 5;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            printf("%d ", j%2);
        }
        printf("\n");
    }
    return 0;
}

// Number Pattern 3
int main()
{
    int n = 5;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", i%(n - 1) == 0 || j %(n - 1) == 0);
        }
        printf("\n");
    }
    return 0;
}

// Number Pattern 4
int main()
{
    int n = 5;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", i != (n / 2) || j != (n / 2));
        }
        printf("\n");
    }
    return 0;
}

// Number Pattern 4
*/
int main()
{
    int n = 5;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", (i + j) % 2 == 0);
        }
        printf("\n");
    }
    return 0;
}
