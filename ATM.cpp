#include <iostream>

using namespace std;

int main() {
    // Initialize variables
    int balance = 5475821;
    int withdrawAmount, depositAmount;
    int option;

    // Display menu and prompt for option
    cout << "Welcome to the ATM!" << endl;
    cout << "1. Your account number " << endl;
    cout << "2. Withdraw Money" << endl;
    cout << "3. Deposit Money" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your option: ";
    cin >> option;

    // Process user's choice
    switch (option) {
        case 1:
            // Check Balance
            cout << "Your account number is : $" << balance << endl;
            break;
        case 2:
            // Withdraw Money
            cout << "Enter the euro to withdraw: $";
            cin >> withdrawAmount;
            if (withdrawAmount <= balance) {
                balance -= withdrawAmount;
                cout << "Withdrawal successful. Your new balance is: $" << balance << endl;
            } else {
                cout << "Insufficient balance." << endl;
            }
            break;
        case 3:
            // Deposit Money
            cout << "Enter the amount to deposit: $";
            cin >> depositAmount;
            balance += depositAmount;
            cout << "Deposit successful. Your new balance is: $" << balance << endl;
            break;
        case 4:
            // Quit
            cout << "Thank you for using the ATM. Goodbye!" << endl;
            return 0;
        default:
            cout << "Invalid option. Please try again." << endl;
    }

    return 1;
}

