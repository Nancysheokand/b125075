#include<iostream>
using namespace std;

class product
{
    int id;
    string name;
    int price;
    int quantity;
    int cost;
    public:
      void input()
      {
     cout<<"enter id:"<<endl;
      cin >> id;
      cout<<"enter name:" << endl;
      cin >> name;
      cout << "enter quantity:" << endl;
      cin >> quantity;
      cout << "enter price:" << endl;
      cin >> price;
      }
      void display()
      {
          cost=price*quantity;
          cout<<"cost of each product:"<<cost<<endl;
      }

};
int main()
{
    int n;
    cout<<"enter no of products:"<<endl;
    cin >> n;

    product p[n];

    for(int i=0;i<n;i++)
    {
        p[i].input();
        p[i].display();
    }
    return 0;

}
