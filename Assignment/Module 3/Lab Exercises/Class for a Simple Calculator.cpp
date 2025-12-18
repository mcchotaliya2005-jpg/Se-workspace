#include <iostream>
using namespace std;

class Calculator
{
public:
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
        if (b != 0)
            return (float)a / b;
        else
        {
            cout << "Division by zero not allowed!" << endl;
            return 0;
        }
    }
};

int main()
{
    Calculator calc;
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Addition = " << calc.add(x, y) << endl;
    cout << "Subtraction = " << calc.subtract(x, y) << endl;
    cout << "Multiplication = " << calc.multiply(x, y) << endl;
    cout << "Division = " << calc.divide(x, y) << endl;

    return 0;
}
