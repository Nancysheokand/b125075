#include <iostream>
using namespace std;

class electricmeter
{
private:
int meternumber;
char consumername;
int units;
public:
electricmeter(int m,char n ,int u )
{
    meternumber =m;
    consumername = n;
    units=u;
}
friend void checkusage(electricmeter e);
};
void checkusage(electricmeter e)
{
    cout << "meter no.:" << e.meternumber << endl;
    cout << "name:" << e.consumername << endl;
    cout << " units:" << e.units << endl;
    if (e.units<100)
    cout << "low usage" << endl;
    else if (e.units<=300)
    cout << "moderate usage" << endl;
    else
     cout << "high usage" << endl;
}
int main()
{
    electricmeter e(101,'n',250);
    checkusage(e);
    return 0;
}