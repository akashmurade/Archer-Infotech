#include <stdio.h>
#include <stdlib.h>
/**
// Size of pointer
int main()
{
    char ch;
    int i;
    float f;
    double d;

    char *chp = &ch;
    int *ip = &i;
    float *fp = &f;
    double *dp = & d;

    printf("\nSize of Character Pointer: %d", sizeof(chp));
    printf("\nSize of Integer Pointer: %d", sizeof(ip));
    printf("\nSize of Float Pointer: %d", sizeof(fp));
    printf("\nSize of Double Pointer: %d", sizeof(dp));

    return 0;
}

// Pointer to a variable
int main()
{
    int i = 10;
    int *p;
    p = &i;
    printf("\nAddress of i: %u", &i);
    printf("\nValue of p: %u", p);
    return 0;
}

// Accessing value of a variable using pointer
int main()
{
    int i = 65;
    int *p;
    p = &i;
    printf("\nValue of i: %d", i);
    printf("\nValue at address p: %d", *p);
    return 0;
}

// Accessing value of a variable using pointer pointing to its pointer
int main()
{
    int i = 65;
    int *p;
    p = &i;
    printf("\nValue of i: %d", i);
    printf("\nValue at address p: %d", *p);

    int* *q;
    q = &p;
    printf("\nValue at address (Value at address p): %d", **q);
    return 0;
}

// WAP to input percentage of marks of N students in HSC and display it.
int main()
{
    int cnt;

    printf("Enter number of students: ");
    scanf("%d", &cnt);

    float *p = (float*)malloc(sizeof(float) * cnt);

    printf("Enter percentage of %d students: \n", cnt);
    for(int i = 0; i < cnt; i++) {
        scanf("%f", (p + i));
    }

    printf("\nPercentage List: \n");
    for(int i = 0; i < cnt; i++) {
        printf("\n%.2f", *(p + i));
    }
    return 0;
}

// Enter n numbers through keyboard and find the sum & average of those numbers
int main()
{
    int n, sum = 0;
    float avg;
    printf("Enter number of numbers: ");
    scanf("%d", &n);

    int *nums = malloc(sizeof(int) * n);

    printf("Enter %d numbers: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", nums + i);
        sum = sum + *(nums + i);
    }

    avg = sum / (float)n;

    printf("\nSum of numbers: %d\nAverage of numbers: %.2f", sum, avg);
    return 0;
}

// input n numbers and coount prime numbers from it
int main()
{
    int n;
    printf("Enter number of numbers: ");
    scanf("%d", &n);

    int pcnt = n;
    int *nums = malloc(sizeof(int) * n);

    printf("Enter %d numbers: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", nums + i);
        int no = *(nums + i);
        if(no < 2) {
            pcnt--;
        }
        for(int j = 2; j <= no / 2; j++) {
            if(no % j == 0) {
                pcnt--;
                break;
            }
        }
    }

    printf("\nCount of Prime numbers: %d", pcnt);
    return 0;
}

// Enter two different collections of integers having n and m elements and display intersection of both
int main()
{
    int n, sum = 0;
    float avg;
    printf("Enter number of numbers: ");
    scanf("%d", &n);

    int *nums = malloc(sizeof(int) * n);

    printf("Enter %d numbers: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", nums + i);
        sum = sum + *(nums + i);
    }

    avg = sum / (float)n;

    printf("\nSum of numbers: %d\nAverage of numbers: %.2f", sum, avg);
    return 0;
}

// input n numbers and coount prime numbers from it
int main()
{
    int n, m;
    int *p, *q;
    
    printf("Enter number of numbers for first collection: ");
    scanf("%d", &n);
    p = (int *)malloc(sizeof(int) * n);

    printf("Enter %d numbers: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    printf("Enter number of numbers for second collection: ");
    scanf("%d", &m);
    q = (int *)malloc(sizeof(int) * m);

    printf("Enter %d numbers: ", m);
    for(int i = 0; i < m; i++) {
        scanf("%d", q + i);
    }

    // Replacing duplicate elements with -1
    for(int i = 0; i < n; i++) {
        if(*(p + i) != -1) {
            for(int j = i + 1; j < n; j++) {
                if(*(p + i) == *(p + j)) {
                    *(p + j) = -1;
                }
            }
        }
    }

    // Intersection print
    printf("\nIntersection:");
    for(int i = 0; i < n; i++) {
        if(*(p + i) != -1) {
            for(int j = 0; j < m; j++) {
                if(*(p + i) == *(q + j)) {
                    printf("\t%d", *(p + i));
                    break;
                }
            }
        }
    }

    return 0;
}

// Enter runs scored by 7 players in different matches and display man of the series
int main()
{
    int noOfMatches[7], momn = 0, maxRuns = 0;
    int *runs[7];

    printf("\nMan of the Series");
    for(int i = 0; i < 7; i++) {
        printf("\nEnter no of matches played by Player %d: ", i + 1);
        scanf("%d", noOfMatches + i);

        runs[i] = (int *)malloc(sizeof(int) * noOfMatches[i]);
        printf("Enter runs for %d matches:\n", noOfMatches[i]);
        int totRuns = 0;
        for(int j = 0; j < noOfMatches[i]; j++) {
            scanf("%d", *(runs + i) + j);
            totRuns  = totRuns + *(*(runs + i) + j);
        }
        if(totRuns > maxRuns) {
            momn = i + 1;
            maxRuns = totRuns;
        }
    }

    printf("\nMan of the Series is Player %d with total runs %d", momn, maxRuns);
    return 0;
}

// Selection Sort using Pointer
int main()
{
    int n, i;
    printf("Enter number of numbers: ");
    scanf("%d", &n);

    int *p = (int *)malloc(sizeof(int) * n);

    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    printf("After Selection Sort: ");
    for(i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(*(p + i) > *(p + j)) {
                int temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
        printf("\t%d", *(p + i));
    }
    printf("\t%d", *(p + i));
    return 0;
}

// Enter 4 student marks with different number of subjects
int main()
{
    int *student[4];
    int sc[4];

    for(int i = 0; i < 4; i++) {
        printf("\nDetails for Student %d:\n", i + 1);
        printf("Enter number of subjects: ");
        scanf("%d", sc + i);
        student[i] = (int *)malloc(sizeof(int) * *(sc + i));
        printf("Enter marks for %d subjects:\n", *(sc + i));
        for(int j = 0; j < *(sc + i); j++) {
            scanf("%d", *(student + i) + j);
        }
    }

    printf("\n-----Student Details-----");
    for(int i = 0; i < 4; i++) {
        printf("\nStudent %d: ", i + 1);
        for(int j = 0; j < *(sc + i); j++) {
            printf("\t%d", *(*(student + i) + j));
        }
    }
    return 0;
}

// Enter student details with n students and 5 subjects each
int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    int (*p)[5] = (int (*)[])malloc(sizeof(int) * 5 * n);

    printf("Enter %d Student details\n", n);
    for(int i = 0; i < n; i++) {
        printf("Enter marks for 5 subjects for Student %d: \n", i + 1);
        for(int j = 0; j < 5; j++) {
            scanf("%d", *(p + i) + j);
        }
    }

    printf("Student Details");
    for(int i = 0; i < n; i++) {
        printf("\nStudent %d: ", i + 1);
        for(int j = 0; j < 5; j++) {
            printf("\t%d", *(*(p + i) + j));
        }
    }
    return 0;
}

// Enter number of students and number of subjects for each student and display student details
int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    int *sc = (int *)malloc(sizeof(int) * n);
    int **student = (int **)malloc(sizeof(int*) * n);
    for(int i = 0; i < n; i++) {
        printf("Enter number of subjects for student %d: ", i + 1);
        scanf("%d", sc + i);
        *(student + i) = (int *)malloc(sizeof(int) * *(sc + i));
        printf("Enter marks for %d subjects:\n", *(sc + i));
        for(int j = 0; j < *(sc + i); j++) {
            scanf("%d", *(student + i) + j);
        }
    }

    printf("\nStudent Details");
    for(int i = 0; i < n; i++) {
        printf("\nStudent %d: ", i + 1);
        for(int j = 0; j < *(sc + i); j++) {
            printf("\t%d", *(*(student + i) + j));
        }
    }
    return 0;
}

// 2D Array
*/
int main()
{
    int mat[3][4];
    printf("Enter elements for 3X4 Matrix: ");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            scanf("%d", *(mat + i) + j);
        }
    }

    printf("Matrix is\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            printf("\t%d", *(*(mat + i) + j));
        }
        printf("\n");
    }
    return 0;
}



