#include<stdio.h>
int main()
{
	int m,c=0;
	printf("Enter the number of rows/columns of square matrix you want to check:");
	scanf("%d",&m);
	int a[m][m];
	float p;
	printf("Enter elements of array:\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix:\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(i==j && a[i][j]==1)
			{
				c++;
			}
			if(i!=j && a[i][j]==0)
			{
				c++;
			}
		}
	}
	p=c/(m*m);
	if(p==1)
	printf("Identity matrix");
	else
	printf("Not identity matrix");
	return 0;
}