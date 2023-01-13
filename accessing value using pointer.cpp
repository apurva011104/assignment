//Write a C program to access value of variable using pointer.

#include<stdio.h>
int main()
{
	int *p;
	int a;
	printf("Enter value of a:");
	scanf("%d",&a);
	p=&a;
	printf("Accessing value of a by using pointer= %d",*p);
	return 0;
}