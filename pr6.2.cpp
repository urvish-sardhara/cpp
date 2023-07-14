#include <iostream>
using namespace std;

class Shape
{
	public:
    	virtual double calculate()=0;
};

class Circle:public Shape
{
	
	private:
  	  double radius;
  	  
	public:
    	Circle(double r):radius(r) {}
    	double calculate()
		{
        	return 3.14*radius*radius;
    	}
};

	class Triangle:public Shape 
{	
	private:
    	double base,height;
    	
	public:
    	Triangle(double b,double h):base(b),height(h) {}
    double calculate()
	{
        return 0.5*base*height;
    }
};

class Rectangle:public Shape
{	
	private:
    	double width,height;
    	
	public:
    	Rectangle(double w,double h):width(w),height(h) {}
    	
    	double calculate()
		{
        	return width*height;
   		}
};

	int main()
{
    	Shape*shapes[3];
    	shapes[0]=new Circle(5);
    	shapes[1]=new Triangle(4,8);
    	shapes[2]=new Rectangle(6,9);

    	for (int i=0;i<3;i++)
		{
        	cout<<"Area of shape "<<i+1<<" is : "<<shapes[i]->calculate() << endl;
    	}

    	for (int i=0;i<3;i++) 
		{
        	delete shapes[i];
    	}
    return 0;
}

