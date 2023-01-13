#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter value of sides of triangle:");
	scanf("%d %d %d",&a,&b,&c);
	if(a<(b+c) && b<(a+c) && c<(a+b))
	{
		printf("It's a triangle");
	}
	else
	{
		printf("It's not a triangle");
	}
	return 0;
}