#include <stdio.h>
/**
// 1.Write a C Program to Read and Print a RxC Matrix, R and C must be input by the
// User
// This program will read a two dimensional array (Matrix), number of rows (R) and
// number of columns (C) will be read through the User.
// Input : Enter number of Rows :3
// Enter number of Cols :3
// Output:Matrix is :
// 1 1 1
// 2 2 2
// 3 3 3
int main()
{
    int r, c;

    printf("Enter number of rows and columns: \n");
    scanf("%d %d", &r, &c);

    int mat[r][c];

    printf("Enter elements in matrix (row major): \n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Matrix is: \n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("\t%d", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// Write a C Program to Read a Matrix and find Sum and Product of all elements
// This program will read a matrix and prints sum and product of all elements of the two
// dimensional array.
// Input : Enter number of Rows :3
// Enter number of Cols :3
// Output:Matrix is :
// 1 1 1
// 2 2 2
// 3 3 3
// Sum :18
// Product: 216
int main()
{
    int r, c;

    printf("Enter number of rows and columns: \n");
    scanf("%d %d", &r, &c);

    int mat[r][c], sum = 0, prod = 1;

    printf("Enter elements in matrix (row major): \n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
            sum = sum + mat[i][j];
            prod = prod * mat[i][j];
        }
    }

    printf("\nSum: %d\nProduct: %d", sum, prod);
    return 0;
}

// .Write a C Program to find Sum of all elements of each row of a matrix
// This C program will read a Matrix (two dimensional arrays) and print the sum of all
// elements of each row
int main()
{
    int r, c;

    printf("Enter number of rows and columns: \n");
    scanf("%d %d", &r, &c);

    int mat[r][c];

    printf("Enter elements in matrix (row major): \n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for(int i = 0; i < r; i++) {
        int sum = 0;
        for(int j = 0; j < c; j++) {
            sum = sum + mat[i][j];
        }
            printf("\nRow %d Sum: %d", i+1, sum);
    }
    return 0;
}

// Write a C Program to Transpose a Matrix
// This C program will read a matrix and print its transpose matrix
int main()
{
    int r, c;

    printf("Enter number of rows and columns: \n");
    scanf("%d %d", &r, &c);

    int mat[r][c];

    printf("Enter elements in matrix (row major): \n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Transpose is: \n");
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++) {
            printf("\t%d", mat[j][i]);
        }
        printf("\n");
    }
    return 0;
}

// Write a C Program to Read a Matrix and Print Diagonals

// This C program will read a matrix of MxN dimensions and prints only diagonal’s
// elements of the matrix.
// Input:
// 1 1 1
// 2 2 2
// 3 3 3
// Output:
// 1
//   2
//     3
int main()
{
    int r, c;

    printf("Enter number of rows and columns: \n");
    scanf("%d %d", &r, &c);

    int mat[r][c];

    printf("Enter elements in matrix (row major): \n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Diagonal is: \n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(i == j) {
                printf("\t%d", mat[i][j]);
            }
            else {
                printf("\t");
            }
        }
        printf("\n");
    }
    return 0;
}

// Write a C Program to find sum and subtraction of two matrices
// This C program will read two matrices and find their sum (addition) and subtraction, in
// addition matrix addition of both matrices' elements will be assigned and in the
// subtraction matrix, subtraction of both matrices' elements will be assigned.
int main()
{
    int r, c;

    printf("Enter number of rows and columns: \n");
    scanf("%d %d", &r, &c);

    int mat[r][c], mat2[r][c];

    printf("Enter elements in matrix1 (row major): \n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Enter elements in matrix2 (row major): \n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("Matrix Addition is: \n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("\t%d", mat[i][j] + mat2[i][j]);
        }
        printf("\n");
    }

    printf("Matrix Subtraction is: \n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("\t%d", mat[i][j] - mat2[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// Write a C Program to find multiplication of two matrices
// This C program will read two matrices and make a third matrix, which will contain the
// multiplication of both input matrices.
int main()
{
    int r1, c1, r2, c2;

    printf("Enter number of rows and columns in first matrix: \n");
    scanf("%d %d", &r1, &c1);

    printf("Enter number of rows and columns in second matrix: \n");
    scanf("%d %d", &r2, &c2);

    if(c1 == r2) {
        int mat[r1][c1], mat2[r2][c2], mul[r1][c2];

        printf("Enter elements in matrix1 (row major): \n");
        for(int i = 0; i < r1; i++) {
            for(int j = 0; j < c1; j++) {
                scanf("%d", &mat[i][j]);
            }
        }

        printf("Enter elements in matrix2 (row major): \n");
        for(int i = 0; i < r2; i++) {
            for(int j = 0; j < c2; j++) {
                scanf("%d", &mat2[i][j]);
            }
        }

        printf("Multiplication of the matrices is:\n");
        // Multiplication logic
        for(int i = 0; i < r1; i++) {
            for(int j = 0; j < c2; j++) {
                mul[i][j] = 0;
                for(int k = 0; k < c1; k++) {
                    mul[i][j] = mul[i][j] + mat[i][k] * mat2[k][j];
                }
                printf("\t%d", mul[i][j]);
            }
            printf("\n");
        }
    }
    else {
        printf("\nNo of columns in first matrix should be equal to the no of rows in second matrix.");
    }
    return 0;
}

// Write a C Program to print lower diagonal of a matrix
// This C program will read a square matrix and print its lower diagonal.
// Output:
// Lower Triangular Matrix
// 2 0 0
// 4 5 0
// 6 7 8
int main()
{
    int r, c;

    printf("Enter number of rows and columns: \n");
    scanf("%d %d", &r, &c);

    int mat[r][c];

    printf("Enter elements in matrix (row major): \n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Lower Triangular Matrix is: \n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(i >= j) {
                printf("\t%d", mat[i][j]);
            }
            else {
                printf("\t%d", 0);
            }
        }
        printf("\n");
    }
    return 0;
}

// Write a C program to check a given matrix is an identity matrix or not
// Given a matrix, we have to check whether the matrix is an identity matrix or not using a
// C program.
// Input :
// Matrix 1
// 1 0 0
// 0 1 0 ==== output: matrix is an identity matrix
// 0 0 1
// Matrix 1
// 1 0 0
// 0 1 1 ==== output: matrix is not identity matrix
// 0 0 1
int main()
{
    int r, c, isIdentity = 1;

    printf("Enter number of rows and columns: \n");
    scanf("%d %d", &r, &c);

    if(r == c) {
        int mat[r][c];

        printf("Enter elements in matrix (row major): \n");
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                scanf("%d", &mat[i][j]);
                isIdentity = isIdentity ? (i == j) ? mat[i][j] == 1 : mat[i][j] == 0 : isIdentity;
            }
        }

        if(isIdentity) {
            printf("\nMatrix is Identity Matrix.");
        }
        else {
            printf("\nMatrix is not an Identity Matrix.");
        }

    }
    else {
        printf("\nSince it is not a square matrix it is not a Identity Matrix.");
    }
    return 0;
}

// Write a C program to check two matrices are identical or not
// Given two matrices, we have to check whether they are identical or not using C program
// Input
// Matrix 1
// 1 1 1
// 2 2 2
// 3 3 3
// Matrix 2
// 1 1 1
// 2 2 2
// 3 3 3
// Output: both are identical
int main()
{
    int r1, c1, r2, c2, isIdentical = 1;

    printf("Enter number of rows and columns in first matrix: \n");
    scanf("%d %d", &r1, &c1);

    printf("Enter number of rows and columns in second matrix: \n");
    scanf("%d %d", &r2, &c2);

    if(r1 == r2 && c1 == c2) {
        int mat[r1][c1], mat2[r2][c2];

        printf("Enter elements in matrix1 (row major): \n");
        for(int i = 0; i < r1; i++) {
            for(int j = 0; j < c1; j++) {
                scanf("%d", &mat[i][j]);
            }
        }

        printf("Enter elements in matrix2 (row major): \n");
        for(int i = 0; i < r2; i++) {
            for(int j = 0; j < c2; j++) {
                scanf("%d", &mat2[i][j]);
                isIdentical = isIdentical ? mat[i][j] == mat2[i][j] : isIdentical;
            }
        }

        if(isIdentical) {
            printf("\nMatrices are identical.");
        }
        else {
            printf("\nMatrices are non identical.");
        }
    }
    else {
        printf("\nNo of rows and columns are not identical thereby making the matrix non identical.");
    }
    return 0;
}

// Write a C program to check a given matrix is a sparse matrix or not
// Given a matrix, we have to check whether the matrix is a sparse matrix or not using a C
// program.
// Matrix 1:
// Enter the elements of the matrix:
// 4 5 6
// 7 0 0
// 0 0 0
// Output : Matrix is a Sparse Matrix
// Matrix 2:
// Enter the elements of the matrix:
// 1 2 3
// 4 5 6
// 7 8 9
// Output : Matrix is not a Sparse Matrix
int main()
{
    int r, c, zeros = 0;

    printf("Enter number of rows and columns: \n");
    scanf("%d %d", &r, &c);

    int mat[r][c];

    printf("Enter elements in matrix (row major): \n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
            if(mat[i][j] == 0) {
                zeros ++;
            }
        }
    }

    if(r * c - zeros < zeros) {
        printf("\nMatrix is a Sparse Matrix.");
    }
    else {
        printf("\nMatrix is not a Sparse Matrix.");
    }
    return 0;
}

*/







