#include<stdio.h>
#include<math.h>
int main()
{
	printf("Armstrong number from 1 to 1000: \n");
	for(int n=1;n<=1000;n++)
	{
		int c=0,d,f,e,s=0,t;
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
			printf("%d\t",s);
		}
	}
	return 0;
}