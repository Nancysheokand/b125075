#include <iostream>
using namespace std;
void check(int n)
{
    if(n>0)
      cout << "integer is positive" << endl;
      else if (n<0)
      cout << "integer is negative" << endl;
      else
      cout << "integer is zero" << endl;

}
void check(char ch)
{
    if(ch >='A' && ch <='Z')
    cout << "character is uppercase" << endl;
    else if(ch >='a' && ch <='z')
    cout << "character is lowercase" << endl;
    else
    cout << "it is not an alphabet" << endl;

}
void check(char arr[],int n,char key)
{
    bool found = false;
    for (int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            found = true;
            break;
        }
    }
    if(found)
    cout << "character found in array" << endl;
    else
    cout << "character not found" << endl;
}
int main()
{
    int n,size;
    char ch,key;

    cout << "enter an integer:" << endl;
    cin >> n;
    check(n);

    cout << " enter a character:" << endl;
    cin >> ch;
    check(ch);

    cout << "enter the size of array:" << endl;
    cin >> size;

    char arr[100];

    cout << "enter characters:" << endl;
    for(int i=0;i<size;i++)
    cin >> arr[i];

    cout << "enter character to search:" << endl;
    cin >> key;

    check(arr,size,key);

    return 0;

}