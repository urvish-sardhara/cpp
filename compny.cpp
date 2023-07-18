#include <iostream>
using namespace std;

class Admin {
protected:
    string company_name;
    double manager_salary;
    double employee_salary;
    int total_staff;
    double total_annual_revenue;

public:
    Admin(const string& companyName, double managerSalary, double employeeSalary, int staffCount, double annualRevenue)
        : company_name(companyName), manager_salary(managerSalary), employee_salary(employeeSalary),
          total_staff(staffCount), total_annual_revenue(annualRevenue) {
    }

    void myAccess() {
        cout << "Company Name: " << company_name << endl;
        cout << "Manager Salary: $" << manager_salary << endl;
        cout << "Employee Salary: $" << employee_salary << endl;
        cout << "Total Staff: " << total_staff << endl;
        cout << "Total Annual Revenue: $" << total_annual_revenue << endl;
    }
};

class Manager : public Admin {
public:
    Manager(const string& companyName, double managerSalary, double employeeSalary, int staffCount, double annualRevenue)
        : Admin(companyName, managerSalary, employeeSalary, staffCount, annualRevenue) {
    }

    void myAccess() {
        Admin::myAccess();
    }
};

class Employee : public Manager {
public:
    Employee(const string& companyName, double managerSalary, double employeeSalary, int staffCount, double annualRevenue)
        : Manager(companyName, managerSalary, employeeSalary, staffCount, annualRevenue) {
    }

    void myAccess() {
        Manager::myAccess();
    }
};

int main() {
    Admin admin("ABC Company", 10000.0, 5000.0, 50, 1000000.0);
    Manager manager("ABC Company", 10000.0, 5000.0, 50, 1000000.0);
    Employee employee("ABC Company", 10000.0, 5000.0, 50, 1000000.0);

    cout << "Admin Access:" << endl;
    admin.myAccess();

    cout << "\nManager Access:" << endl;
    manager.myAccess();

    cout << "\nEmployee Access:" << endl;
    employee.myAccess();

    return 0;
}

