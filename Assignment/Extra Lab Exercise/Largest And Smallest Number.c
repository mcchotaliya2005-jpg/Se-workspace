#include <stdio.h>

int main() {
    int a, b, c;
    int largest, smallest;
    int choice;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("\nChoose method to find largest and smallest:\n");
    printf("1. Using if-else\n");
    printf("2. Using switch-case\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // Using if-else
            if (a > b && a > c)
                largest = a;
            else if (b > a && b > c)
                largest = b;
            else
                largest = c;

            if (a < b && a < c)
                smallest = a;
            else if (b < a && b < c)
                smallest = b;
            else
                smallest = c;

            printf("\nUsing if-else:\n");
            printf("Largest number = %d\n", largest);
            printf("Smallest number = %d\n", smallest);
            break;

        case 2:
            // Using switch-case (logic through comparison results)
            largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
            smallest = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

            printf("\nUsing switch-case:\n");
            printf("Largest number = %d\n", largest);
            printf("Smallest number = %d\n", smallest);
            break;

        default:
            printf("Invalid choice! Please enter 1 or 2.\n");
            break;
    }

    return 0;
}