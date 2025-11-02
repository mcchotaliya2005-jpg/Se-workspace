#include <stdio.h>  // Header file for input/output

// Function declaration (prototype)
int factorial(int n);

int main() {
    int num, result;

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Function call
    result = factorial(num);

    // Displaying the result
    printf("Factorial of %d is: %d\n", num, result);

    return 0;  // End of program
}

// Function definition
int factorial(int n) {
    int i, fact = 1;

    // Loop to calculate factorial
    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;  // Returning the result
}