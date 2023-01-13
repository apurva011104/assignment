#include<stdio.h>
#include<math.h>
void prime(int a)
{
	int c=0;
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)
		c++;
	}
	if(c==2)
	printf("Prime number");
	else
	printf("Not prime");
}
void perfect(int a)
{
	int s=0;
	for(int i=1;i<a;i++)
	{
		if(a%i==0)
		{
			s=s+i;
		}
	}
	if(s==a)
	{
		printf("Perfect number");
	}
	else
	printf("Not perfect");
}
void armstrong(int a)
{
	int c=0,d,f,e,s=0,t;
	t=a;
	while(a!=0)
	{
		a/=10;
		c++;
	}
	a=t;
	for(int i=c-1;i>=0;i--)
	{
		d=pow(10,i);
		f=a/d;
		e=pow(f,c);
		s=s+e;
		a=a%d;
	}
	a=t;
	if(s==a)
	printf("Armstrong number");
	else
	printf("Not armstrong number");
}
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	prime(n);
	printf("\n");
	perfect(n);
	printf("\n");
	armstrong(n);
	return 0;
}