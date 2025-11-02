#include <stdio.h>

// Function to reverse a string without using string library functions
void reverseString(char str[]) {
    int length = 0, i;
    char temp;

    // Find the length of string manually
    while (str[length] != '\0') {
        length++;
    }

    // Reverse logic
    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    printf("Reversed String: %s\n", str);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str); // using gets for easy input (unsafe in real code)

    reverseString(str);

    return 0;
}