#include<stdio.h>
int main()
{
	float x,y;
	printf("Enter value of x-coordinate:");
	scanf("%f",&x);
	printf("Enter value of y-coordinate:");
	scanf("%f",&y);
	if(x>0 && y>0)
	{
		printf("Point lies in first quadrant");
	}
	if(x<0 && y<0)
	{
		printf("Point lies in third quadrant");
	}
	if(x<0 && y>0)
	{
		printf("Point lies in second quadrant");
	}
	if(x>0 && y<0)
	{
		printf("Point lies in fourth quadrant");
	}
	if(x==0 && y>0 && y<0)
	{
		printf("Point lies on y axis");
	}
	if(y==0 && x>0 && x<0)
	{
		printf("Point lies on x axis");
	}
	if(x==0 && y==0)
	{
		printf("Point lies on the origin");
	}
	return 0;
}