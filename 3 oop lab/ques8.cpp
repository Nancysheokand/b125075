#include<iostream>
using namespace std;
void input(int *arr,int n)
{
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
int sum(int *arr,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
      sum+=arr[i] ;
    }
    return sum;
}
int smallest(int *arr,int n)
{
    int smallest=0;
    for(int i=0;i<n;i++)
    {
       if(arr[i]>smallest)
       {
           smallest=arr[i];
       }
    }
    return smallest;
}
int largest(int *arr,int n)
{
    int largest=0;
        for(int i=0;i<n;i++)
    {
       if(arr[i]<largest)
       {
           largest=arr[i];
       }
    }
    return largest;
}


int main()
{
    int n;
    cout<<"enter value of n:"<<endl;
    cin >> n;
    int*arr=new int[n]
    input(arr,n);
    sum(arr,n);
    smallest(arr,n);
    largest(arr,n);
    return 0;

}
