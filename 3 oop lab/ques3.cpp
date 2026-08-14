#include<iostream>
using namespace std;
int main()
{
    int n,odd,even;
    odd=0;
    even=0;
    cout << "enter size of array:" << endl;
    cin >> n;
    int* arr=new int[n];
    cout << "enter elements of array:" << endl;
    for(int i=0;i<n;i++)
    {
      cin >> arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
          even++;
        }
        else
        {
            odd++;
        }
    }
    cout<<"total even no:"<<even<<endl;
    cout<<"total odd no:"<<odd<<endl;

    return 0;

}
