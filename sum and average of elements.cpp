#include<stdio.h>
int main()
{
	int n,sum=0,avg;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("Sum of all elements= %d",sum);
	avg=sum/n;
	printf("\nAverage= %d",avg);
	return 0;
}