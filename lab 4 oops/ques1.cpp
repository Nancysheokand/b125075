#include <iostream>
using namespace std;

class weather
{
private:
string city;
int temp;
string condition;
public:
weather(string c,int t,string condition)
{
    city=c;
    temp=t;
    condition=condition;
}
friend void report(weather w);
};
void report(weather w)
{
    cout << "city" << w.city << endl;
    cout << "temp:" << w.temp << endl;
    cout << "condition:" << w.condition << endl;
    if(w.temp>35)
    {
        cout << "very hot" << endl;
    }
    else if(w.temp>=20)
    cout << "pleasent"<< endl;
    else
    cout << "cool" << endl;
}
int main()
{
    weather w(" chandigarh",30,"sunny");
    report(w);
    return 0;
}
