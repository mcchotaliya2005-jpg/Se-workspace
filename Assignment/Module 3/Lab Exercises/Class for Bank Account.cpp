#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance;   // Private data member (Encapsulation)

public:
    // Constructor
    BankAccount()
    {
        balance = 0.0;
    }

    // Deposit function
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Amount Deposited: " << amount << endl;
        }
        else
        {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Withdraw function
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Amount Withdrawn: " << amount << endl;
        }
        else
        {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    // Display balance
    void showBalance()
    {
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account;

    account.deposit(5000);
    account.withdraw(2000);
    account.showBalance();

    return 0;
}
