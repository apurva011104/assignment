//Write a C program to print all n digit prime numbers (where  n is given by user using function.

#include<stdio.h>
int power(int a, int p)
{
	int c=1;
	for(int i=1;i<=p;i++)
	{
		c=c*a;
	}
	return c;
}
void prime(int b)
{
	int c,d,e;
	c=power(10,b-1);
	d=power(10,b)-1;
	for(int f=c;f<=d;f++)
	{
		e=0;
		for(int i=1;i<=f;i++)
		{
			if(f%i==0)
			{
				e++;
			}
		}
		if(e==2)
		{
			printf("%d\n",f);
		}
	}
}
int main()
{
	int n;
	printf("Enter the value of number of digits:");
	scanf("%d",&n);
	prime(n);
	return 0;
}
