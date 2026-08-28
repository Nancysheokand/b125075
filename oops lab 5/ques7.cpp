#include <iostream>
#include <cmath>
using namespace std;

int nearValue(int a, int b)
{
    if (abs(a) < abs(b))
        return a;
    else
        return b;
}

float nearValue(float a, float b)
{
    if (abs(a) < abs(b))
        return a;
    else
        return b;
}

int nearValue(int arr[], int n)
{
    int nearest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (abs(arr[i]) < abs(nearest))
            nearest = arr[i];
    }

    return nearest;
}

int main()
{
    int a, b, arr[100], n;
    float x, y;

    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Nearest to zero = " << nearValue(a, b) << endl;

    cout << "Enter two float values: ";
    cin >> x >> y;
    cout << "Nearest to zero = " << nearValue(x, y) << endl;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Nearest array element to zero = "
         << nearValue(arr, n) << endl;

    return 0;
}