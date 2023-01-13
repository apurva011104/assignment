#include<stdio.h>
int main()
{
	int n,value,f=0;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				f++;
			}
		}
		printf("Frequency of %d is %d\n",a[i],f);
	}
	return 0;
}