#include <iostream>
#include <numeric>
using namespace std;
int gcd(int a,int b){
    a=abs(a);
    b=abs(b);
    while (b !=0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

class Fraction {
    int num, den;

    void simplify() {
        if (den < 0) {
            num = -num;
            den = -den;
        }

        int g = gcd(abs(num), abs(den));
        if (g != 0) {
            num /= g;
            den /= g;
        }
    }

public:
    Fraction(int n = 0, int d = 1) {
        if (d == 0) {
            throw invalid_argument("Denominator cannot be zero");
        }
        num = n;
        den = d;
        simplify();
    }

    Fraction operator+(const Fraction& f) const {
        return Fraction(num * f.den + f.num * den,
                        den * f.den);
    }

    Fraction operator-(const Fraction& f) const {
        return Fraction(num * f.den - f.num * den,
                        den * f.den);
    }

    void display() const {
        cout << num << "/" << den;
    }
};

int main() {
    Fraction f1(1, 2), f2(1, 3);

    cout << "First fraction: ";
    f1.display();

    cout << "\nSecond fraction: ";
    f2.display();

    Fraction sum = f1 + f2;
    Fraction diff = f1 - f2;

    cout << "\nAddition: ";
    sum.display();

    cout << "\nSubtraction: ";
    diff.display();

    cout << endl;
    return 0;
}