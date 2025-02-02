import java.util.Scanner;

public class Matrix {

    // prints the Matrix
    public static void printMat(int mat[][]) {
        for(int i = 0; i < mat.length; i++) {
            for(int j = 0; j < mat[i].length; j++) {
                System.out.print(mat[i][j] + " ");
            }
            System.out.println();
        }
    }

    // input matrix
    public static int[][] inputMat() {
        Scanner sc = new Scanner(System.in);
    
        System.out.println("Enter number of rows and columns: ");
        int rows = sc.nextInt(), cols = sc.nextInt();
        int mat[][] = new int[rows][cols];

        System.out.println("Enter elements: ");
        for(int i = 0; i < mat.length; i++) {
            for(int j = 0; j < mat[i].length; j++) {
                mat[i][j] = sc.nextInt();
            }
        }
        sc.close();
        return mat;
    }

    // transposes the matrix if it is a square matrix
    public static void transpose(int mat[][]) {
        for(int i = 0; i < mat.length; i++) {
            for(int j = i + 1; j < mat[i].length; j++) {
                int temp = mat[i][j];
                mat[i][j] = mat[j][i];
                mat[j][i] = temp;
            }
        }
    }

    public static void main(String[] args) {
        // Matrix declaration
        // int mat[][];

        // Matrix Memory Allocation
        // int mat[][] = new int[2][2]; // a two by two matrix

        // Matrix Initialization
        // int mat[][]= {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};
        
        // Matrix Traversal
        // int mat[][]= {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};
        // printMat(mat);

        // Matrix Transpose along with input
        // int mat[][] = inputMat();

        // transpose(mat);

        // System.out.println("Transposed Matrix: ");
        // printMat(mat);

        // Matrix Multiplication
        
    }
}
