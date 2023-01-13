#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter number of rows: ");
	scanf("%d",&m);
	printf("Enter nummber of columns: ");
	scanf("%d",&n);
	int a[m][n];
	int b[n][m];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Before transposing:\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("After transposing:\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			b[i][j]=a[j][i];
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}