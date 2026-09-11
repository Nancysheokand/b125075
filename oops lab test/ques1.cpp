#include <iostream>
#include <cstring>
using namespace std;

class Locker
{
    int lockerNo;
    bool occupied;
    char *accessCode;

public:
    Locker()
    {
        lockerNo = 0;
        occupied = false;
        accessCode = new char[100];
        strcpy(accessCode, "0000");
    }

    void setLocker(int no, bool status)
    {
        lockerNo = no;
        occupied = status;
    }

    void setCode(const char code[])
    {
        strcpy(accessCode, code);
    }

    void setCode(int position, char ch)
    {
        if (position >= 0 && position < strlen(accessCode))
        {
            accessCode[position] = ch;
        }
    }

    void display()
    {
        cout << "Locker Number: " << lockerNo << endl;
        cout << "Occupied: " << (occupied ? "Yes" : "No") << endl;
        cout << "Access Code: " << accessCode << endl;
    }

    ~Locker()
    {
        delete[] accessCode;
    }
};

int main()
{
    int n;

    cout << "Enter number of lockers: ";
    cin >> n;

    Locker *lockers = new Locker[n];

    for (int i = 0; i < n; i++)
    {
        lockers[i].setLocker(i + 1, false);
        lockers[i].setCode("1234");
    }

    lockers[0].setCode(0, '9');

    cout << "\nLocker Details:\n";

    for (int i = 0; i < n; i++)
    {
        lockers[i].display();
        cout << endl;
    }

    delete[] lockers;

    return 0;
}