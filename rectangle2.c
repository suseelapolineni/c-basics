#include<stdio.h>
void main()
{
	float lenght,breadth,area,peri;
	printf("enter the lenght of rectangle:\n");
	scanf("%f",&lenght);
	print("enter the breadth of rectangle:\n");
	scanf("%f",&breadth);
	area=lenght*breadth;
	peri=2*(lenght+breadth);
	printf("area of the rectangle:%f",area);
	printf("peri of the rectangle:%f",peri);
}
