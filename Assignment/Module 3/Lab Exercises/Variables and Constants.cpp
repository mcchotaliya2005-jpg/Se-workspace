#include <iostream>
using namespace std;

int main()
{
    // Variables
    int age = 20;
    float height = 5.8;
    char grade = 'A';

    // Constant
    const float PI = 3.14;

    // Operations using variables and constant
    float circleArea = PI * height * height;

    cout << "Age = " << age << endl;
    cout << "Height = " << height << endl;
    cout << "Grade = " << grade << endl;
    cout << "Area of Circle = " << circleArea << endl;

    return 0;
}
