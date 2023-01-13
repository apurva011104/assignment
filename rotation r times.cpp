#include<stdio.h>
int main()
{
	int n,r,c;
	printf("Enter the number of elements");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number of rotations: ");
	scanf("%d",&r);
	for(int j=1;j<=r;j++)
	{
		int c=a[0];
	for(int i=0;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	a[n-1]=c;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}