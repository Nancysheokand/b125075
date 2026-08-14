#include <iostream>
using namespace std;
int main()
{
    int* x=new int;
    int* y=new int;

    cout<<"enter 1st no:"<<endl;
    cin >> *x;
    cout <<"enter 2nd no."<<endl;
    cin >> *y;

    \\displaying the operations

    cout << "sum:" << *x+*y << endl;
    cout << "difference:" << *x-*y << endl;
    cout << " product:" << (*x)*(*y)<< endl;

    if(*y!=0)
    {
        cout << "quotient:" << (*X%*y) << endl;
    }
    else{
        cout << "quotient not found" << endl;
    }
    delete a;
    delete b;

    return 0;

}
