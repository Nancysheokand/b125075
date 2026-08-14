#include<iostream>
using namespace std;
class book
{
    int id;
    string title;
    string author;
    int price;
    public:

    void input()
    {
      cout<<"enter id:"<<endl;
      cin >> id;
      cout<<"enter title:" << endl;
      cin >> title;
      cout << "enter author:" << endl;
      cin >> author;
      cout << "enter price:" << endl;
      cin >> price;

    }
    void display()
    {
        cout<<"id:"<<id<<endl;
        cout<<"title:"<<title<<endl;
        cout<<"author:"<<author<<endl;
        cout<<"price:"<<price<<endl;
    }
};
int main()
{
    book* b=new book;
    b->input();
    b->display();
    delete b;
    return 0;
}

