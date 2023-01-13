#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter two integers:");
	scanf("%d %d",&a,&b);
	printf("Before interchanging:\na=%d\nb=%d",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("\nAfter interchanging:\na=%d\nb=%d",a,b);
	return 0;
}