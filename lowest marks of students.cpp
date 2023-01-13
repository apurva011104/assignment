#include<stdio.h>
int main()
{
	int a,b,c,s1,s2,s3;
	printf("Enter marks of student 1:");
	scanf("%d",&s1);
	printf("Enter marks of student 2:");
	scanf("%d",&s2);
	printf("Enter marks of student 3:");
	scanf("%d",&s3);
	s1<s2?s1<s3?printf("Lowest marks is of student1= %d",s1):printf("Lowest marks is of student3= %d",s3):s2<s3?printf("Lowest marks is of student2= %d",s2):printf("Lowest marks is of student3= %d",s3);
	return 0;
}