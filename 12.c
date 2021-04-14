//Average of 'n' numbers
#include<stdio.h>
void main()
{
  float a,b;
  float Average;

  printf("Please Enter First number\n");
  scanf("%f",&a);

  printf("Please Enter Second number\n");
  scanf("%f",&b);

  Average =(a+b)/2;
  printf("\nAverage is %.2f", Average);
}