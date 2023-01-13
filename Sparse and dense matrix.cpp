#include<stdio.h>
int main()
{
	int m,n,c=0,p;
	printf("Enter number of rows:");
	scanf("%d",&m);
	printf("Enter number of columns:");
	scanf("%d",&n);
	int a[m][n];
	printf("Enter the elements:\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix:\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	p=(m*n)/2;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]==0)
			c++;
		}
	}
	if(c>p)
	printf("Sparse matrix");
	if(c<p)
	printf("Dense matrix");
	if(c==p)
	printf("Number of zero elements are equal to number of non zero elements. Therefore, neither sparse nor dense");
	return 0;
}