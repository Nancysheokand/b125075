#include <iostream>
using namespace std;

class eventparticipant
{
private:
    string name;
    int age;
    string status;

public:
    eventparticipant(string n, int a, string s)
    {
        name = n;
        age = a;
        status = s;
    }

    friend void verifyparticipant(eventparticipant p);
};

void verifyparticipant(eventparticipant p)
{
    cout << "name: " << p.name << endl;
    cout << "age: " << p.age << endl;
    cout << "status: " << p.status << endl;

    if (p.age >= 18 && p.status == "active")
        cout << "eligible" << endl;
    else
        cout << "not eligible" << endl;
}

int main()
{
    eventparticipant p("name", 19, "active");

    verifyparticipant(p);

    return 0;
}