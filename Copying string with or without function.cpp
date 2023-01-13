#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100];
	char s2[100];
	gets(s1);
	printf("String 1:\n");
	puts(s1);
	printf("\nAfter copying from string 1 and printing it in string 2:\n%s",strcpy(s2,s1));
	return 0;
}