//Write a program to take 3*3 matrix from user and take its transpose in another 2-D array

#include<stdio.h>
int main()
{
	int a[3][3];
	int b[3][3];
	printf("Enter the elements of array:\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Before transposing:\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\nAfter transposing:\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			b[i][j]=a[j][i];
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}