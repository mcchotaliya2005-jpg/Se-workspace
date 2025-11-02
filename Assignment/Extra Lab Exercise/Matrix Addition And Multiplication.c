#include <stdio.h>

int main() {
    int a[3][3], b[3][3], sum[3][3], product[3][3];
    int i, j, k;
    int size;

    // Step 1: Ask user which matrix size to use
    printf("Enter matrix size (2 for 2x2, 3 for 3x3): ");
    scanf("%d", &size);

    // Step 2: Input elements for Matrix A
    printf("\nEnter elements of Matrix A (%dx%d):\n", size, size);
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    // Step 3: Input elements for Matrix B
    printf("\nEnter elements of Matrix B (%dx%d):\n", size, size);
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("B[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    // Step 4: Add the matrices
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Step 5: Display result of addition
    printf("\nResultant Matrix after Addition:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    // Step 6 (Challenge): Perform Matrix Multiplication
    if (size == 3) {
        // Initialize product matrix with 0
        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++)
                product[i][j] = 0;

        // Multiplication logic
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                for (k = 0; k < 3; k++) {
                    product[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        // Display product matrix
        printf("\nResultant Matrix after Multiplication:\n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                printf("%d\t", product[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}