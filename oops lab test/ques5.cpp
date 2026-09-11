#include <iostream>
using namespace std;

class Wallet
{
    int walletID;
    float balance;
    float *transactions;
    int count;

public:
    Wallet()
    {
        walletID = 0;
        balance = 0;
        count = 0;
        transactions = new float[100];
    }

    void createWallet(int id, float b)
    {
        walletID = id;
        balance = b;
    }

    void transaction(float amount)
    {
        if (amount > 0)
        {
            balance = balance + amount;
        }
        else
        {
            balance = balance + amount;
        }

        transactions[count] = amount;
        count++;
    }


    void transaction(float amount, char type)
    {
        if (type == 'D' || type == 'd')
        {
            balance = balance + amount;
            transactions[count] = amount;
            count++;
        }
        else if (type == 'W' || type == 'w')
        {
            balance = balance - amount;
            transactions[count] = -amount;
            count++;
        }
        else
        {
            cout << "Invalid transaction type." << endl;
        }
    }

    void display()
    {
        cout << "Wallet ID: " << walletID << endl;
        cout << "Balance: " << balance << endl;

        cout << "Transactions: ";

        for (int i = 0; i < count; i++)
        {
            cout << transactions[i] << " ";
        }

        cout << endl;
    }

    friend void compareWallet(Wallet w1, Wallet w2);

    ~Wallet()
    {
        delete[] transactions;
    }
};

void compareWallet(Wallet w1, Wallet w2)
{
    if (w1.balance > w2.balance)
    {
        cout << "Wallet " << w1.walletID
             << " has larger balance." << endl;
    }
    else if (w2.balance > w1.balance)
    {
        cout << "Wallet " << w2.walletID
             << " has larger balance." << endl;
    }
    else
    {
        cout << "Both wallets have equal balance." << endl;
    }
}

int main()
{
    Wallet *w1 = new Wallet;
    Wallet *w2 = new Wallet;

    w1->createWallet(101, 5000);
    w2->createWallet(102, 3000);

    w1->transaction(1000, 'D');


    w1->transaction(500, 'W');

    
    w2->transaction(2000);


    w2->transaction(-500);

    cout << "Wallet 1:\n";
    w1->display();

    cout << "\nWallet 2:\n";
    w2->display();

    cout << "\nComparison:\n";
    compareWallet(*w1, *w2);

    delete w1;
    delete w2;

    return 0;
}