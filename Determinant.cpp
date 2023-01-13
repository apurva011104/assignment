#include<stdio.h>
int main()
{
	int a[3][3];
	printf("Enter elements of the matrix:\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix:\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	int d;
	for(int i=0;i<3;i++)
    	d=d+(a[0][i]*(a[1][(i+1)%3]*a[2][(i+2)%3] - a[1][(i+2)%3]*a[2][(i+1)%3]));
	printf("Determinant:%d",d);
	return 0;
}