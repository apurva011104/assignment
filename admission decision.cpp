#include<stdio.h>
int main()
{
	float a,b,c,d;
	printf("Enter marks of maths:");
	scanf("%f",&a);
	printf("Enter marks of physics:");
	scanf("%f",&b);
	printf("Enter marks of chemistry:");
	scanf("%f",&c);
	d=a+b+c;
	if(d>=180)
	{
		if(a>=65)
		{
			if(b>=55)
			{
				if(c>=50)
				{
					printf("You're eligible for admission");
				}
				else
				{
					printf("You're not eligible for admission");
				}
			}
			else
			{
				printf("You're not eligible for admission");
			}
		}
		else
		{
			printf("You're not eligible for admission");
		}
	}
	else
	{
		printf("You're not eligible for admission");
	}
	return 0;
}