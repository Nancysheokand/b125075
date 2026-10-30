
#include <iostream>
using namespace std;

class Scholarship
{
public:
    virtual double calculateAward(double marks, double income)
    {
        return 0;
    }
};

class MeritScholarship : public Scholarship
{
public:
    double calculateAward(double marks, double income) override
    {
        if (marks >= 90)
            return 20000;
        else if (marks >= 80)
            return 10000;
        else
            return 0;
    }
};

class NeedBasedScholarship : public Scholarship
{
public:
    double calculateAward(double marks, double income) override
    {
        if (income < 200000 && marks >= 70)
            return 25000;
        else
            return 0;
    }
};

int main()
{
    double marks, income;

    cout << "Enter marks: ";
    cin >> marks;

    cout << "Enter family income: ";
    cin >> income;

    MeritScholarship m;
    NeedBasedScholarship n;

    Scholarship *ptr;

    ptr = &m;
    cout << "Merit Scholarship: Rs. "
         << ptr->calculateAward(marks, income) << endl;

    ptr = &n;
    cout << "Need-Based Scholarship: Rs. "
         << ptr->calculateAward(marks, income) << endl;

    return 0;
}
