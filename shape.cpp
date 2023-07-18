#include <iostream>
using namespace std;

class Shape {
protected:
    double width;
    double height;

public:
    Shape(double w, double h) : width(w), height(h) {}

    virtual double area() const = 0;
};

class Triangle : public Shape {
public:
    Triangle(double w, double h) : Shape(w, h) {}

    double area() const override {
        return 0.5 * width * height;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(double w, double h) : Shape(w, h) {}

    double area() const override {
        return width * height;
    }
};

int main() {
    Triangle triangle(4.0, 5.0);
    Rectangle rectangle(6.0, 3.0);

    cout << "Triangle Area: " << triangle.area() << endl;
    cout << "Rectangle Area: " << rectangle.area() << endl;

    return 0;
}

