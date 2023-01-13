#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,z;
	printf("finding nth power of any number");
	scanf("%f %f",&x,&y);
	z=pow(x,y);
	printf("%fth power of %f is %f",y,x,z);
	return 0;
}