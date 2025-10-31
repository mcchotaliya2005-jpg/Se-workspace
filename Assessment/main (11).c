#include <stdio.h>

// Function to input a matrix
void inputMatrix(int matrix[10][10], int row, int col, char name) {
    printf("\nEnter elements of Matrix %c (%d x %d):\n", name, row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Enter element %c[%d][%d]: ", name, i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[10][10], int row, int col, char name) {
    printf("\nMatrix %c (%d x %d):\n", name, row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to multiply two matrices
void multiplyMatrix(int A[10][10], int B[10][10], int result[10][10],
                    int r1, int c1, int c2) {
    // Initialize result matrix to 0
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // Perform multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[10][10], B[10][10], result[10][10];
    int r1, c1, r2, c2;

    printf("=== Matrix Multiplication Program ===\n");

    // Input dimensions for first matrix
    printf("\nEnter rows and columns for Matrix A: ");
    scanf("%d%d", &r1, &c1);

    // Input dimensions for second matrix
    printf("Enter rows and columns for Matrix B: ");
    scanf("%d%d", &r2, &c2);

    // Validate multiplication condition
    if (c1 != r2) {
        printf("\nError: Matrix multiplication not possible!\n");
        printf("Columns of A must be equal to rows of B.\n");
        return 0;
    }

    // Take input for both matrices
    inputMatrix(A, r1, c1, 'A');
    inputMatrix(B, r2, c2, 'B');

    // Display input matrices
    displayMatrix(A, r1, c1, 'A');
    displayMatrix(B, r2, c2, 'B');

    // Multiply matrices
    multiplyMatrix(A, B, result, r1, c1, c2);

    // Display result matrix
    printf("\n=== Resultant Matrix After Multiplication ===\n");
    displayMatrix(result, r1, c2, 'R');

    printf("\nProgram completed successfully.\n");
    return 0;
}
