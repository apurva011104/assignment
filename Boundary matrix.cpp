#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter number of rows:");
	scanf("%d",&m);
	printf("Enter number of columns: ");
	scanf("%d",&n);
	int a[m][n];
	printf("Boundary matrix:")
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
			if(i==0)
			{
				printf("%d\t",a[i][j]);
			}
		}
		for(int j=0;j<n;j++)
		{
			if(i>0 && i<m-1)
			{
				if(j==0 || j==n-1)
				{
					printf("%d",a[i][j]);
				}
				if(j==1 || j<n-1)
				{
					printf(" \t");
				}
			}
		}
		for(int j=0;j<n;j++)
		{
			if(i==m-1)
			{
				printf("%d\t",a[i][j]);
			}
		}
		printf("\n");
	}
}