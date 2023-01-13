#include<stdio.h>
void diameter(float a)
{
	float d=2*a;
	printf("Diameter of circle of radius %f is %f",a,d);
}
void circumference(float a)
{
	float s=(2*22*a)/7;
	printf("Circumference of circle of radius %f is %f",a,s);
}
void area(float a)
{
	float A=(22*a*a)/7;
	printf("Area of circle of radius %f is %f",a,A);
}
int main()
{
	float r;
	printf("Enter value of radius of circle:");
	scanf("%f",&r);
	diameter(r);
	printf("\n");
	circumference(r);
	printf("\n");
	area(r);
	return 0;
}