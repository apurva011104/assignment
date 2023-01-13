#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter number of rows:");
	scanf("%d",&m);
	printf("Enter number of columns:");
	scanf("%d",&n);
	int a[m][n];
	int b[m][n];
	int c[m][n];
	printf("Enter elements of array 1:\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Array 1:\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Enter elements of array 2:\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Array 2:\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("Sum of both arrays:\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}