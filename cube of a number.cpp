#include<stdio.h>
void cube(int a)
{
	int c;
	c=a*a*a;
	printf("Cube of %d is %d",a,c);
}
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	cube(n);
	return 0;
}