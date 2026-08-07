#include<iostream>

using namespace std;

class car{
    int carno;
    char brandname[50];
    int modelyear;
    public:
    void cars(){
        cout << "enter carno."<< endl;
        cin >> carno;
        cout << "enter brandname" << endl;
        cin >> brandname;
        cout << "enter model year" << endl;
        cin >> modelyear;

    }
};
    int main()
    {
        car c1;
        c1.cars();

       return 0;

    }



