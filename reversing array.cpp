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
	printf("Before reversing:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("After revering:\n");
	for(int i=n-1;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}