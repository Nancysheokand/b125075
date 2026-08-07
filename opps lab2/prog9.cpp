#include <iostream>
#include <string>
using namespace std;

class CricketPlayer
{
private:
    string playerName;
    int matchesPlayed;
    int totalRuns;
    float battingAverage;

public:
    void acceptDetails()
    {
        cout << "Enter Player Name: ";
        cin.ignore();
        getline(cin, playerName);

        cout << "Enter Matches Played: ";
        cin >> matchesPlayed;

        cout << "Enter Total Runs Scored: ";
        cin >> totalRuns;
    }

    void calculateAverage()
    {
        battingAverage = (float)totalRuns / matchesPlayed;
    }

    void displayReport()
    {
        cout << "\n------ Player Report ------" << endl;
        cout << "Player Name     : " << playerName << endl;
        cout << "Matches Played  : " << matchesPlayed << endl;
        cout << "Total Runs      : " << totalRuns << endl;
        cout << "Batting Average : " << battingAverage << endl;

        cout << "Performance     : ";
        if (battingAverage >= 50)
            cout << "Excellent";
        else if (battingAverage >= 35)
            cout << "Good";
        else if (battingAverage >= 20)
            cout << "Average";
        else
            cout << "Poor";

        cout << endl;
    }
};

int main()
{
    CricketPlayer p;

    p.acceptDetails();
    p.calculateAverage();
    p.displayReport();

    return 0;
}
