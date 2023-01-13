#include<stdio.h>
int main()
{
	float l,b,s;
	printf("Enter two integers");
	scanf("%f %f",&l,&b);
	s=2*(l+b);
	printf("Perimeter of rectangle whose length is %f and breadth is %f, is %f",l,b,s);
	return 0;
}