#include<stdio.h>
int main()
{
	int n;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array of odd numbers:\n");
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==1)
		printf("%d\t",a[i]);
	}
	printf("\nArray of even numbers:\n");
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		printf("%d\t",a[i]);
	}
	return 0;
}