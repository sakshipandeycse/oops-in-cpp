#include <iostream>
using namespace std;

class BankAccount {
private:
    float balance;

public:
    BankAccount(float b) {
        balance = b;
    }

    void deposit(float amount) {
        balance += amount;
    }

    void withdraw(float amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient Balance" << endl;
    }

    void display() {
        cout << "Balance = " << balance << endl;
    }
};

int main() {
    BankAccount b(5000);

    b.display();

    b.deposit(2000);
    b.display();

    b.withdraw(1000);
    b.display();

    return 0;
}