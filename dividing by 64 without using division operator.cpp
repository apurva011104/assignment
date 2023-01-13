#include<stdio.h>
int main()
{
	int a,quotient;
	printf("Enter the number which you want to divide by 64= ");
	scanf("%d",&a);
	quotient=a>>6;
	printf("%d divide by 64 gives %d",a,quotient);
	return 0;
}