#include <iostream>
using namespace std;

class Account {
public:
    string name;
    int accNo;
    double balance;

    void createAccount() {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter account number: ";
        cin >> accNo;

        balance = 0;
        cout << "Account created successfully!\n";
    }

    void deposit() {
        double amount;
        cout << "Enter deposit amount: ";
        cin >> amount;

        balance += amount;
        cout << "Deposited successfully!\n";
    }

    void withdraw() {
        double amount;
        cout << "Enter withdraw amount: ";
        cin >> amount;

        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful!\n";
        } else {
            cout << "Insufficient balance!\n";
        }
    }

    void showDetails() {
        cout << "\nName: " << name;
        cout << "\nAccount No: " << accNo;
        cout << "\nBalance: " << balance << endl;
    }
};

int main() {
    Account a;
    int choice;

    a.createAccount();

    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Show Details\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
            a.deposit();
        else if (choice == 2)
            a.withdraw();
        else if (choice == 3)
            a.showDetails();

    } while (choice != 4);

    return 0;
}