#include<iostream>
using namespace std;
class temperature{
private:
    int c,f;
public:
    void input()
    {
        cout <<"enter the temperature in celcius";
        cin >> c;
    }
    void convert()
    {
        f=(9/5)*c+32;
    }
    void display()
    {
        cout <<"celcius="<<c;
        cout <<"farenheit="<<f;
    }
};
int main()
{
    temperature a1;
    a1.input();
    a1.convert();
    a1.display();
    return 0;
}

