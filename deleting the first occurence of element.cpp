//Write a C program to take an array from user and take an element to delete and delete first occurence of that element.

#include<stdio.h>
int main()
{
	int n,d;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element you want to delete: ");
	scanf("%d",&d);
	for(int i=0;i<n;i++)
	{
		if(a[i]==d)
		{
			for(int j=i;j<n-1;j++)
			a[j]=a[j+1];
			break;
		}
	}
	for(int j=0;j<n-1;j++)
	{
		printf("%d\n",a[j]);
	}
	return 0;
}