#include<iostream>
using namespace std;

 int main()
 {
     int n;
     cout << "enter size of array:" << endl;
     cin >> n;
     int* arr=new int[n];
    cout << "enter elements of array:" << endl;
     for(int i=0;i<n;i++)
     {
         cin >> arr[i];
     }
     cout << " reverse array:" << endl;
     for(int i=n-1;i>=0;i--)
     {
        cout << arr[i] << endl;
     }

     delete[] arr;

     return 0;

 }

