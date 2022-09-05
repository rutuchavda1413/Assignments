#include<stdio.h>
main()
{
	int num1, num2;
	int ans, ans1;
	
	printf("Enter Number 1:");
	scanf("%d",&num1);
	
	printf("Enter Number 2: ");
	scanf("%d",&num2);
	
	printf("\nNumber 1=%d",num1);
	printf("\nNumber 2=%d",num2);
	
	ans = num1-num2;
	ans1=num1*num2;
	printf("\n Ans = %d",ans);
	printf("\n Ans1 = %d",ans1);
	
}
