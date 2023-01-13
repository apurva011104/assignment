#include<stdio.h>
int main()
{
	float a,b;
	printf("Temperature conversion");
	scanf("%f",&a);
	b=(5*(a-32))/9;
	printf("%f degree fahrenheit = %f degree celsius",a,b);
	return 0;
}