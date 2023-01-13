#include<stdio.h>
int main()
{
	int n,m=1;
	printf("Enter a number:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		m=m*i;
	}
	printf("Factorial=%d",m);
	return 0;
}