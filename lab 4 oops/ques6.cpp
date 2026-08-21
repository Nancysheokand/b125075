#include <iostream>
#include <string>
using namespace std;

class PrinterManager;  

class Printer
{
private:
    string PrinterName;
    int NumberofPagesPrinted;
    int InkLevel;
    bool PowerStatus;

public:

    Printer(string name, int ink)
    {
        PrinterName = name;
        NumberofPagesPrinted = 0;
        InkLevel = ink;
        PowerStatus = false;
    }

    friend class PrinterManager;
};

class PrinterManager
{
public:

    void displayInfo(Printer &p)
    {
        cout << "\n--- Printer Information ---" << endl;
        cout << "Printer Name: " << p.PrinterName << endl;
        cout << "Pages Printed: " << p.NumberofPagesPrinted << endl;
        cout << "Ink Level: " << p.InkLevel << "%" << endl;
        cout << "Power Status: "
             << (p.PowerStatus ? "ON" : "OFF") << endl;
    }
    void turnOn(Printer &p)
    {
        p.PowerStatus = true;
        cout << "Printer turned ON." << endl;
    }
    void turnOff(Printer &p)
    {
        p.PowerStatus = false;
        cout << "Printer turned OFF." << endl;
    }

    void checkInkLevel(Printer &p)
    {
        cout << "Ink Level: " << p.InkLevel << "%" << endl;
    }
    void resetPageCount(Printer &p)
    {
        p.NumberofPagesPrinted = 0;
        cout << "Page count has been reset." << endl;
    }
};

int main()
{
    Printer printer("HP LaserJet", 75);
    PrinterManager manager;

    manager.displayInfo(printer);

    manager.turnOn(printer);
    manager.checkInkLevel(printer);

    manager.resetPageCount(printer);

    manager.turnOff(printer);

    manager.displayInfo(printer);

    return 0;
}