#include <iostream>
using namespace std;

class Drone
{
    int droneID;
    int battery;
    float Hours;

public:
    void input(int id, int x, float y)
    {
        droneID = id;
        battery = x;
        Hours = y;
    }

    void update(int x)
    {
        battery = x;
    }

    void update(int x, float y)
    {
        battery = x;
        Hours = y;
    }

    void display()
    {
        cout << "Drone ID: " << droneID << endl;
        cout << "Battery: " << battery << "%" << endl;
        cout << "Hours: " << Hours << endl;
    }

    friend void compare(Drone d1, Drone d2);
};

void compare(Drone d1, Drone d2)
{
    if (d1.battery > d2.battery)
    {
        cout << "Drone " << d1.droneID
             << " higher battery." << endl;
    }
    else if (d2.battery > d1.battery)
    {
        cout << "Drone " << d2.droneID
             << " higher battery." << endl;
    }
    else
    {
        cout << "Both drones have the same battery." << endl;
    }
}

int main()
{
    Drone *d1 = new Drone;
    Drone *d2 = new Drone;

    d1->input(101, 80, 5.5);
    d2->input(102, 65, 4.0);

    d1->update(90);
    d2->update(70, 6.0);

    cout << "Drone 1:\n";
    d1->display();

    cout << "\nDrone 2:\n";
    d2->display();

    cout << "\nComparison:\n";
    compare(*d1, *d2);

    delete d1;
    delete d2;

    return 0;
}