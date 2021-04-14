//Accept two decimal numbers and do arithmetic operations
#include <stdio.h>
 int main() 
{
 float r1, r2,mul,sum, div, rem, sub; 
printf("Enter the First number:");
 scanf("%f", &r1); 
printf("Enter the secod number:");
 scanf("%f", &r2);
 sum=r1+r2; 
printf("The sum of given two numbers is:%f\n",sum); 
mul=r1*r2;
printf("The multiplication of two numbers is:%f\n", mul); 
div = r1/r2; 
printf("The division of two numbers is:%f\n", div); 
sub=r1-r2; 
printf("The subtration of rwo numbers is:%f\n", sub);
return 0;
 }