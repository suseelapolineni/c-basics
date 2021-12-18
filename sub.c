#include<stdio.h>
void main()
{
	int num1,num2,sub,sum,product,quotient,remainder;
	printf("enter two numbers");
	scanf("%d%d",&num1,&num2);
	sub=num1-num2;
	sum=num1+num2;
	product=num1*num2;
	quotient=num1/num2;
	remainder=num1%num2;
	printf("sub of %d and %d is %d\n sum of %d and %d is %d\n product of %d and %d is %d\nquotient of %d and %d is %d\n remainder of %d and %d is %d",num1,num2,sub,num1, num2, sum,num1, num2, product, num1, num2, quotient,num1, num2, remainder);
}
