#include <iostream>
using namespace std;

class Shape {
public:
    virtual double calculate() const = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculate() const override {
        return 3.14159 * radius * radius;
    }
};

class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    double calculate() const override {
        return 0.5 * base * height;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculate() const override {
        return length * width;
    }
};

int main() {
    Shape* shape1 = new Circle(5.0);
    std::cout << "Area of Circle: " << shape1->calculate() << std::endl;
    delete shape1;

    Shape* shape2 = new Triangle(4.0, 6.0);
    std::cout << "Area of Triangle: " << shape2->calculate() << std::endl;
    delete shape2;

    Shape* shape3 = new Rectangle(3.0, 7.0);
    std::cout << "Area of Rectangle: " << shape3->calculate() << std::endl;
    delete shape3;

    return 0;
}
