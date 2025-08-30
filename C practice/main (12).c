
#include <stdio.h>
#include <conio.h>

int main() {
    int choice;
    float base, height, length, breadth, radius, area;

    printf("------ MENU ------\n");
    printf("1. Area of Triangle\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Circle\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Area of Triangle = 1/2 * base * height
        printf("Enter base and height of triangle: ");
        scanf("%f %f", &base, &height);
        area = 0.5 * base * height;
        printf("Area of Triangle = %.2f\n", area);
    }
    else if (choice == 2) {
        // Area of Rectangle = length * breadth
        printf("Enter length and breadth of rectangle: ");
        scanf("%f %f", &length, &breadth);
        area = length * breadth;
        printf("Area of Rectangle = %.2f\n", area);
    }
    else if (choice == 3) {
        // Area of Circle = 3.14 * r * r
        printf("Enter radius of circle: ");
        scanf("%f", &radius);
        area = 3.14 * radius * radius;
        printf("Area of Circle = %.2f\n", area);
    }
    else {
        printf("Invalid Choice! Please select between 1-3.\n");
    }

    return 0;
}