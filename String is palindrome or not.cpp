//Write a C program to check if the given string is palindrome or not

#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,c,n=0;
	char s[100];
	char s2[100];
	gets(s);
	c=strlen(s);
	for(i=0;i<c;i++)
	{
		s2[i]=s[c-i-1];
	}
	s2[c]='\0';
	for(i=0;i<c;i++)
	{
		if (s2[i]==s[i])
		{
			n++;	
		}
	}
	if(n==c)
	{
		printf("Palindrome");
	}
	if(n!=c)
	{
		printf("Not palindrome");
	}
	return 0;
}