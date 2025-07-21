#include <iostream>
using namespace std;

int main() {
    double balance = 1000.0;
    int choice;
    double amount;

    do {
        cout << "\nATM Menu:\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Current balance: $" << balance << endl;
                break;

            case 2:
                cout << "Enter deposit amount: ";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Amount deposited.\n";
                } else {
                    cout << "Invalid deposit amount.\n";
                }
                break;

            case 3:
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout << "Amount withdrawn.\n";
                } else if (amount > balance) {
                    cout << "Insufficient balance.\n";
                } else {
                    cout << "Invalid withdrawal amount.\n";
                }
                break;

            case 4:
                cout << "Thank you for using the ATM.\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}
