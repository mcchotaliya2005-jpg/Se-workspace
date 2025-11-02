#include <stdio.h>

int main() {
    int arr[10];
    int i, j, temp;
    int max, min;

    // Step 1: Input 10 integers
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Step 2: Initialize max and min
    max = min = arr[0];

    // Step 3: Find maximum and minimum
    for (i = 1; i < 10; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    // Step 4: Display max and min
    printf("\nMaximum value = %d", max);
    printf("\nMinimum value = %d\n", min);

    // Step 5 (Challenge): Sort the array in ascending order
    for (i = 0; i < 10 - 1; i++) {
        for (j = i + 1; j < 10; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Step 6: Display the sorted array
    printf("\nArray in Ascending Order:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}