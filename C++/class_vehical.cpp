#include<iostream>
using namespace std;
class vehical
{
	char vehical_name [15];
	int wheels;
	char fuel_type [15];
	
	public:
	void inputdata()
	{
		cout<<"\nVehical name : ";
		gets(vehical_name);
		fflush(stdin);
		cout<<"\nWheels : ";
		cin>>wheels;
		fflush(stdin);
		cout<<"\nFuel_type : ";
		gets(fuel_type);
		
	}
	
	void displaydata()
	{
		cout<<"\nVehical name :"<<vehical_name;
		cout<<"\nWheels : "<<wheels;
		cout<<"\nFuel Type : "<<fuel_type;
	}
	 
};
 main()
	 {
	 	vehical v1;
	 	
	 	v1.inputdata();
	 	v1.displaydata();
	 	
	 	
	 }
