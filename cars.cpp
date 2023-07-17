#include <iostream>
using namespace std;

class Car {
public:
    int car_id;
    string car_company_name;
    string car_color;
    string car_model;
    int car_release_year;

    void displayInfo() {
        cout << "Car ID: " << car_id << endl;
        cout << "Company: " << car_company_name << endl;
        cout << "Color: " << car_color << endl;
        cout << "Model: " << car_model << endl;
        cout << "Release Year: " << car_release_year << endl;
        cout << "---------------------------" << endl;
    }
};

int main() {
    Car cars[4];

    for (int i = 0; i < 4; i++) {
        cout << "Enter details for Car " << i + 1 << ":" << endl;
        cout << "Car ID: ";
        cin >> cars[i].car_id;
        cout << "Company: ";
        cin.ignore();
        getline(cin, cars[i].car_company_name);
        cout << "Color: ";
        getline(cin, cars[i].car_color);
        cout << "Model: ";
        getline(cin, cars[i].car_model);
        cout << "Release Year: ";
        cin >> cars[i].car_release_year;
        cout << endl;
    }
    cout << "Car Information:" << endl;

    for (int i = 0; i < 4; i++) {
        cars[i].displayInfo();
    }

    return 0;
}

