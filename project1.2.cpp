#include<iostream>
using namespace std;

class car
{
     public:
     	
     int sit;
     int tyre;
     int light;
};


int main()
{
    car c1,c2;
      
      c1.tyre=4;
      c1.sit=5;
      
        cout<<"car light is:"<<c1.light<<endl;
        cout<<"car sit is:"<<c1.sit<<endl;
        
        
        c2.light=4;
        c2.sit=5;
      
        cout<<"car light is:"<<c2.light<<endl;
        cout<<"car sit is:"<<c2.sit<<endl;
        
        return 0;
      }
