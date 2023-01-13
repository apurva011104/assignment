//Write a c program to saap variables by using call by refrence

#include<stdio.h>
void swap(int *a, int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
int main()
{
	int p,q;
	printf("Enter two numbers which you want to swap:");
	scanf("%d %d",&p,&q);
	printf("Values before swapping:\np=%d\nq=%d",p,q);
	swap(&p,&q);
	printf("\nValues after swapping:\np=%d\nq=%d",p,q);
	return 0;
}