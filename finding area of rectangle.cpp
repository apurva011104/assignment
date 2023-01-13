#include<stdio.h>
int main()
{
	float l,b,A;
	printf("Enter two numbers");
	scanf("%f %f",&l,&b);
	A=l*b;
	printf("Area of rectangle whose length is %f and breadth is %f, is %f",l,b,A);
	return 0;
}