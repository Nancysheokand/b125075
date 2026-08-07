#include <iostream>
using namespace std;

class HostelFee
{
private:
    string studentName;
    int hostelID, numberOfMonths;
    float monthlyFee, totalFee;
    char delayed;

public:
    void input()
    {
        cout << "Enter Student Name: ";
        cin >> studentName;

        cout << "Enter Hostel ID: ";
        cin >> hostelID;

        cout << "Enter Monthly Fee: ";
        cin >> monthlyFee;

        cout << "Enter Number of Months: ";
        cin >> numberOfMonths;

        cout << "Is Payment Delayed? (Y/N): ";
        cin >> delayed;
    }

    void calculate()
    {
        totalFee = monthlyFee * numberOfMonths;

        if (delayed == 'Y' || delayed == 'y')
        {
            totalFee += 500;
        }
    }

    void display()
    {
        cout << "\nHostel Fee Details\n";
        cout << "Student Name : " << studentName << endl;
        cout << "Hostel ID : " << hostelID << endl;
        cout << "Monthly Fee : " << monthlyFee << endl;
        cout << "Months : " << numberOfMonths << endl;
        cout << "Final Amount Payable : " << totalFee << endl;
    }
};

int main()
{
    HostelFee h;
    h.input();
    h.calculate();
    h.display();

    return 0;
}
