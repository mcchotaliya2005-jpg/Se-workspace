#include <iostream>
using namespace std;

// Global variable
int globalVar = 100;

void display()
{
    // Local variable
    int localVar = 50;

    cout << "Inside display() function" << endl;
    cout << "Global Variable = " << globalVar << endl;
    cout << "Local Variable = " << localVar << endl;
}

int main()
{
    cout << "Inside main() function" << endl;
    cout << "Global Variable = " << globalVar << endl;

    // cout << localVar;  // Error: localVar not accessible here

    display();

    return 0;
}
