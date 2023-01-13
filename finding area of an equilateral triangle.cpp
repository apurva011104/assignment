#include<stdio.h>
#include<math.h>
int main()
{
	float a,A;
	printf("Area of an equilateral triangle\nEnter the value of length of side");
	scanf("%f",&a);
	A=sqrt(3)*pow(a,2)/4;
	printf("Area of an equilateral triangle whose length of side is %f is %f",a,A);
	return 0;
}