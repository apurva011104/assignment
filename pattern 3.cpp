#include<stdio.h>
int main()
{
  int i,j;

  // outer for loop with decrement operator
  for(i=5;i>=1;i--)
  {

    // inner for loop with increment operator
    for(j=i;j<=5;j++)
    {
      printf("* ");
    }

    // new line
    printf("\n");
  }

  return 0;
}