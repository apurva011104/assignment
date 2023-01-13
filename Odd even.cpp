//Write a C program to check given number is even or odd using function

#include<stdio.h>
void number(int a)
{
	if(a%2==0)
	{
		printf("Even");
	}
	else
	printf("Odd");
}
int main()
{
	int b;
	printf("Enter a number:");
	scanf("%d",&b);
	number(b);
	return 0;
}