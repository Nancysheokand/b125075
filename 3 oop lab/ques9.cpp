#include <iostream>
using namespace std;

class Employee
{
    int id;
    string name;
    float salary;

public:

    void accept()
    {
        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }

    float getSalary()
    {
        return salary;
    }
};

int main()
{
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    Employee *emp = new Employee[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Employee " << i + 1 << endl;
        emp[i].accept();
    }

    cout << "\n--- Employee Details ---\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;
        emp[i].display();
    }

    int highest = 0;

    for (int i = 1; i < n; i++)
    {
        if (emp[i].getSalary() > emp[highest].getSalary())
        {
            highest = i;
        }
    }

    cout << "\n--- Employee with Highest Salary ---\n";
    emp[highest].display();

    float total = 0;

    for (int i = 0; i < n; i++)
    {
        total = total + emp[i].getSalary();
    }

    float average = total / n;

    cout << "\nAverage Salary = " << average << endl;

    delete[] emp;

    return 0;
}
