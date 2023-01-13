#include<stdio.h>
int main()
{
	int a,b,n,m;
	printf("Enter number whose table you want to print:");
	scanf("%d",&n);
	printf("Enter number till where you want to print the table:");
	scanf("%d",&m);
	for(int i=1;i<=m;i++)
	{
		b=n*i;
		printf("%d * %d = %d\n",n,i,b);
	}
	return 0;
}