#include <iostream>
using namespace std;

int convert(int km)
{
    return km * 1000;
}

int convert(long m)
{
    return m * 1000;
}

float convert(float km)
{
    return km * 1000;
}

int main()
{
    int km;
    long m;
    float fkm;

    cout << "Enter distance in kilometers: " << endl;
    cin >> km;
    cout << "Meters = " << convert(km) << endl;

    cout << "Enter distance in meters: ";
    cin >> m;
    cout << "Centimeters = " << convert(m) << endl;

    cout << "Enter floating-point distance in kilometers: ";
    cin >> fkm;
    cout << "Meters = " << convert(fkm) << endl;

    return 0;
}