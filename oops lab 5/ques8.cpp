#include <iostream>
using namespace std;

void update(int &x, int amount)
{
    x = x + amount;
}

void update(float &x, float amount)
{
    x = x + amount;
}

void update(int arr[], int n, int amount)
{
    for (int i = 0; i < n; i++)
        arr[i] = arr[i] + amount;
}

int main()
{
    int x, amount, arr[100], n;
    float y, famount;

    cout << "Enter integer: ";
    cin >> x;

    cout << "Enter amount: ";
    cin >> amount;

    cout << "Before = " << x << endl;
    update(x, amount);
    cout << "After = " << x << endl;

    cout << "Enter float value: ";
    cin >> y;

    cout << "Enter float amount: ";
    cin >> famount;

    cout << "Before = " << y << endl;
    update(y, famount);
    cout << "After = " << y << endl;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter amount: ";
    cin >> amount;

    update(arr, n, amount);

    cout << "Updated array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}