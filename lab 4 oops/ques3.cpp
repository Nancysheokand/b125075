#include <iostream>
#include <string>
using namespace std;
class camera
{
    private:
    string brand;
    string model;
    int megapixels;
    int storage;
    public:
    camera(string b, string m, int mp, int s){
    brand=b;
    model=m;
    megapixels = mp;
    storage = s;

    }
    friend void comparecamera(camera c1,camera c2);

};
void comparecamera(camera c1,camera c2)
{
    camera better=c1;
    if(c2.megapixels > c1.megapixels)
    better=c2;
    else if(c2.megapixels == c1.megapixels && c2.storage > c1.storage)
    better=c2;

    cout << "better camera:" << endl;
    cout << "brand:" << better.brand << endl;
    cout << " model:" << better.model << endl;
    cout << " megapixel:" << better.megapixels << endl;
    cout << " storage:" << better.storage << endl;
}
int main()
{
    camera c1("xyz","z",21,115);
    camera c2("abc","f",34,200);
    comparecamera(c1,c2);
    return 0;
}