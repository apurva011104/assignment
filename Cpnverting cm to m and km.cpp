#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Conversion of metric dimensions");
	scanf("%f",&a);
	b=a/100;
	c=a/100000;
	printf("%f centimeters = %f meters \n%f centimeters = %f kilometers",a,b,a,c);
	return 0;
}