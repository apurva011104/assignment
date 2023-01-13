#include<stdio.h>
int main()
{
	int m,n,p;
	printf("Enter number of rows:");
	scanf("%d",&m);
	printf("Enter number of columns:");
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
		p=m-1-i;
		for(int j=0;j<n;j++)
		{
			if(i==j || j==p)
			printf("%d\t",a[i][j]);
			else
			printf(" \t");
		}
		printf("\n");
	}
	return 0;
}