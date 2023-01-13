//Write a C program to take an array from user and take an element to delete and delete all the occurence

#include<stdio.h>
int main()
{
	int n,d,c=0;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element you want to delete: ");
	scanf("%d",&d);
	int i=0;
	while(i<n)
	{
		if(a[i]==d)
		{
			for(int j=i;j<n-1;j++)
			a[j]=a[j+1];
			n--;
			i--;
		}
		i++;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}