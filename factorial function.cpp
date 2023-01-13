#include<stdio.h>
void factorial(int a)
{
	int m=1;
	for(int i=1;i<=a;i++)
	{
		m=m*i;
	}
	printf("Factorial of %d is %d",a,m);
}
int main()
{
	int n;
	printf("Enter a natural number=");
	scanf("%d",&n);
	factorial(n);
	return 0;
}