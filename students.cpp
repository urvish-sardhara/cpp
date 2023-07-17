#include <iostream>
using namespace std;

class Student {
private:
    int stu_id;
    string stu_name;
    int stu_age;
    string stu_course;
    string stu_email;
    string stu_city;
    string stu_college;

public:
    void setStudentInfo(int id, const string& name, int age, const string& course, const string& email, const string& city, const string& college) {
        stu_id = id;
        stu_name = name;
        stu_age = age;
        stu_course = course;
        stu_email = email;
        stu_city = city;
        stu_college = college;
    }

    void displayInfo() {
        cout << "Student ID: " << stu_id << endl;
        cout << "Name: " << stu_name << endl;
        cout << "Age: " << stu_age << endl;
        cout << "Course: " << stu_course << endl;
        cout << "Email: " << stu_email << endl;
        cout << "City: " << stu_city << endl;
        cout << "College: " << stu_college << endl;
        cout << "---------------------------" << endl;
    }
};

int main() {
    Student students[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter details for Student " << i + 1 << ":" << endl;
        int id, age;
        string name, course, email, city, college;

        cout << "Student ID: ";
        cin >> id;
        cout << "Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Age: ";
        cin >> age;
        cout << "Course: ";
        cin.ignore();
        getline(cin, course);
        cout << "Email: ";
        getline(cin, email);
        cout << "City: ";
        getline(cin, city);
        cout << "College: ";
        getline(cin, college);

        students[i].setStudentInfo(id, name, age, course, email, city, college);
        cout << endl;
    }

    cout << "Student Information:" << endl;
    for (int i = 0; i < 5; i++) {
        students[i].displayInfo();
    }

    return 0;
}

