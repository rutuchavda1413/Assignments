//Nested IF

#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("Enter a: ");
	scanf("%d", &a);
	
	printf("Enter b: ");
	scanf("%d",&b);
	
	printf("Enter c: ");
	scanf("%d",&c);
	
	if(a>c)
	{
		if(a>c)
		{
			printf("A is grater");
		}
		else
		{
			printf("C is grater");
		}
		
		
	}
	else
	{
		if(b>c)
		{
			printf("B is grater");
		}
		else
		{
			printf("C is grater");
		}
	}
}
