#include <iostream>
#include <string>
#include <vector>
using namespace std;

class BankAccount
{
private:
    string accountName;
    double balance;

public:
    BankAccount(string name, double initialBalance)
    {
        this->accountName = name;
        this->balance = initialBalance;
    }
    // getter
    double getBalance() const
    {
        return balance;
    }
    void desposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited " << amount << " into your account." << endl;
            return;
        }
        cout << "Invalid amount" << endl;
    }

    void withdraw(double amount)
    {
        if (amount >= 100 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrew " << amount << " from your account." << endl;
        }
        else
        {
            cout << "Invalid wihtdraw amount: " << amount << endl;
        }
    }
};

int main()
{
    BankAccount account("1124141414124", 500);
    account.desposit(100);
    account.withdraw(200);

    return 0;
}
