#include <iostream>
using namespace std;

int process(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    return sum;
}

float process(float arr[], int n)
{
    float sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    return sum;
}

int process(int arr[], int n, int k)
{
    int sum = 0;

    for (int i = 0; i < k; i++)
        sum += arr[i];

    return sum;
}

int main()
{
    int a[100], n, k;
    float b[100];

    cout << "Enter size of integer array: ";
    cin >> n;

    cout << "Enter integer elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Sum = " << process(a, n) << endl;

    cout << "Enter size of float array: ";
    cin >> n;

    cout << "Enter float elements: ";
    for (int i = 0; i < n; i++)
        cin >> b[i];

    cout << "Sum = " << process(b, n) << endl;

    cout << "Enter k: ";
    cin >> k;

    cout << "Sum of first " << k << " elements = "
         << process(a, n, k) << endl;

    return 0;
}