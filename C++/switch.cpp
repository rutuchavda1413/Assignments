#include<iostream>
using namespace std;
main()
{
	int month;
	
	cout<<"\n Enter month"<<endl;
	cin>>month;
	
	switch(month)
	{
		case 1:
			cout<<"JANUARY";
			break;
			
			case 2:
				cout<<"FABRUARY";
				break;
				
				case 3:
					cout<<"MARCH";
					break;
					
					case 4:
						cout<<"APRIL";
						break;
						
						case 5:
							cout<<"MAY";
							break;
							
							default:
								cout<<"INVALID";
					
	}
	
}
