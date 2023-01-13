//Write a C pprogram to scan and print array using pointer and function

#include<stdio.h>
void scan(int *p)
{
	for(int i=0;i<5;i++)
	{
		scanf("%d",p+i);
	}
}
void print(int *p)
{
	for(int i=0;i<5;i++)
	{
		printf("%d\n",*(p+i));
	}
}
int main()
{
	int a[5];
	printf("Enter the elements of array:\n");
	scan(a);	
	printf("Array:\n");
	print(a);
	return 0;
}