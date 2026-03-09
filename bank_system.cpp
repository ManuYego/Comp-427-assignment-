#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolder;
    double balance;

public:
    // Constructor
    BankAccount(int accNo, string holder, double bal) {
        accountNumber = accNo;
        accountHolder = holder;
        balance = bal;
    }

    // Deposit function
    void deposit(double amount) {
        balance += amount;
        cout << "Deposit: " << amount << endl;
        cout << "New Balance: " << balance << endl;
    }

    // Withdraw function
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Withdrawal failed: Insufficient funds" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawal: " << amount << endl;
            cout << "New Balance: " << balance << endl;
        }
    }

    // Display account details
    void displayAccount() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {

    // Creating two bank accounts
    BankAccount acc1(101, "John", 5000);
    BankAccount acc2(102, "Mary", 3000);

    // Display first account
    acc1.displayAccount();

    // Perform deposit
    acc1.deposit(1000);

    // Perform withdrawal
    acc1.withdraw(2000);

    cout << endl;

    // Display second account
    acc2.displayAccount();

    return 0;
}