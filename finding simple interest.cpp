#include<stdio.h>
int main()
{
	float S,P,R,T;
	printf("Calculating simple interest\n");
	printf("Enter value of principal:");
	scanf("%f",&P);
	printf("Enter value of rate:");
	scanf("%f",&R);
	printf("Enter value of time:");
	scanf("%f",&T);
	S=P*R*T/100;
	printf("Simple interest= %f",S);
	return 0;
}