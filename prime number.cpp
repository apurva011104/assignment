//Write a C program to check given number is prime or not using function

#include<stdio.h>
void prime(int a)
{
	int c=0;
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)
		c++;
	}
	if(c==2)
	printf("Prime number");
	else
	printf("Not prime");
}
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	prime(n);
	return 0;
}