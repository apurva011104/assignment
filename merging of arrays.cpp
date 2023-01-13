#include<stdio.h>
int main()
{
	int n1;
	printf("Enter number of elements of first array: ");
	scanf("%d",&n1);
	int a[n1];
	for(int i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	int n2;
	printf("Enter number of elements of second array: ");
	scanf("%d",&n2);
	int b[n2];
	for(int j=0;j<n2;j++)
	{
		scanf("%d",&b[j]);
	}
	int n3=n1+n2;
	int c[n3];
	for(int k=0;k<n3;k++)
	{
		printf("%d\n",c[k]);
	}
	return 0;
}