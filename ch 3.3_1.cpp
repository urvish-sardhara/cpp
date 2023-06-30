#include<iostream>
#include<string.h>
using namespace std;

class dimond{

  public:
 
  int id;
  char name[100];
  int staff;
  int revenue;
  int import;
  int expo;
  char ceo[100];
 
 
    
    public:
    	dimond()
	{
    		cout<<"enter the id : ";
    		cin>>id;
    		
    		cout<<"enter the name : ";
    		cin>>name;
    		
    		cout<<"enter the staff : ";
    		cin>>staff;
    		
    		cout<<"enter the revenue : ";
    		cin>>revenue;
    		
    		cout<<"enter the import : ";
    		cin>>import;
    		
    		cout<<"enter the ceo : ";
    		cin>>ceo;
    		
	
   	 cout<<"\n\n-----------------------------\n\n"; 
   
    	cout<<"import :"<<this->import<<endl;
   	 cout<<"expo :"<<this->expo<<endl;
   	 cout<<"id :"<<this->id<<endl;
   	 cout<<"name :"<<this->name<<endl;
   	 cout<<"staff :"<<this->staff<<endl;
   	 cout<<"revenue :"<<this->revenue<<endl;
   	 cout<<"ceo :"<<this->ceo<<endl;
        
      cout<<"\n\n-----------------------------\n\n"; 	 
   }
 
};
int main()
{
		int n;
		
		cout<<"enter the number of compny : ";
		cin>>n;
    dimond d[n];
    
	return 0;
};
