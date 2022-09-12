#include<stdio.h>
main()
{
	int num1,num2;
	int add, mult, sub,div, modulo;
	
	printf("\n Enter Number 1 :");
	scanf("%d", &num1);
	
	printf("\n Enter Number 2 : ");
	scanf("%d", &num2);
	
	printf("\n Number 1 =%d", num1);
	printf("\n Number 2 = %d", num2);
	
	add = num1+num2;
	mult = num1*num2;
	sub = num1-num2;
	div=num1/num2;
	modulo = num1%num2;
	
	printf("\n\t ADDITION  = %d", add);
	printf("\n\t MULTIPLICATION = %d", mult);
	printf("\n\t SUBTRACTION = %d", sub);
	printf("\n\t DIVISION = %d", div);
	printf("\n\t  MODULO = %d", modulo);
}
