#include<iostream>
using namespace std;
class Time
{
public:
    int min1,hour1;
    int min2,hour2;
    int hours,minutes;
    void input()
    {
        cout << "enter time1" << endl;
        cin >> hour1;
        cin >> min1;
        cout << "enter time2" << endl;
        cin >> hour2;
        cin >> min2;
    }
    void calculate()
    {
        hours=hour1+hour2;
        minutes=min1+min2;
        if(minutes>=60)
        {
            hours+=minutes/60;
            minutes+minutes%60;
        }
    }
    void display()
    {
        cout << "total time is:" << hours<< "hours"<<minutes<<"minutes"<<endl;
    }

};
int main()
{
    Time t1;
    t1.input();
    t1.calculate();
    t1.display();
    return 0;
}
