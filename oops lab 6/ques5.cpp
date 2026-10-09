
#include <iostream>
using namespace std;

class Score {
    int value;

public:
    Score(int s = 0) {
        value = s;
    }

    Score operator++() {
        ++value;
        return *this;
    }

    Score operator++(int) {
        Score temp = *this;
        value++;
        return temp;
    }

    void display() {
        cout << value;
    }
};

int main() {
    Score s1(10), s2(10);

    Score prefixResult = ++s1;
    Score postfixResult = s2++;

    cout << "Prefix result: ";
    prefixResult.display();

    cout << "\nScore after prefix: ";
    s1.display();

    cout << "\nPostfix result: ";
    postfixResult.display();

    cout << "\nScore after postfix: ";
    s2.display();

    return 0;
}