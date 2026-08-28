#include <iostream>
using namespace std;

void inspect(int x)
{
    cout << "Integer value = " << x << endl;
}

void inspect(int *p)
{
    cout << "Pointer value = " << *p << endl;
}

void inspect(int *arr, int n)
{
    cout << "Array elements: ";

    for (int i = 0; i < n; i++)
        cout << *(arr + i) << " ";

    cout << endl;
}

int main()
{
    int x, arr[100], n;

    cout << "Enter an integer: ";
    cin >> x;

    inspect(x);
    inspect(&x);

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    inspect(arr, n);

    return 0;
}