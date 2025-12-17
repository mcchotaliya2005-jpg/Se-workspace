#include <iostream>
using namespace std;

int main()
{
    // Implicit Type Conversion
    int a = 10;
    float b = 3.5;
    float result1;

    result1 = a + b;   // int automatically converted to float

    // Explicit Type Conversion (Type Casting)
    float x = 9.7;
    int y;

    y = (int)x;        // float explicitly converted to int

    cout << "Implicit Conversion Result = " << result1 << endl;
    cout << "Explicit Conversion Result = " << y << endl;

    return 0;
}
