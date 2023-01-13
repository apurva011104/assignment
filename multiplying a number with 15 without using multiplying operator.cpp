#include<stdio.h>
int main()
{
	int a,product;
	printf("Enter the number which you want to multiply with 15= ");
	scanf("%d",&a);
	product=(a<<4);
	product=product - a;
	printf("Product of %d and 15 is %d",a,product);
	return 0;
}