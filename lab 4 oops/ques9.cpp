#include <iostream>
#include <string>
using namespace std;

class WalletManager;  // Forward declaration

class DigitalWallet
{
private:
    string UserName;
    double WalletBalance;
    bool WalletStatus;

public:
    // Constructor
    DigitalWallet(string name, double balance)
    {
        UserName = name;
        WalletBalance = balance;
        WalletStatus = true;
    }

    // Declare WalletManager as a friend class
    friend class WalletManager;
};

class WalletManager
{
public:
    // 1. Display wallet details
    void displayDetails(DigitalWallet &w)
    {
        cout << "\n--- Digital Wallet Details ---" << endl;
        cout << "User Name: " << w.UserName << endl;
        cout << "Wallet Balance: $" << w.WalletBalance << endl;
        cout << "Wallet Status: "
             << (w.WalletStatus ? "Active" : "Disabled") << endl;
    }

    // 2. Add money to the wallet
    void addMoney(DigitalWallet &w, double amount)
    {
        if (w.WalletStatus && amount > 0)
        {
            w.WalletBalance += amount;
            cout << "$" << amount << " added to the wallet." << endl;
        }
        else
        {
            cout << "Cannot add money. Wallet is disabled or amount is invalid." << endl;
        }
    }

    // 3. Deduct money if sufficient balance exists
    void deductMoney(DigitalWallet &w, double amount)
    {
        if (!w.WalletStatus)
        {
            cout << "Wallet is disabled." << endl;
        }
        else if (amount <= 0)
        {
            cout << "Invalid amount." << endl;
        }
        else if (w.WalletBalance >= amount)
        {
            w.WalletBalance -= amount;
            cout << "$" << amount << " deducted from the wallet." << endl;
        }
        else
        {
            cout << "Insufficient balance." << endl;
        }
    }

    // 4. Disable the wallet
    void disableWallet(DigitalWallet &w)
    {
        w.WalletStatus = false;
        cout << "Wallet has been disabled." << endl;
    }

    // 5. Display current wallet status
    void displayStatus(DigitalWallet &w)
    {
        cout << "Wallet Status: "
             << (w.WalletStatus ? "Active" : "Disabled") << endl;
    }
};

int main()
{
    DigitalWallet wallet("John", 1000);
    WalletManager manager;

    manager.displayDetails(wallet);

    manager.addMoney(wallet, 500);
    manager.deductMoney(wallet, 300);

    manager.displayDetails(wallet);

    manager.disableWallet(wallet);
    manager.displayStatus(wallet);

    return 0;
}