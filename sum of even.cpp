#include<stdio.h>
int main()
{
	int a,b,c=0;
	printf("enter the starting value of range:");
	scanf("%d",&a);
	printf("Enter the ending value of range:");
	scanf("%d",&b);
	for(int i=a;i<=b;i++)
	{
		if(i%2==0)
		{
			c=c+i;
		}
	}
	printf("sum of all even numbers from %d to %d is %d",a,b,c);
	return 0;
}