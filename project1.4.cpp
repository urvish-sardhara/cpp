#include<iostream>
using namespace std;

class home
{
     public:
     	
     int room;
     int bathroom;
};

class room
{
	public:
		
	int bad;
	int ac;
};

  int main()
  {
      home h1;
      
      h1.room=4;
      h1.bathroom=3;
      
        cout<<"rooms in the home is : "<<h1.room<<endl;
        cout<<"bathroom in the home is : "<<h1.bathroom<<endl;
        
        room r1;
        
         r1.bad=1;
         r1.ac=1;
         
         
        cout<<"bad in the room is : "<<r1.bad<<endl;
        cout<<"ac in the room is : "<<r1.ac<<endl;
        
        return 0;
      }
