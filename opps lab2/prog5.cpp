#include<iostream>
using namespace std;
class mobile recharge{
    public:
    int mobileno,amount;
    char name[50];
    int balance;
    void input()
    {
        cout << "enter mobile no:" << endl;
        cin >> mobileno;
        cout << "enter name:" << endl;
        cin >> name;
        cout << "enter balance:" << endl;
        cin >> balance;
    }
    void recharge()
    {
        cout << "enter recharge amount:" << endl;
        cin >> amount;
        if(amount<=balance)
        {
            balance=balance-amount;
            cout << "recharge sucessful" << endl;
        }
        else
        {
            cout << "insufficient balance" << endl;
        }
    }
    void display()
    {
        cout << "updated balance:" << balance << endl;
    }
};
int main()
{
    mobile recharge m1;
    m1.input();
    m1.recharge();
    m1.display();
    return 0;
}
