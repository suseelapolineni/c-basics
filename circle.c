#include<stdio.h>
void main()
{
	float area,peri,radius;
	float pi=3.14;
	printf("enter the radius of the circle:");
	scanf("%f",&radius);
	area=pi*radius*radius;
	peri=2*pi*radius;
	printf("area of the circle:%.3f\n",area);
	printf("peri of the circle:%.3f\n",peri);
		
}
