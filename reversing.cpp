//Write a C program to take a string from user and reverse it with and without using inbuilt function

/*
#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000];
	gets(s);
	puts(strrev(s));
	return 0;
}
*/

#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,c;
	char s[1000];
	char s2[1000];
	gets(s);
	c=strlen(s);
	for(i=0;i<c;i++)
	{
		s2[i]=s[c-i-1];
	}
	s2[c]='\0';
	puts(s2);
	return 0;
}