#include<stdio.h>
void electricitybill(float a)
{
	float ec,tax,amount;
	if(a>=1 && a<=100)
	{
		ec=2.00*a;
	}
	if(a>=101 && a<=200)
	{
		ec=3.50*a;
	}
	if(a>=201)
	{
		ec=4.50*a;
	}
	tax=(10*ec)/100;
	amount=ec+tax;
	printf("Electricity bill:\n\nElectricity charges:\t\t%g\n\nGeneral sales tax:\t\t%g\n\nAmount due:\t\t%g",ec,tax,amount);
}
int main()
{
	float u;
	printf("Enter number of units consumed:");
	scanf("%g",&u);
	electricitybill(u);
	return 0;
}
