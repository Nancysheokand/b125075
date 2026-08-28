#include <iostream>
using namespace std;

int information(char arr[])
{
    int i = 0;

    while (arr[i] != '\0')
        i++;

    return i;
}

int information(char arr[], char ch)
{
    int count = 0;

    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == ch)
            count++;
    }

    return count;
}

int information(char arr[], char ch, int k)
{
    int count = 0;

    for (int i = 0; i < k && arr[i] != '\0'; i++)
    {
        if (arr[i] == ch)
            count++;
    }

    return count;
}

int main()
{
    char str[100], ch;
    int k;

    cout << "Enter a string: ";
    cin >> str;

    cout << "Length = " << information(str) << endl;

    cout << "Enter character: ";
    cin >> ch;

    cout << "Occurrence = " << information(str, ch) << endl;

    cout << "Enter k: ";
    cin >> k;

    cout << "Occurrence in first " << k << " positions = "
         << information(str, ch, k) << endl;

    return 0;
}