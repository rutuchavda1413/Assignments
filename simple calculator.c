#include<stdio.h>
main()
{
	int num1, num2;
	int ans, ans1,ans2, ans3, ans4;
	
	printf("Enter Number 1:");
	scanf("%d",&num1);
	
	printf("Enter Number 2: ");
	scanf("%d",&num2);
	
	printf("\nNumber 1=%d",num1);
	printf("\nNumber 2=%d",num2);
	
	ans = num1-num2;
	ans1=num1*num2;
	ans2=num1/num2;
	ans3=num1%num2;
	ans4=num1+num2;
	printf("\n Ans = %d",ans);
	printf("\n Ans1 = %d",ans1);
	printf("\n Ans2 = %d",ans2);
	printf("\n ans3 = %d", ans3);
	printf("\n ans4 = %d",ans4);
	
	
}
