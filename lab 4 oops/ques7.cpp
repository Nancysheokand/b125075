#include <iostream>
#include <string>
using namespace std;

class MuseumManager;  // Forward declaration

class Exhibit
{
private:
    string ExhibitName;
    int ExhibitID;
    int VisitorCount;
    bool DisplayStatus;

public:
    // Constructor
    Exhibit(string name, int id)
    {
        ExhibitName = name;
        ExhibitID = id;
        VisitorCount = 0;
        DisplayStatus = false;
    }

    // Declare MuseumManager as a friend class
    friend class MuseumManager;
};

class MuseumManager
{
public:
    // 1. Display exhibit information
    void displayInfo(Exhibit &e)
    {
        cout << "\n--- Exhibit Information ---" << endl;
        cout << "Exhibit Name: " << e.ExhibitName << endl;
        cout << "Exhibit ID: " << e.ExhibitID << endl;
        cout << "Visitor Count: " << e.VisitorCount << endl;
        cout << "Display Status: "
             << (e.DisplayStatus ? "Open" : "Closed") << endl;
    }

    // 2. Add visitors to the exhibit
    void addVisitors(Exhibit &e, int visitors)
    {
        if (visitors > 0)
        {
            e.VisitorCount += visitors;
            cout << visitors << " visitor(s) added." << endl;
        }
        else
        {
            cout << "Invalid number of visitors." << endl;
        }
    }

    // 3. Reset the visitor count
    void resetVisitorCount(Exhibit &e)
    {
        e.VisitorCount = 0;
        cout << "Visitor count has been reset." << endl;
    }

    // 4. Open or close the exhibit
    void openCloseExhibit(Exhibit &e, bool status)
    {
        e.DisplayStatus = status;

        if (status)
            cout << "Exhibit is now OPEN." << endl;
        else
            cout << "Exhibit is now CLOSED." << endl;
    }

    // 5. Display whether the exhibit is currently open
    void checkStatus(Exhibit &e)
    {
        if (e.DisplayStatus)
            cout << "The exhibit is currently OPEN." << endl;
        else
            cout << "The exhibit is currently CLOSED." << endl;
    }
};

int main()
{
    Exhibit exhibit("Ancient Egypt", 101);
    MuseumManager manager;

    manager.displayInfo(exhibit);

    manager.openCloseExhibit(exhibit, true);
    manager.addVisitors(exhibit, 50);

    manager.checkStatus(exhibit);

    manager.displayInfo(exhibit);

    manager.resetVisitorCount(exhibit);

    manager.openCloseExhibit(exhibit, false);

    manager.displayInfo(exhibit);

    return 0;
}