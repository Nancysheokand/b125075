#include <iostream>
#include <string>
using namespace std;

class Instrument
{
    int instrumentID;
    string name;
    int accessLevel;

public:
    Instrument(int id, string n, int level)
    {
        instrumentID = id;
        name = n;
        accessLevel = level;
    }

    void display()
    {
        cout << "Instrument ID: " << instrumentID << endl;
        cout << "Name: " << name << endl;
        cout << "Access Level: " << accessLevel << endl;
    }

    friend class LabSupervisor;
};

class LabSupervisor
{
public:
    void checkAccess(Instrument *i)
    {
        cout << "Current Access Level: "
             << i->accessLevel << endl;
    }

    void modifyAccess(Instrument *i, int newLevel)
    {
        i->accessLevel = newLevel;

        cout << "Access level modified successfully."
             << endl;
    }
};

int main()
{
    Instrument *i = new Instrument(101, "Oscilloscope", 2);

    cout << "Before Modification:\n";
    i->display();

    LabSupervisor supervisor;

    cout << "\nSupervisor Checking Access:\n";
    supervisor.checkAccess(i);

    cout << "\nModifying Access Level...\n";
    supervisor.modifyAccess(i, 5);

    cout << "\nAfter Modification:\n";
    i->display();

    delete i;

    return 0;
}