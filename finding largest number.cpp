//WAP to find largest among three numbers using pointer

#include<stdio.h>
int main()
{
	int *p,*q,*r;
	int a,b,c,max;
	printf("Enter numbers you want to compare:");
	scanf("%d %d %d",&a,&b,&c);
	p=&a;
	q=&b;
	r=&c;
	max=*p>*q?*p>*r?*p:*r:*q>*r?*q:r;
	printf("Maximum number= %d",max);
	return 0;
}
