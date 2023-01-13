#include<stdio.h>
void QUAD(int a, int b, int c)
{
	int d;
	d=((b*b)-4*a*c);
	if(d>=0)
	{
		printf("Equation have real roots");
	}
	else
	{
		printf("Equation have imaginary roots");
	}
}
int main()
{
	int p,q,r;
	printf("Enter the coefficient of x^2:");
	scanf("%d",&p);
	printf("Enter the coefficient of x:");
	scanf("%d",&q);
	printf("Enter the coefficient of constant term:");
	scanf("%d",&r);
	QUAD(p,q,r);
	return 0;
}