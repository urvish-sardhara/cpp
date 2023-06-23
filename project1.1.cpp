#include <iostream>
using namespace std;

class dist {
	
	public:
    int feet;
    float inch;
    
}sum;

int main() 
{
	dist d1;
	dist d2;
	
    cout << "Enter 1st dist," << endl;
    cout << "Enter feet: ";
    cin >> d1.feet;
    cout << "Enter inch: ";
    cin >> d1.inch;

    cout << "\nEnter information for 2nd dist" << endl;
    cout << "Enter feet: ";
    cin >> d2.feet;
    cout << "Enter inch: ";
    cin >> d2.inch;

    sum.feet = d1.feet+d2.feet;
    sum.inch = d1.inch+d2.inch;

    
    if(sum.inch > 12) {
        
        int extra = sum.inch / 12;

        sum.feet += extra;
        sum.inch -= (extra * 12);
    } 

    cout << endl << "Sum of dist = " << sum.feet << " feet  " << sum.inch << " inches";
    return 0;
}
