//Write a C program to add two variables using pointer

#include<stdio.h>
int main()
{
	int *p,*q;
	int a,b;
	printf("Enter two numbers which you want to add:");
	scanf("%d %d",&a,&b);
	p=&a;
	q=&b;
	printf("Sum of %d and %d is %d",a,b,*p+*q);
	return 0;
}