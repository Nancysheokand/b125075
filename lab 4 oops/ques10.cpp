#include <iostream>
#include <string>
using namespace std;

class AttendanceManager;  // Forward declaration

class Classroom
{
private:
    string ClassName;
    int TotalStudents;
    int PresentStudents;
    bool AttendanceStatus;

public:
    // Constructor
    Classroom(string name, int total)
    {
        ClassName = name;
        TotalStudents = total;
        PresentStudents = 0;
        AttendanceStatus = false;
    }

    // Declare AttendanceManager as a friend class
    friend class AttendanceManager;
};

class AttendanceManager
{
public:
    // 1. Display classroom information
    void displayInfo(Classroom &c)
    {
        cout << "\n--- Classroom Information ---" << endl;
        cout << "Class Name: " << c.ClassName << endl;
        cout << "Total Students: " << c.TotalStudents << endl;
        cout << "Present Students: " << c.PresentStudents << endl;
        cout << "Attendance Status: "
             << (c.AttendanceStatus ? "Completed" : "Not Completed")
             << endl;
    }

    // 2. Update the number of present students
    void updatePresentStudents(Classroom &c, int present)
    {
        if (present >= 0 && present <= c.TotalStudents)
        {
            c.PresentStudents = present;
            cout << "Present students updated to "
                 << present << "." << endl;
        }
        else
        {
            cout << "Invalid number of present students." << endl;
        }
    }

    // 3. Mark attendance as completed
    void markAttendanceCompleted(Classroom &c)
    {
        c.AttendanceStatus = true;
        cout << "Attendance marked as completed." << endl;
    }

    // 4. Display whether attendance has been completed
    void checkAttendanceStatus(Classroom &c)
    {
        if (c.AttendanceStatus)
            cout << "Attendance has been completed." << endl;
        else
            cout << "Attendance has not been completed." << endl;
    }

    // 5. Calculate and display absent students
    void displayAbsentStudents(Classroom &c)
    {
        int absentStudents = c.TotalStudents - c.PresentStudents;

        cout << "Absent Students: "
             << absentStudents << endl;
    }
};

int main()
{
    Classroom classroom("OOP Lab", 40);
    AttendanceManager manager;

    manager.displayInfo(classroom);

    manager.updatePresentStudents(classroom, 35);

    manager.displayAbsentStudents(classroom);

    manager.markAttendanceCompleted(classroom);

    manager.checkAttendanceStatus(classroom);

    manager.displayInfo(classroom);

    return 0;
}