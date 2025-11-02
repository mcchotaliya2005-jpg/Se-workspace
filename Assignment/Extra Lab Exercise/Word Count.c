#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, wordCount = 0, length = 0, maxLen = 0, start = 0, end = 0;

    printf("Enter a sentence: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            length++;
        } else {
            if (length > 0) {
                wordCount++;
                if (length > maxLen) {
                    maxLen = length;
                    end = i - 1;
                    start = i - length;
                }
                length = 0;
            }
        }
    }

    // For last word
    if (length > 0) {
        wordCount++;
        if (length > maxLen) {
            maxLen = length;
            end = i - 1;
            start = i - length;
        }
    }

    printf("\nTotal Words: %d", wordCount);

    printf("\nLongest Word: ");
    for (i = start; i <= end; i++) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}