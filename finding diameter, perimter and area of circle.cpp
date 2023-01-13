#include<stdio.h>
int main()
{
	float r,d,s,A;
	printf("Enter any dimension");
	scanf("%f",&r);
	d=r*2;
	s=2*3.14*r;
	A=3.14*r*r;
	printf("Diameter of a circle whose radius %f is %f \nPerimeter of a circle whose radius is %f is %f \nArea of a circle whose radius is %f is %f",r,d,r,s,r,A);
	return 0;
}