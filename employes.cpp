#include <iostream>
using namespace std;

class Employee {
public:
    int emp_id;
    string emp_name;
    string emp_role;
    int emp_age;
    double emp_salary;
    int emp_experience;
    string emp_city;
    string emp_company_name;

    void displayInfo() {
        cout << "Employee ID: " << emp_id << endl;
        cout << "Name: " << emp_name << endl;
        cout << "Role: " << emp_role << endl;
        cout << "Age: " << emp_age << endl;
        cout << "Salary: $" << emp_salary << endl;
        cout << "Experience: " << emp_experience << " years" << endl;
        cout << "City: " << emp_city << endl;
        cout << "Company: " << emp_company_name << endl;
        cout << "---------------------------" << endl;
    }
};

int main() {
    Employee employees[3];

    for (int i = 0; i < 3; i++) {
        cout << "Enter details for Employee " << i + 1 << ":" << endl;
        cout << "Employee ID: ";
        cin >> employees[i].emp_id;
        cout << "Name: ";
        cin.ignore();
        getline(cin, employees[i].emp_name);
        cout << "Role: ";
        getline(cin, employees[i].emp_role);
        cout << "Age: ";
        cin >> employees[i].emp_age;
        cout << "Salary: $";
        cin >> employees[i].emp_salary;
        cout << "Experience (in years): ";
        cin >> employees[i].emp_experience;
        cout << "City: ";
        cin.ignore();
        getline(cin, employees[i].emp_city);
        cout << "Company: ";
        getline(cin, employees[i].emp_company_name);
        cout << endl;
    }

    cout << "Employee Information:" << endl;
    for (int i = 0; i < 3; i++) 
	{
        employees[i].displayInfo();
    }

    return 0;
}

