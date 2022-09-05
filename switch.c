#include<stdio.h>
main()
{
	int day;
	
	printf("Enter day: ");
	scanf("%d",&day);
	
	switch(day)
	{
		case 1:
			printf("Monday");
			break;
			
			case 2:
				printf("Tuesday");
				break;
				
				case 3:
					printf("Wednesday");
					break;
					
					case 4:
						printf("Thursday");
						break;
						
						default:
							printf("INVALID NUMBER");
	}
}
