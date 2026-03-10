#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolder;
    double balance;

public:
    BankAccount(int accNo, string holder, double bal) {
        accountNumber = accNo;
        accountHolder = holder;
        balance = bal;
    }


    void deposit(double amount) {
        balance += amount;
        cout << "Deposit: " << amount << endl;
        cout << "New Balance: " << balance << endl;
    }


    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Withdrawal failed: Insufficient funds" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawal: " << amount << endl;
            cout << "New Balance: " << balance << endl;
        }
    }

    
    void displayAccount() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {


    BankAccount acc1(101, "John", 5000);
    BankAccount acc2(102, "Mary", 3000);

    // Display first account
    acc1.displayAccount();
    acc1.deposit(1000);
    acc1.withdraw(2000);

    cout << endl;

    acc2.displayAccount();
    acc2.deposit(4000);
    acc2.withdraw(3000);
    cout << endl;

    return 0;

}

