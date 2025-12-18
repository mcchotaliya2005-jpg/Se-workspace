#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    bool isPalindrome = true;

    cout << "Enter a string: ";
    cin >> str;

    int len = str.length();

    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "The string is a Palindrome.";
    else
        cout << "The string is NOT a Palindrome.";

    return 0;
}
