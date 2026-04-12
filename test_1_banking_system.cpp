#include <iostream>
#include <string>
using namespace std;

class Account{
private:
    string dep_id;
    float balance;

public:
    int acc_num;
    char acc_type;

    friend Account compareBalance(Account a1, Account a2);

    void initial(string id, int Acc_Number, char Acc_Type, float initialBalance) {
        dep_id = id;
        acc_num = Acc_Number;
        acc_type = Acc_Type;
        balance = initialBalance;
    }

    void deposit(float amount) {
        if(amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << " TK | New Balance: " << balance << " TK" << endl;
        }
        else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(float amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
        }
        else if (amount > balance) {
            cout << "Insufficient balance! Current Balance: " << balance << " TK" << endl;
        }
        else {
            balance -= amount;
            cout << "Withdrawn: " << amount << " TK | Remaining Balance: " << balance << " TK" << endl;
        }
    }

    void display() const {
        
        cout << "Depositor ID   : " << dep_id << endl;
        cout << "Account Number : " << acc_num << endl;
        cout << "Account Type   : " << acc_type << endl;
        cout << "Balance        : " << balance << " TK" << endl;
    }

    // Getter for balance (used in compareBalance)
    float getBalance() const {
        return balance;
    }

    // Getter for depositor ID (used in compareBalance)
    string getDepositorID() const {
        return dep_id;
    }
};

// Friend function definition - compares balance of two accounts
// Returns the account with the higher balance
Account compareBalance(Account a1, Account a2) {
    cout << "\n--- Comparing Balances ---" << endl;
    if (a1.balance = a2.balance) {
        cout << "Account [" << a1.dep_id << "] has equal balance: " << a1.balance << " Tk" << endl;
        return a1;
    }
    else if (a1.balance > a2.balance) {
        cout << "Account [" << a1.dep_id << "] has higher balance: " << a1.balance << " Tk" << endl;
        return a1;
    }
    else {
        cout << "Account [" << a2.dep_id << "] has higher balance: " << a2.balance << " TK" << endl;
        return a2;
    }
}

int main() {
    Account acc[3];

    cout << "========== Enter Account Details ==========" << endl;
    for (int i = 0; i < 3; i++) {
        string id;
        int Acc_Number;
        char Acc_Type;
        float initialBal;

        cout << "\nAccount " << (i + 1) << ":" << endl;
        cout << "Depositor ID     : "; cin >> id;
        cout << "Account Number   : "; cin >> Acc_Number;
        cout << "Account Type (S/C/L): "; cin >> Acc_Type;
        cout << "Initial Balance  : "; cin >> initialBal;

        acc[i].initial(id, Acc_Number, Acc_Type, initialBal);
    }

    // Perform deposit and withdrawal operations on each account
    cout << "\n========== Deposit & Withdrawal Operations ==========" << endl;
    for (int i = 0; i < 3; i++) {
        float dep_amount, with_amount;
        cout << "\nOperations for Account " << (i + 1) << ":" << endl;

        cout << "Enter deposit amount  : "; 
        cin >> dep_amount;
        acc[i].deposit(dep_amount);

        cout << "Enter withdrawal amount: ";
        cin >> with_amount;
        acc[i].withdraw(with_amount);
    }

    // Display all account information
    cout << "\n========== All Account Information ==========" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "\nAccount " << (i + 1) << ":" << endl;
        acc[i].display();
    }

    // Use friend function to compare balances (comparing account 0 and 1)
    Account higher = compareBalance(acc[0], acc[1]);

    // Compare the winner with account 2
    cout << "\nComparing winner with Account 3:" << endl;
    Account richest = compareBalance(higher, acc[2]);

    cout << "\nAccount with the highest balance overall:" << endl;
    richest.display();

    return 0;
}