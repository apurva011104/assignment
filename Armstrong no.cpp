#include<stdio.h>
#include<math.h>
int main()
{
	int n,c=0,d,f,e,s=0,t;
	printf("Enter a number:");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		n/=10;
		c++;
	}
	n=t;
	for(int i=c-1;i>=0;i--)
	{
		d=pow(10,i);
		f=n/d;
		e=pow(f,c);
		s=s+e;
		n=n%d;
	}
	n=t;
	if(s==n)
	{
		printf("Armstrong number");
	}
	if(s!=n)
	printf("Not armstrong number");
	return 0;
}