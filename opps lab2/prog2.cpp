#include<iostream>
using namespace std;
class square{
private:
    float sidew,area,perimeter;
public:
    void input()
    {
        cout << "enter side:";
        cin >> side;
    }
    void calculate()
    {
        area=side*side;
        perimeter=4*side;
    }
    void display()
    {
        cout<<"area="<<area<<endl;
        cout<<"perimeter="<<perimetetr<<endl;
    }
    };
    int main()
    {
        square a;
        s.input();
        s.calculate();
        s.display();
        return 0;
    }
