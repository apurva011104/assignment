#include<stdio.h>
int main()
{
	int n;
	printf("Enter number of rows you want to print:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(j%2==1)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
	return 0;
}