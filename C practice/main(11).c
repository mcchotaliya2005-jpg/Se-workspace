
#include <stdio.h>
#include <conio.h>

int main()
{
   int choice;
    float a, b, result;

    // Menu Driven Program
    printf("\n---- MENU ----\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch(choice)   // When / Switch Case
    {
        case 1:
            result = a + b;
            printf("Addition = %.2f\n", result);
            break;

        case 2:
            result = a - b;
            printf("Subtraction = %.2f\n", result);
            break;

        case 3:
            result = a * b;
            printf("Multiplication = %.2f\n", result);
            break;

        case 4:
            if(b != 0)
            {
                result = a / b;
                printf("Division = %.2f\n", result);
            }
            else
            {
                printf("Error! Division by zero not allowed.\n");
            }
            break;

        default:
            printf("Invalid Choice! Please select 1 to 4.\n");
    }

    return 0;
    
}