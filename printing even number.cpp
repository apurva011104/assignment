//Write a C program to print all even numbers between given range using function

#include<stdio.h>
void printe(int a, int b)
{
	for(int i=a+1;i<b;i++)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
	}
}
int main()
{
	int c,d;
	printf("Enter the staring value of range:");
	scanf("%d",&c);
	printf("Enter the ending value of range:");
	scanf("%d",&d);
	printe(c,d);
	return 0;
}