#include <iostream>
#include <ctime>
using namespace std;

class ATM {
private:
    int pin;
    double balance;

public:
    // Constructor
    ATM() {
        pin = 12345;
        balance = 20000;  // Present Account Balance
    }

    // Function to display welcome screen
    void welcomeScreen() {
        time_t now = time(0);
        char* dt = ctime(&now);
        cout << "==============================" << endl;
        cout << "      WELCOME TO ATM BANK     " << endl;
        cout << "Current Date & Time: " << dt << endl;
        cout << "==============================" << endl;
    }

    // Function to verify PIN
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

    // Function to deposit money
    void deposit() {
        double depositAmount;
        cout << "\nEnter amount to deposit: ₹";
        cin >> depositAmount;
        balance += depositAmount;
        cout << "Amount Deposited Successfully!" << endl;
        cout << "Updated Balance: ₹" << balance << endl;
    }

    // Function to withdraw money
    void withdraw() {
        double withdrawAmount;
        cout << "\nEnter amount to withdraw: ₹";
        cin >> withdrawAmount;

        if (withdrawAmount > balance) {
            cout << "Unsuccessful Withdrawal! Insufficient Balance." << endl;
        } else {
            balance -= withdrawAmount;
            cout << "Withdrawal Successful!" << endl;
            cout << "Remaining Balance: ₹" << balance << endl;
        }
    }

    // Function to check balance
    void checkBalance() {
        cout << "\nYour Current Balance: ₹" << balance << endl;
    }

    // Help Screen
    void helpScreen() {
        cout << "\n========= HELP SCREEN =========" << endl;
        cout << "1. Use your ATM PIN (12345) to log in." << endl;
        cout << "2. Deposit money to add funds." << endl;
        cout << "3. Withdraw money if balance is available." << endl;
        cout << "4. Check balance anytime." << endl;
        cout << "5. Exit to end the session." << endl;
        cout << "===============================" << endl;
    }
};

// Scope Resolution Operator Example
void displayMenu();

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