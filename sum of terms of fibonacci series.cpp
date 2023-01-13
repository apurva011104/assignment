#include<stdio.h>
int main()
{
	int a=0,b=1,c,n,sum=1;
	printf("Fibonacci series\nEnter number of terms:");
	scanf("%d",&n);
	for(int i=2;i<n;++i)
	{
		c=a+b;
		sum=sum+c;
		a=b;
		b=c;
	}
	printf("Sum of %d terms of fibonacci series= %d",n,sum);
	return 0;
}