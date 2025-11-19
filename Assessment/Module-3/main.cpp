#include <iostream>
#include <ctime>
using namespace std;

class ATM {
private:
    int pin;
    double balance;

    // 🔹 Helper function for safe numeric input
    double getValidAmount() {
        double amount;
        while (true) {
            cin >> amount;

            // If input is valid → return it
            if (!cin.fail() && amount >= 0) {
                return amount;
            }

            // If invalid → clear flags & ignore wrong input
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input! Please enter a valid number: ";
        }
    }

public:
    // Constructor
    ATM() {
        pin = 12345;
        balance = 20000;
    }

    // Welcome screen
    void welcomeScreen() {
        time_t now = time(0);
        char* dt = ctime(&now);
        cout << "==============================" << endl;
        cout << "      WELCOME TO ATM BANK     " << endl;
        cout << "Current Date & Time: " << dt << endl;
        cout << "==============================" << endl;
    }

    // PIN verification
    bool verifyPIN() {
        int userPin;
        cout << "\nEnter ATM PIN: ";
        cin >> userPin;

        if (userPin == pin) {
            cout << "PIN Verified Successfully!" << endl;
            return true;
        } else {
            cout << "Incorrect PIN! Exiting..." << endl;
            return false;
        }
    }

    // Deposit money
    void deposit() {
        cout << "\nEnter amount to deposit: ₹";
        double depositAmount = getValidAmount();

        balance += depositAmount;
        cout << "Amount Deposited Successfully!" << endl;
        cout << "Updated Balance: ₹" << balance << endl;
    }

    // Withdraw money
    void withdraw() {
        cout << "\nEnter amount to withdraw: ₹";
        double withdrawAmount = getValidAmount();

        if (withdrawAmount > balance) {
            cout << "Unsuccessful Withdrawal! Insufficient Balance." << endl;
        } else {
            balance -= withdrawAmount;
            cout << "Withdrawal Successful!" << endl;
            cout << "Remaining Balance: ₹" << balance << endl;
        }
    }

    // Check balance
    void checkBalance() {
        cout << "\nYour Current Balance: ₹" << balance << endl;
    }

    // Help screen
    void helpScreen() {
        cout << "\n========= HELP SCREEN =========" << endl;
        cout << "1. Use ATM PIN (12345) to login." << endl;
        cout << "2. Deposit money to add funds." << endl;
        cout << "3. Withdraw money if balance is sufficient." << endl;
        cout << "4. Check balance anytime." << endl;
        cout << "5. Exit to end session." << endl;
        cout << "===============================" << endl;
    }
};

// Menu Function
void displayMenu() {
    cout << "\n===== MAIN MENU =====" << endl;
    cout << "1. Deposit Money" << endl;
    cout << "2. Withdraw Money" << endl;
    cout << "3. Check Balance" << endl;
    cout << "4. Help" << endl;
    cout << "5. Exit" << endl;
    cout << "=====================" << endl;
}

int main() {
    ATM user;
    user.welcomeScreen();

    int choice;
    if (!user.verifyPIN()) {
        return 0;
    }

    do {
        displayMenu();
        cout << "\nEnter your choice: ";
        cin >> choice;

        // Validate numeric menu choice
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid Choice! Enter number only." << endl;
            continue;
        }

        switch (choice) {
            case 1:
                user.deposit();
                break;
            case 2:
                user.withdraw();
                break;
            case 3:
                user.checkBalance();
                break;
            case 4:
                user.helpScreen();
                break;
            case 5:
                cout << "\nThank you for using ATM Banking System!" << endl;
                break;
            default:
                cout << "Invalid Choice! Try Again." << endl;
        }
    } while (choice != 5);

    return 0;
}
