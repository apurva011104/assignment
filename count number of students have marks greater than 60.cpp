//Write a C program to take marks of n number of students and count the number of students and who scored marks greater than 60

#include<stdio.h>
int main()
{
	int n,count=0;
	printf("Enter the number of student: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter marks: ");
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]>60)
		{
			count++;
		}
	}
	printf("Number of students who have marks greater than 60: %d",count);
	return 0;
}