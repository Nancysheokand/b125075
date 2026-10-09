
#include <iostream>
using namespace std;

class AccountBalance {
    double balance;

public:
    AccountBalance(double b) {
        balance = b;
    }

    AccountBalance operator-() {
        return AccountBalance(-balance);
    }

    void display() {
        cout << balance;
    }
};

int main() {
    AccountBalance a1(5000);
    AccountBalance a2 = -a1;

    cout << "Original balance: ";
    a1.display();

    cout << "\nNegative balance: ";
    a2.display();

    return 0;
}