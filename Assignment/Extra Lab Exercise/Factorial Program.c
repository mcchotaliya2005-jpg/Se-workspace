#include <stdio.h>
#include <time.h>  // for measuring performance

// Function for Iterative Factorial
long long factorial_iterative(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function for Recursive Factorial
long long factorial_recursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial_recursive(n - 1);
}

int main() {
    int n;
    long long result;
    clock_t start, end;
    double time_iterative, time_recursive;

    // Step 1: Input number
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }

    // Step 2: Calculate factorial using iterative method
    start = clock();
    result = factorial_iterative(n);
    end = clock();
    time_iterative = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("\nIterative Factorial of %d = %lld", n, result);
    printf("\nTime taken (Iterative) = %.6f seconds\n", time_iterative);

    // Step 3: Calculate factorial using recursive method
    start = clock();
    result = factorial_recursive(n);
    end = clock();
    time_recursive = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("\nRecursive Factorial of %d = %lld", n, result);
    printf("\nTime taken (Recursive) = %.6f seconds\n", time_recursive);

    // Step 4: Compare performance
    printf("\n\nPerformance Comparison:");
    if (time_iterative < time_recursive)
        printf("\n→ Iterative method is faster.");
    else if (time_iterative > time_recursive)
        printf("\n→ Recursive method is faster.");
    else
        printf("\n→ Both methods took almost the same time.");

    printf("\n");

    return 0;
}