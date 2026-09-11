#include <iostream>
using namespace std;

class QueueDisplay
{
    int size;
    int *ID;

public:
    QueueDisplay()
    {
        size = 0;
        ID = 0;
    }

    void createQueue(int n)
    {
        size = n;
        ID = new int[size];
    }

    void insertIDs()
    {
        cout << "Enter customer IDs:\n";

        for (int i = 0; i < size; i++)
        {
            cin >> ID[i];
        }
    }

    void display()
    {
        cout << "Queue Size: " << size << endl;
        cout << "Customer IDs: ";

        for (int i = 0; i < size; i++)
        {
            cout << ID[i] << " ";
        }

        cout << endl;
    }

    friend void exchangeQueue(QueueDisplay &q1,
                              QueueDisplay &q2);

    ~QueueDisplay()
    {
        delete[] ID;
    }
};

void exchangeQueue(QueueDisplay &q1,
                   QueueDisplay &q2)
{
    int tempSize = q1.size;
    q1.size = q2.size;
    q2.size = tempSize;

    int *tempArray = q1.ID;
    q1.ID = q2.ID;
    q2.ID = tempArray;
}

int main()
{
    int n1, n2;

    cout << "Enter size of Queue 1: ";
    cin >> n1;

    QueueDisplay *q = new QueueDisplay[2];

    q[0].createQueue(n1);
    q[0].insertIDs();

    cout << "\nEnter size of Queue 2: ";
    cin >> n2;

    q[1].createQueue(n2);
    q[1].insertIDs();

    cout << " Before Exchange: ";

    cout << "Queue 1: ";
    q[0].display();

    cout << "Queue 2: ";
    q[1].display();

    exchangeQueue(q[0], q[1]);

    cout << " After Exchange: ";

    cout << "Queue 1: ";
    q[0].display();

    cout << "Queue 2: ";
    q[1].display();

    delete[] q;

    return 0;
}