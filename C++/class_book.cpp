#include<iostream>
using namespace std;
class book
{
	public:
		int id;
		char book_name [10];
		int book_price;
		char author_name[10];
		char publication[15];
		int publication_year;
		
		public:
			void inputdata()
			{
				cout<<"\nEnter id = ";
				cin>>id;
				fflush(stdin);
				cout<<"\nEnter name = ";
				gets(book_name);
				fflush(stdin);
				cout<<"\nEnter Book Price = ";
				cin>>book_price;
				fflush(stdin);
				cout<<"\nEnter author_name = ";
				cin>>author_name;
				fflush(stdin);
				cout<<"\n Enter publication = ";
				gets(publication);
				fflush(stdin);
				cout<<"\n Enter publication_year = ";
				cin>>publication_year;
			}
			
			void displaydata()
			{
				cout<<"\n id : "<<id;
				cout<<"\n book_name :"<<book_name;
				cout<<"\n book_price : "<<book_price;
				cout<<"\n author_name : "<<author_name;
				cout<<"\n publication : "<<publication;
				cout<<"\npublication_year : "<<publication_year;
			}
};

main()
{
	book b1;
	b1.inputdata();
	b1.displaydata();
}
