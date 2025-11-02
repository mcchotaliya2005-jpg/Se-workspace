#include <stdio.h>
#include <string.h> // for string handling

// Function to check if a number is a palindrome
int isNumberPalindrome(int num) {
    int original = num, reversed = 0, remainder;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (original == reversed)
        return 1; // palindrome
    else
        return 0; // not palindrome
}

// Function to check if a string is a palindrome
int isStringPalindrome(char str[]) {
    int i, len;
    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1])
            return 0; // not palindrome
    }
    return 1; // palindrome
}

int main() {
    int num, choice;
    char str[100];

    printf("Choose an option:\n");
    printf("1. Check Number Palindrome\n");
    printf("2. Check String Palindrome\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // For number palindrome
        printf("\nEnter a number: ");
        scanf("%d", &num);

        if (isNumberPalindrome(num))
            printf("%d is a Palindrome Number.\n", num);
        else
            printf("%d is NOT a Palindrome Number.\n", num);
    } 
    else if (choice == 2) {
        // For string palindrome
        printf("\nEnter a string: ");
        scanf("%s", str); // read word input

        if (isStringPalindrome(str))
            printf("\"%s\" is a Palindrome String.\n", str);
        else
            printf("\"%s\" is NOT a Palindrome String.\n", str);
    } 
    else {
        printf("Invalid choice! Please select 1 or 2.\n");
    }

    return 0;
}