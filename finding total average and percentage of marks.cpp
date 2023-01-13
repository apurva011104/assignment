#include<stdio.h>
int main()
{
	float a,b,c,d,e,f,g,h;
	printf("Calculating total, average and percentage\nEnter marks of subjects");
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
	printf("Marks of English: %f\nMarks of Computer: %f\nMarks of Chemistry: %f\nMarks of Physics: %f\nMarks of Maths: %f",a,b,c,d,e);
	f=a+b+c+d+e;
	g=f/5;
	h=f/5;
	printf("\nTotal= %f\nAverage= %f\nPercentage= %f%",f,g,h);
	return 0;
}