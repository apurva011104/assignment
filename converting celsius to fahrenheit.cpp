#include<stdio.h>
int main()
{
	float a,b;
	printf("Temperature conversion");
	scanf("%f",&a);
	b=((9*a)/5)+32;
	printf("%f degree celsius = %f degree fahrenheit",a,b);
	return 0;
}