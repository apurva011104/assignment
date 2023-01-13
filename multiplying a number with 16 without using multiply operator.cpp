#include<stdio.h>
#include<math.h>
int main()
{
	int a,product;
	printf("Enter the number you want to multiply with 16: ");
	scanf("%d",&a);
	product=a<<4;
	printf("Product of %d and 16 is %d",a,product);
	return 0;
}