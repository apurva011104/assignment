#include<stdio.h>
#include<math.h>
int main()
{
	int n,sum=0,mean,std;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter the element: ");
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	mean=sum/n;
	int c,f,sum2=0;
	for(int i=0;i<n;i++)
	{
		c=a[i]-mean;
		f=pow(c,2);
		sum2=sum2+f;
	}
	int b;
	b=sum2/(n-1);
	std=sqrt(b);
	printf("Standard deviation= %d",std);
	return 0;
}