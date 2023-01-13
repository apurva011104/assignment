#include<stdio.h>
int main()
{
	float b,h,A;
	printf("To find area of a triangle\nEnter value of base and height of triangle");
	scanf("%f %f",&b,&h);
	A=b*h/2;
	printf("Area of a triangle whose base is %f units and height is %f units is %f sq. units",b,h,A);
	return 0;
}