#include <iostream>
using namespace std;

class Number {
protected:
    int num;

public:
    void getNumber() {
        cout << "Enter a number: ";
        cin >> num;
    }
};

class Square : public Number {
public:
    void calculateSquare() {
        cout << "Square of " << num << " is: " << num * num << endl;
    }
};

class Cube : public Number {
public:
    void calculateCube() {
        cout << "Cube of " << num << " is: " << num * num * num << endl;
    }
};

int main() {
    Square square;
    Cube cube;

    square.getNumber();
    square.calculateSquare();

    cout << endl;

    cube.getNumber();
    cube.calculateCube();

    return 0;
}

