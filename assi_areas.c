#include<stdio.h>
main()
{
	float pi=3.14,radius, circle;
	int b,h,triangle;
	int width , height, rectangle;
	
	printf("\n Enter VAlur of Radius : ");
	scanf("%f",&radius);
	
	printf("\n Enter Value of Width : ");
	scanf("%d",& width);
	
	printf("\n Enter Value of Height : ");
	scanf("%d",&height);
	
	printf("\n Enter VAlue of Base : ");
	scanf("%d",&b);
	
	printf("\n Enter Value of Height : ");
	scanf("%d",&h);
	
	circle =pi*radius*radius;
	rectangle = width*height;
	triangle = b*h/2;
	
	printf("\n AREA OF CIRCLE = %f", circle);
	printf("\n AREA OF RENCTANGLE = %d",rectangle);
	printf("\n AREA OF TRIANGLE = %d", triangle);
	
}
