//Write a C program to count number of words ina given string.

#include<stdio.h>
#include<string.h>
int main()
{
	int i,c=0;
	char s[100];
	scanf("%[^.]s",s);
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ' || s[i]=='\n')
		{
			c++;
		}
	}
	printf("words=%d",c+1);
	return 0;
}