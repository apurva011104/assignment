#include<stdio.h>
int main()
{
	float a,b,c,d,e,f;
	printf("Enter two numbers");
	scanf("%f %f",&a,&b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	printf("Sum of %f and %f is %f \nDifference between %f and %f is %f \nProduct of %f and %f is %f \nDivision of %f by %f is %f",a,b,c,a,b,d,a,b,e,a,b,f);
	return 0;
}