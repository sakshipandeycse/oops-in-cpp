#include <iostream>
using namespace std;

// Bank Account Class
class BankAccount {
private:
    string accountHolder;
    double balance;
    int accountNumber;
    
public:

    BankAccount(string holder, int accNum, double initialBalance) {
        accountHolder = holder;
        accountNumber = accNum;
        balance = initialBalance;
    }
    
    
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
            cout << "New Balance: $" << balance << endl;
        } 
    }
    
    
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: $" << amount << endl;
            cout << "New Balance: $" << balance << endl;
        } else (amount > balance) ;{
            cout << "Insufficient balance!" << endl;
        } 
    }
    
    
    void checkBalance() {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {

    BankAccount acc1("John", 1001, 1000);
    BankAccount acc2("Sarah", 1002, 500);
    acc1.checkBalance();
    acc1.deposit(500);
    acc1.withdraw(200);
    acc1.checkBalance();
    cout << endl;
    acc2.checkBalance();
    acc2.deposit(1000);
    acc2.withdraw(300);
    acc2.checkBalance();
    
    return 0;
}