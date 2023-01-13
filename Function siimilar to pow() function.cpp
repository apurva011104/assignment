//Write a C program to make a function which will work exactly as pow() of math.h without using it.

#include<stdio.h>
void power(int a, int p)
{
	int c=1;
	for(int i=1;i<=p;i++)
	{
		c=c*a;
	}
	printf("%d",c);
}
int main()
{
	int n,x;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("Enter the value of power:");
	scanf("%d",&x);
	power(n,x);
	return 0;
}