#include <stdio.h>

int main() {
    int n, i, j, count;

    // Step 1: Check if a single number is prime
    printf("Enter a number: ");
    scanf("%d", &n);

    int isPrime = 1;  // assume number is prime initially

    if (n <= 1) {
        isPrime = 0;  // 0 and 1 are not prime
    } else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a Prime Number.\n", n);
    else
        printf("%d is NOT a Prime Number.\n", n);

    // Step 2: Print all prime numbers from 1 to n
    printf("\nPrime numbers between 1 and %d are:\n", n);

    for (i = 2; i <= n; i++) {
        count = 0;
        for (j = 1; j <= i; j++) {
            if (i % j == 0)
                count++;
        }
        if (count == 2)  // A prime number has exactly 2 divisors
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}