#include <iostream>
using namespace std;

// Recursive function
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;              // Base condition
    else
        return n * factorial(n - 1);  // Recursive call
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 0)
    {
        cout << "Factorial is not defined for negative numbers.";
    }
    else
    {
        cout << "Factorial of " << num << " = " << factorial(num);
    }

    return 0;
}
