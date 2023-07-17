#include <iostream>
using namespace std;

class Customer {
private:
    int cust_id;
    string cust_name;
    int cust_age;
    string cust_telecom_brand_name;
    string cust_mobile_number;
    string cust_city;
    int cust_simcard_validity;

public:
    void setCustomerInfo(int id, const string& name, int age, const string& telecomBrand, const string& mobileNumber, const string& city, int simValidity) {
        cust_id = id;
        cust_name = name;
        cust_age = age;
        cust_telecom_brand_name = telecomBrand;
        cust_mobile_number = mobileNumber;
        cust_city = city;
        cust_simcard_validity = simValidity;
    }

    void displayInfo() {
        cout << "Customer ID: " << cust_id << endl;
        cout << "Name: " << cust_name << endl;
        cout << "Age: " << cust_age << endl;
        cout << "Telecom Brand: " << cust_telecom_brand_name << endl;
        cout << "Mobile Number: " << cust_mobile_number << endl;
        cout << "City: " << cust_city << endl;
        cout << "SIM Card Validity: " << cust_simcard_validity << " years" << endl;
        cout << "---------------------------" << endl;
    }
};

int main() {
    Customer customers[5];
    for (int i = 0; i < 5; i++) {
        cout << "Enter details for Customer " << i + 1 << ":" << endl;
        int id, age, simValidity;
        string name, telecomBrand, mobileNumber, city;

        cout << "Customer ID: ";
        cin >> id;
        cout << "Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Age: ";
        cin >> age;
        cout << "Telecom Brand: ";
        cin.ignore();
        getline(cin, telecomBrand);
        cout << "Mobile Number: ";
        getline(cin, mobileNumber);
        cout << "City: ";
        getline(cin, city);
        cout << "SIM Card Validity (in years): ";
        cin >> simValidity;

        customers[i].setCustomerInfo(id, name, age, telecomBrand, mobileNumber, city, simValidity);
        cout << endl;
    }

    cout << "Customer Information:" << endl;
    for (int i = 0; i < 5; i++) {
        customers[i].displayInfo();
    }

    return 0;
}

