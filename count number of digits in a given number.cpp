#include<stdio.h>
int main()
{
	int n,a;
	printf("Enter a number:");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		a++;
	}
	printf("Number of digits in the number=%d",a);
	return 0;
}