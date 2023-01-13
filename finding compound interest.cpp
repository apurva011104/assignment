#include<stdio.h>
#include<math.h>
int main()
{
	float A,P,r,n,t;
	printf("Finding compound interest\n");
	printf("Enter value of principal:");
	scanf("%f",&P);
	printf("Enter value of interest rate:");
	scanf("%f",&r);
	printf("Enter value of time period in years:");
	scanf("%f",&t);
	printf("Enter value of number of times interest applied per time period:");
	scanf("%f",&n);
	A=P*pow(1+(r/n),n*t);
	printf("Compound interest: %f",A);
	return 0;
}