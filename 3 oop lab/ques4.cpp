#include<iostream>
using namespace std;
 int main()
 {
     int n,key,found=0;
     cout << "enter size of array:" << endl;
     cin >> n;
     int* arr=new int[n];
    cout << "enter elements of array:" << endl;
     for(int i=0;i<n;i++)
     {
         cin >> arr[i];
     }
     cout << "enter value of key:"<< endl;
     cin >> key;
    for(int i=0;i<n;i++)
    {
     if(arr[i]==key)
     {
         cout << "positon of key is:" << i+1;
         found=1;
         break;
     }
    }
     if(found==0)
     {
         cout << "element does not found" << endl;
     }
     return 0;

 }
