#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter student marks (0-100): ";
    cin >> marks;

    if (marks >= 90 && marks <= 100)
    {
        cout << "Grade: A";
    }
    else if (marks >= 75 && marks < 90)
    {
        cout << "Grade: B";
    }
    else if (marks >= 60 && marks < 75)
    {
        cout << "Grade: C";
    }
    else if (marks >= 40 && marks < 60)
    {
        cout << "Grade: D";
    }
    else if (marks >= 0 && marks < 40)
    {
        cout << "Grade: F (Fail)";
    }
    else
    {
        cout << "Invalid marks entered!";
    }

    return 0;
}
