#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
    string name;
    int age;

public:
    void set_value(const string& animalName, int animalAge) {
        name = animalName;
        age = animalAge;
    }
};

class Zebra : public Animal {
public:
    void display() {
        cout << "Zebra's name: " << name << endl;
        cout << "Zebra's age: " << age << " years" << endl;
        cout << "Extra information: Zebras are native to Africa." << endl;
    }
};

class Dolphin : public Animal {
public:
    void display() {
        cout << "Dolphin's name: " << name << endl;
        cout << "Dolphin's age: " << age << " years" << endl;
        cout << "Extra information: Dolphins are marine mammals." << endl;
    }
};

int main() {
    Zebra zebra;
    Dolphin dolphin;

    zebra.set_value("Stripes", 5);
    dolphin.set_value("Flipper", 10);

    zebra.display();
    cout << endl;
    dolphin.display();

    return 0;
}

