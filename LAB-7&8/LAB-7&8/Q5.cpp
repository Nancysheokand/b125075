
#include <iostream>
using namespace std;

class Sensor
{
protected:
    int sensorID;

public:
    Sensor(int id)
    {
        sensorID = id;
    }
};

class Temperature : virtual public Sensor
{
protected:
    float temp;

public:
    Temperature(float t) : Sensor(0)
    {
        temp = t;
    }
};

class Humidity : virtual public Sensor
{
protected:
    float humidity;

public:
    Humidity(float h) : Sensor(0)
    {
        humidity = h;
    }
};

class FarmMonitor : public Temperature, public Humidity
{
public:
    FarmMonitor(int id, float t, float h)
        : Sensor(id), Temperature(t), Humidity(h) {}

    void display()
    {
        cout << "Sensor ID: " << sensorID << endl;
        cout << "Temperature: " << temp << " Celsius" << endl;
        cout << "Humidity: " << humidity << "%" << endl;

        if (temp > 35 || humidity > 80)
            cout << "WARNING: Unsafe Farm Conditions!" << endl;
        else
            cout << "Farm Conditions are Normal" << endl;
    }
};

int main()
{
    int id;
    float temp, humidity;

    cout << "Enter Sensor ID: ";
    cin >> id;

    cout << "Enter Temperature: ";
    cin >> temp;

    cout << "Enter Humidity: ";
    cin >> humidity;

    FarmMonitor f(id, temp, humidity);
    f.display();

    return 0;
}
