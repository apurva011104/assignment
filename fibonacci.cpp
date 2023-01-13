#include<stdio.h>
int main()
{
	int n,a=0,b=1,c;
	printf("Fibonacci series\nEnter last number:");
	scanf("%d",&n);
	while(a<=n)
	{
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}