//Write a C program to print elements of array using pointer

#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of elements you want to print: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter the element: ");
		scanf("%d",&a[i]);
	}
	int *p;
	printf("Array:\n");
	for(int i=0;i<n;i++)
	{
		p=&a[i];
		printf("%d\t",*p);
	}
	return 0;
}