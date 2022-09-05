//odd even 
#include<stdio.h>
main()
{
	int i,n,ans;
	
	for(i=1;i<=5;i++)
	{
		printf("Enter number: ");
		scanf("%d",&n);
		if(n%2==0)
		{
			printf("\n Even");
		}
		else
		{
			printf("\n Odd");
		}
	}
}
