//Writeaprogram thatinputthemealchargeofacustomer.Thetaxshouldbe20%ofthemealcost.Thetipshouldbe15%ofthetotalafteraddingthetax.Displaythetotalbillonthescreenusingfunction

#include<stdio.h>
void bill(int a)
{
	int tax,tip,total;
	tax=(20*a)/100;
	tip=(15*(tax+a))/100;
	total=a+tax+tip;
	printf("Bill:\nPrice= %d\nTax= %d\nTip= %d\nTotal =%d",a,tax,tip,total);
}
int main()
{
	int p;
	printf("Enter the price of the meal: ");
	scanf("%d",&p);
	bill(p);
	return 0;
}