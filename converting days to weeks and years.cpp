#include<stdio.h>
int main()
{
	float a,b,c,d;
	printf("Conversion of days into years, weeks and days \nEnter number of days");
	scanf("%f",&a);
	b=a/365;
	c=a/7;
	d=a;
	printf("%f days= %f years \n%f days= %f weeks \n%f days= %f days",a,b,a,c,a,d);
	return 0;
}