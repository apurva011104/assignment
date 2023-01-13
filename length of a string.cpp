#include<stdio.h>
#include<string.h>
int main()
{
	int c;
	char s[1000];
	gets(s);
	c=strlen(s);
	printf("Length of string= %d",c);
	return 0;
}