
#include <iostream>
using namespace std;

class Temperature {
    double celsius;

public:
    Temperature(double c) {
        celsius = c;
    }

    bool operator>(Temperature t) {
        return celsius > t.celsius;
    }

    bool operator<(Temperature t) {
        return celsius < t.celsius;
    }

    Temperature operator-() {
        return Temperature(-celsius);
    }

    void display() {
        cout << celsius << " C";
    }
};

int main() {
    Temperature t1(30), t2(20);
    Temperature t3 = -t1;

    cout << "First temperature: ";
    t1.display();

    cout << "\nSecond temperature: ";
    t2.display();

    cout << "\nt1 > t2: " << (t1 > t2);
    cout << "\nt1 < t2: " << (t1 < t2);

    cout << "\nNegative temperature: ";
    t3.display();

    return 0;
}