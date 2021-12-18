#include<stdio.h>
void main()
{
	float principal,rate_of_interest,time,simpleinterest;
	printf("enter the principal:\n");
	scanf("%f",&principal);
	printf("enter the time:\n");
	scanf("%f",&time);
	printf("enter the rate_of_interest:\n");
	scanf("%f",&rate_of_interest);
	simpleinterest = principal*rate_of_interest*time/100;
	printf("simple interest:%f",simpleinterest);
	
}
