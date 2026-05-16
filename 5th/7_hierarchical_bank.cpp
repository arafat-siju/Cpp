#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
public:
    string owner;
    double balance;
    void showBalance() { 
        cout << owner << "'s Balance: " << balance << " BDT" << endl; 
    }
};

class SavingsAccount : public BankAccount
{
public:
    double interestRate;
    void addInterest()
    {
        balance += balance * interestRate / 100;
        cout << "After Interest: " << balance << " BDT" << endl;
    }
};

class CurrentAccount : public BankAccount
{
public:
    double overdraftLimit;
    void showOverdraft() { 
        cout << "Overdraft Limit: " << overdraftLimit << " BDT" << endl; 
    }
};

int main()
{
    SavingsAccount sa;
    sa.owner = "Karim";
    sa.balance = 10000;
    sa.interestRate = 5.0;
    sa.showBalance();
    sa.addInterest();

    CurrentAccount ca;
    ca.owner = "Rina";
    ca.balance = 50000;
    ca.overdraftLimit = 10000;
    ca.showBalance();
    ca.showOverdraft();
    return 0;
}