#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length, width;

public:
    void getData()
    {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter width: ";
        cin >> width;
    }

    void calculateArea()
    {
        cout << "Area of Rectangle = " << length * width;
    }
};

int main()
{
    Rectangle r;
    r.getData();
    r.calculateArea();

    return 0;
}
