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
	int max=a[0];
	int min=a[0];
	for(int i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("Maximum= %d",max);
	printf("\nMinimum= %d",min);
	return 0;
}