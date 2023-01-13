#include<stdio.h>
int main()
{
	float x,y,z;
	printf("To find the third angle of any triangle\nEnter two angles whose sum is less than 180 degrees");
	scanf("%f %f",&x,&y);
	z=180-x-y;
	printf("If two angles of a triangle are %f degrees and %f degrees, then third angle is %f degrees",x,y,z);
	return 0;
}