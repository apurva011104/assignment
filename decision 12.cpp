#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter any three integers:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("%/d is greater than %d and %d",a,b,c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("%d is greater than %d and %d",b,a,c);
		}
	}
	if(c>a)
	{
		if(c>b)
		{
			printf("%d is greater than %d and %d",c,a,b);
		}
	}
	return 0;
}