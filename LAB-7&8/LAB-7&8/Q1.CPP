
#include <iostream>
using namespace std;

class Ticket
{
protected:
    string name;
    int distance;

public:
    Ticket(string n, int d)
    {
        name = n;
        distance = d;
    }
};

class RailwayTicket : public Ticket
{
    float farePerKm;

public:
    RailwayTicket(string n, int d, float f)
        : Ticket(n, d)
    {
        farePerKm = f;
    }

    void display()
    {
        float fare = distance * farePerKm;

        if (distance > 300)
        {
            fare = fare - (fare * 0.10);
        }

        cout << "Passenger Name: " << name << endl;
        cout << "Distance: " << distance << " km" << endl;
        cout << "Final Fare: Rs. " << fare << endl;
    }
};

int main()
{
    string name;
    int distance;
    float rate;

    cout << "Enter passenger name: ";
    cin >> name;

    cout << "Enter distance: ";
    cin >> distance;

    cout << "Enter fare per km: ";
    cin >> rate;

    RailwayTicket t(name, distance, rate);
    t.display();

    return 0;
}
