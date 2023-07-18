#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void readPersonInfo() {
        cout << "Enter name: ";
        getline(cin >> ws, name);
        cout << "Enter age: ";
        cin >> age;
    }

    void printPersonInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Employee {
protected:
    int empId;
    double salary;

public:
    void readEmployeeInfo() {
        cout << "Enter employee ID: ";
        cin >> empId;
        cout << "Enter salary: ";
        cin >> salary;
    }

    void printEmployeeInfo() {
        cout << "Employee ID: " << empId << endl;
        cout << "Salary: " << salary << endl;
    }
};

class EmployeeInfo : public Person, public Employee {
public:
    void readInfo() {
        readPersonInfo();
        readEmployeeInfo();
    }

    void printInfo() {
        cout << "Employee Information:" << endl;
        printPersonInfo();
        printEmployeeInfo();
    }
};

int main() {
    EmployeeInfo employee;

    employee.readInfo();
    cout << endl;
    employee.printInfo();

    return 0;
}
