#include<iostream>
using namespace std;
class faculty
{
	int id;
	char name [20];
	char email[30];
	int contact;
	
	public:
	void inputdata()
	{
		cout<<"\n Enter id = ";
		cin>>id;
		fflush(stdin);
		cout<<"\n Enter name = ";
		gets(name);
		fflush(stdin);
		cout<<"\n Enter email = ";
		gets(email);
		fflush(stdin);
		cout<<"\n Enter contact = ";
		cin>>contact;
	}
	
	void displaydata()
	{
		cout<<"\n id = "<<id;
		cout<<"\n name = "<<name;
		cout<<"\n email = "<<email;
		cout<<"\n contact = "<<contact;
	}
	
};

main()
{
	faculty f1;
	f1.inputdata();
	f1.displaydata();
}
