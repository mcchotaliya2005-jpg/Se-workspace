#include <iostream>
using namespace std;

// Function declarations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int main()
{
    int num1, num2, choice;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "\nChoose operation:" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Result = " << add(num1, num2);
            break;

        case 2:
            cout << "Result = " << subtract(num1, num2);
            break;

        case 3:
            cout << "Result = " << multiply(num1, num2);
            break;

        case 4:
            if (num2 != 0)
                cout << "Result = " << divide(num1, num2);
            else
                cout << "Division by zero is not allowed!";
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}

// Function definitions
int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

float divide(int a, int b)
{
    return (float)a / b;
}
