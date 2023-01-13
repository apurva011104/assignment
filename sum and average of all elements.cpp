#include<stdio.h>
int main()
{
	int m,n,sum=0,avg;
	printf("Enter number of rows you want to print:");
	scanf("%d",&m);
	printf("Enter number of columns you want to print:");
	scanf("%d",&n);
	int a[m][n];
	printf("Enter elements of table:");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			sum=sum+a[i][j];
		}
	}
	printf("Sum of all elements of table= %d",sum);
	avg=sum/(m*n);
	printf("\nAverage of all elements of table= %d",avg);
	return 0;
}