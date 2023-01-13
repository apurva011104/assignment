#include<stdio.h>
int main()
{
	int m,n,sr=0,sc=0;
	printf("Enter number of rows:");
	scanf("%d",&m);
	printf("Enter number f columns:");
	scanf("%d",&n);
	int a[m][n];
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
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			sr=sr+a[i][j];
		}
		printf("\nSum of elements of row %d= %d",i,sr);
		sr=0;
	}
	for(int j=0;j<n;j++)
	{
		for(int i=0;i<m;i++)
		{
			sc=sc+a[i][j];
		}
		printf("\nSum of elements of column %d= %d",j,sc);
		sc=0;
	}
	return 0;
}