#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a number a=");
	scanf("%d",&a);
	printf("Enter a number b=");
	scanf("%d",&b);
	printf("Before interchanging\na=%d\nb=%d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\nAfter interchanging\na=%d\nb=%d",a,b);
	return 0;
}