#include <iostream>

class Distance 
{
private:
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0.0) {}

    Distance(int ft, float in) : feet(ft), inches(in) {}

    void getDistance() 
	{
        std::cout << "Enter feet: ";
        std::cin >> feet;
        std::cout << "Enter inches: ";
        std::cin >> inches;
    }

    void showDistance() const 
	{
        std::cout << feet << " feet " << inches << " inches";
    }

    Distance operator+(const Distance& d2) const 
	{
        int ft = feet + d2.feet;
        float in = inches + d2.inches;

        if (in >= 12.0) 
		{
            in -= 12.0;
            ft++;
        }

        return Distance(ft, in);
    }
};

int main() {
    Distance d1, d2, d3;

    std::cout<<"Enter the first distance : \n";
    d1.getDistance();

    std::cout<<"\nEnter the second distance : \n";
    d2.getDistance();

    d3=d1+d2;

    std::cout << "\nTotal distance is ";
    d3.showDistance();
    std::cout << std::endl;

    return 0;
}

