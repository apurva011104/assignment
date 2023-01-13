#include<stdio.h>
int main()
{
	int n,sumodd,sumeven;
	printf("Enter the number of element= ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			sumeven=sumeven+a[i];
		}
		if(a[i]%2==1)
		{
			sumodd=sumodd+a[i];
		}
	}
	printf("Sum of odd numbers= %d",sumodd);
	printf("\nSum of even numbers=%d",sumeven);
	if(sumodd==sumeven)
	{
		printf("\nBoth are equal");
	}
	else
	printf("\nNot equal");
	return 0;
}