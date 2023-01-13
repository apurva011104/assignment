#include<stdio.h>
int main()
{
	int n,element;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	int a[n];
	for(int i;i<n;i++)
	{
		printf("Enter the element: ");
		scanf("%d",&a[i]);
	}
	printf("Enter the element whose position you want to find: ");
	scanf("%d",&element);
	for(int i;i<n;i++)
	{
		if(a[i]==element)
		{
			printf("Position of element= %d\n",i+1);
		}
	}
	return 0;
}