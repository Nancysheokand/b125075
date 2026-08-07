#include<iostream>
using namespace std;
class hotelroom{
public:
    int number,days,costperday,total;
    char name[50];
    void input()
    {
        cout << "enter room no:" << endl;
        cin >> number;
        cout<< "enter no of days:" << endl;
        cin >> days;
        cout << "enter cost per day:" << endl;
        cin >> costperday;
        cout << "enter name:" << endl;
        cin >> name;
    }
    void calculate()
    {
        total=number*costperday;
    }
    void display()
    {
        cout << "booking details:" << endl;
        cout << "room no:" << number << endl;
        cout << "name:" << name << endl;
        cout << "days stayed:" << days << endl;
        cout << " cost per days:" << costperday << endl;
        cout << "total cost:" << total << endl;
    }
};
int main()
{
    hotelroom a1;
    a1.input();
    a1.calculate();
    a1.display();
    return 0;
}

