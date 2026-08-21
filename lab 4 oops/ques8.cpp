#include <iostream>
#include <string>
using namespace std;

class ServiceManager;  // Forward declaration

class VehicleService
{
private:
    string VehicleNumber;
    string OwnerName;
    bool ServiceDueStatus;
    int LastServiceKilometres;

public:
    // Constructor
    VehicleService(string number, string owner, int lastKm)
    {
        VehicleNumber = number;
        OwnerName = owner;
        LastServiceKilometres = lastKm;
        ServiceDueStatus = false;
    }

    // Declare ServiceManager as a friend class
    friend class ServiceManager;
};

class ServiceManager
{
public:
    
    void displayInfo(VehicleService &v)
    {
        cout << "\n--- Vehicle Service Information ---" << endl;
        cout << "Vehicle Number: " << v.VehicleNumber << endl;
        cout << "Owner Name: " << v.OwnerName << endl;
        cout << "Service Due Status: "
             << (v.ServiceDueStatus ? "Service Due" : "Service Not Due")
             << endl;
        cout << "Last Service Kilometres: "
             << v.LastServiceKilometres << " km" << endl;
    }

    void markServiceCompleted(VehicleService &v)
    {
        v.ServiceDueStatus = false;
        cout << "Service marked as completed." << endl;
    }
    void updateServiceKilometres(VehicleService &v, int kilometres)
    {
        v.LastServiceKilometres = kilometres;
        cout << "Last service kilometres updated to "
             << kilometres << " km." << endl;
    }

    void checkService(VehicleService &v, int currentKilometres)
    {

        if (currentKilometres - v.LastServiceKilometres >= 5000)
        {
            v.ServiceDueStatus = true;
            cout << "Vehicle requires servicing." << endl;
        }
        else
        {
            v.ServiceDueStatus = false;
            cout << "Vehicle does not require servicing." << endl;
        }
    }
};

int main()
{
    VehicleService vehicle("ABC-1234", "John", 20000);
    ServiceManager manager;

    manager.displayInfo(vehicle);
    manager.checkService(vehicle, 25000);

    manager.displayInfo(vehicle);

    manager.markServiceCompleted(vehicle);

    manager.updateServiceKilometres(vehicle, 25000);

    manager.displayInfo(vehicle);

    return 0;
}