#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter number of rows: ");
	scanf("%d",&m);
	printf("Enter number of columns: ");
	scanf("%d",&n);
	int a[m][n];
	int sc=0,sr=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("Enter value of element: ");
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<m;i++)
	{
		sr=0;
		for(int j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
			sr=sr+a[i][j];
		}
		printf("%d\n",sr);
	}
	for(int i=0;i<n;i++)
	{
		sc=0;
		for(int j=0;j<m;j++)
		{
			sc=sc+a[j][i];
		}
		printf("%d\t",sc);
	}
	return 0;
}
