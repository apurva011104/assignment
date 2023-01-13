#include<stdio.h>
int main()
{
	int inttype;
	float floattype;
	char chartype;
	double doubletype;
	long double longdoubletype;
	short int shortinttype;
	printf("Size of int= %u bytes",sizeof(inttype));
	printf("\nSize of float= %u bytes",sizeof(floattype));
	printf("\nSize of char= %u bytes",sizeof(chartype));
	printf("\nSize of double= %u bytes",sizeof(doubletype));
	printf("\nSize of long double= %u bytes",sizeof(longdoubletype));
	printf("\nSize of short int= %u bytes",sizeof(shortinttype));
	return 0;
}