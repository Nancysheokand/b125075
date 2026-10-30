
#include <iostream>
using namespace std;

class Candidate
{
protected:
    int id;
    float attendance;

public:
    Candidate(int i, float a)
    {
        id = i;
        attendance = a;
    }
};

class RegularCandidate : public Candidate
{
public:
    RegularCandidate(int i, float a) : Candidate(i, a) {}

    void checkEligibility()
    {
        cout << "Candidate ID: " << id << endl;

        if (attendance >= 75)
            cout << "Eligible for Regular Examination" << endl;
        else
            cout << "Not Eligible for Regular Examination" << endl;
    }
};

class ReappearCandidate : public Candidate
{
public:
    ReappearCandidate(int i, float a) : Candidate(i, a) {}

    void checkEligibility()
    {
        cout << "Candidate ID: " << id << endl;

        if (attendance >= 60)
            cout << "Eligible for Reappear Examination" << endl;
        else
            cout << "Not Eligible for Reappear Examination" << endl;
    }
};

int main()
{
    int id;
    float attendance;

    cout << "Enter candidate ID: ";
    cin >> id;

    cout << "Enter attendance percentage: ";
    cin >> attendance;

    RegularCandidate r(id, attendance);
    ReappearCandidate p(id, attendance);

    cout << "\nRegular Candidate:\n";
    r.checkEligibility();

    cout << "\nReappear Candidate:\n";
    p.checkEligibility();

    return 0;
}
