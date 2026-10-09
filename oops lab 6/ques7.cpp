
#include <iostream>
using namespace std;

class InventoryItem {
    int productID, quantity;
    double price;

public:
    InventoryItem(int id, double p, int q) {
        productID = id;
        price = p;
        quantity = q;
    }

    InventoryItem operator+(InventoryItem item) {
        if (productID == item.productID &&
            price == item.price) {
            return InventoryItem(
                productID, price,
                quantity + item.quantity
            );
        }

        cout << "Items are incompatible!\n";
        return InventoryItem(-1, 0, 0);
    }

    void display() {
        if (productID == -1) {
            cout << "No combined item.";
            return;
        }

        cout << "Product ID: " << productID
             << ", Price: " << price
             << ", Quantity: " << quantity;
    }
};

int main() {
    InventoryItem i1(101, 50, 10);
    InventoryItem i2(101, 50, 20);
    InventoryItem i3(102, 60, 5);

    InventoryItem result = i1 + i2;

    cout << "Combined inventory: ";
    result.display();

    cout << "\nTrying incompatible items:\n";
    InventoryItem result2 = i1 + i3;
    result2.display();

    return 0;
}