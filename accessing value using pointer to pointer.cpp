//Write a C program to access value of variable using pointer too pointer.

#include<stdio.h>
int main()
{
	int *p,**q;
	int a;
	printf("Enter value of a:");
	scanf("%d",&a);
	p=&a;
	q=&p;
	printf("Value of a: %d",**q);
	return 0;
}