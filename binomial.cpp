#include<stdio.h>
int factorial(int a)
{
	int m=1,f;
	for(int i=1;i<=a;i++)
	{
		m=m*i;
	}
	f=m;
	return f;
}
void binomial(int b, int c)
{
	int x,y,z,d,coeff;
	x=factorial(b);
	y=factorial(c);
	d=b-c;
	z=factorial(d);
	coeff=x/(y*z);
	printf("binomial coefficient= %d",coeff);
}
int main()
{
	int n,r;
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("Enter the value of r:");
	scanf("%d",&r);
	binomial(n,r);
	return 0;
}