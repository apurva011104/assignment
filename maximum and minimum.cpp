#include<stdio.h>
void max(int a, int b)
{
	if(a>b)
	printf("Maximum= %d",a);
	else
	printf("Maximum= %d",b);
}
void min(int a, int b)
{
	if(a<b)
	printf("Minimum= %d",a);
	else
	printf("Minimum= %d",b);
}
int main()
{
	int n1,n2;
	printf("Enter two numbers which you want to compare: ");
	scanf("%d %d",&n1,&n2);
	max(n1,n2);
	printf("\n");
	min(n1,n2);
	return 0;
}