#include<stdio.h>
void main()
{
	int i,n,ans;
	int e_count=0;
	int o_count=0;
	
	for(i=1;i<=5;i++)
	{
		printf("Enter Number : ");
		scanf("%d",&n);
		
		if(n%2==0)
		{
			printf("\n Even");
			e_count+=1;
		}
		else
		{
			printf("\n Odd");
			o_count+=1;
		}
	} 
	
	printf("\n Even Count = %d", e_count);
	printf("\n Odd Count = %d", o_count);
}
