#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter number of rows: ");
	scanf("%d",&m);
	printf("Enter number of columns: ");
	scanf("%d",&n);
	int a[m][n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix:");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}