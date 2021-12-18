#include<stdio.h>
void main()
{
	int h,m,totalminutes;
	scanf("%d",&totalminutes);
	h=totalminutes/60;
	m=totalminutes%60;
	printf("%d hour(s) %d minute(s)",h,m);
}
