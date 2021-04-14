
// multiline comment
/* Declare 3 variable one int, one double, one string and initialise
 to value of your choice. Accept 3 inputs once int, one double and one string. Print sum of integer, sum of double (show double value in 2 decimal place) and string concatenation.
  Put inline comments and multiline comments in your program*/



#include<stdio.h>
// single-line comment
#include<string.h>// lmport for String
 int num1=10;
 int userInt;
 char name[100]="ITFy";
 char userString[200];

 double num2=20.00;
 double userDouble;
int main(){

 printf("Enter integer  : ");
 scanf("%d",&userInt);
 printf("\nEnter double :  ");
  scanf("%lf",&userDouble);
 printf("\nEnter String to concat  :  ");
  scanf("%s",&userString);

 printf("Sum of  integer is %d\n",num1+userInt);
  printf("Sum of double is %.2lf\n",num2+userDouble);
   printf("Concat string is %s\n",strcat(name,userString));
    return 0;
}