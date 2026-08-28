#include <iostream>
using namespace std;

float evaluate(int a, int b)
{
    return (a + b) / 2.0;
}

float evaluate(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

float evaluate(float a, float b)
{
    return (a + b) / 2;
}

float evaluate(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    return (float)sum / n;
}

float evaluate(int *a, int *b)
{
    return (*a + *b) / 2.0;
}

int main()
{
    int a, b, c, arr[100], n;
    float x, y;

    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Average = " << evaluate(a, b) << endl;

    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    cout << "Average = " << evaluate(a, b, c) << endl;

    cout << "Enter two float values: ";
    cin >> x >> y;
    cout << "Average = " << evaluate(x, y) << endl;

    cout << "Enter size of integer array: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Array average = " << evaluate(arr, n) << endl;

    cout << "Enter two integers for pointer average: ";
    cin >> a >> b;

    cout << "Pointer average = " << evaluate(&a, &b) << endl;

    return 0;
}