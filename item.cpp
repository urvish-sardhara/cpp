#include <iostream>
using namespace std;

class Item {
private:
    int itemNumber;
    string itemName;
    int quantity;
    double price;
    double discount;

public:
    void setItemInfo(int number, const string& name, int qty, double itemPrice, double itemDiscount) {
        itemNumber = number;
        itemName = name;
        quantity = qty;
        price = itemPrice;
        discount = itemDiscount;
    }

    double calculateTotalCost() {
        double totalCost = price * quantity;
        totalCost -= totalCost * discount;
        return totalCost;
    }

    void displayItem() {
        cout << "Item Number: " << itemNumber << endl;
        cout << "Item Name: " << itemName << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Price: $" << price << endl;
        cout << "Discount: " << (discount * 100) << "%" << endl;
        cout << "Total Cost: $" << calculateTotalCost() << endl;
        cout << "---------------------------" << endl;
    }
};

int main() {
    const string USER_ID = "admin";
    const string PASSWORD = "admin123";

    string userId, password;
    cout << "Supermarket Billing System" << endl;
    cout << "---------------------------" << endl;

    cout << "User Login" << endl;
    cout << "User ID: ";
    cin >> userId;
    cout << "Password: ";
    cin >> password;
    cout << endl;

    if (userId == USER_ID && password == PASSWORD) {
        const int MAX_ITEMS = 3;
        Item items[MAX_ITEMS];

        for (int i = 0; i < MAX_ITEMS; i++) {
            cout << "Enter details for Item " << i + 1 << ":" << endl;
            int number, quantity;
            string name;
            double price, discount;

            cout << "Item Number: ";
            cin >> number;
            cout << "Item Name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Quantity: ";
            cin >> quantity;
            cout << "Price: $";
            cin >> price;
            cout << "Discount (%): ";
            cin >> discount;

            items[i].setItemInfo(number, name, quantity, price, discount);
            cout << endl;
        }

        cout << "Supermarket Billing System" << endl;
        cout << "---------------------------" << endl;
        cout << "Items Purchased:" << endl;
        for (int i = 0; i < MAX_ITEMS; i++) {
            items[i].displayItem();
        }
    } else {
        cout << "Invalid User ID or Password. Access Denied!" << endl;
    }

    return 0;
}

