#include<stdio.h>
void main()
{
	int h,m,totalminutes;
	printf("enter time in hour(s)");
	scanf("%d",&h);
	printf("enter time in min(s)");
	scanf("%d",&m);
	h=totalminutes/60;
	m=totalminutes%60;
	printf("%d minutes",h,m);
}
