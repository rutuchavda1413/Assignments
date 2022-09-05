#include<stdio.h>
main()
{
	int i,n,ans;
	
	for(i=1;i<=5;i++)
	{
		printf("Enter Number: ");
		scanf("%d",&n);
		ans+=n;
	}
	printf("\n Ans= %d", ans);
}
