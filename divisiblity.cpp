#include<stdio.h>
int main()
{
	int a;
	printf("Enter any number: ");
	scanf("%d",&a);
	if(a%3==0)
	{
		if(a%7==0)
			printf("%d is divisible by both 3 and 7",a);
		else
			printf("%d is divisible by only 3",a);
	}
	else
	{
		if(a%7==0)
			printf("%d is divisible by only 3",a);
		else
			printf("%d is divisible by neither 3 nor 7",a);
	}
	return 0;
}