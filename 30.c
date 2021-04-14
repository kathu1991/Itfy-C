// Define 3 variables int, char[100], double; print the address of all the variables

#include <stdio.h>
int main()
{
   int num = 10;
    double num2 = 20.05;
      char name[100] = "ITFy";
   printf("\nValue of integer variable  is: %d", num);
   printf("\nAddress of integer  variable num is: %p", &num);
    printf("\nValue of double variable num2  is: %f", num2);
   printf("\nAddress of double  variable num2 is: %p", &num2);
    printf("\nValue of string variable  is: %s", name);
   printf("\nAddress of string  variable name is: %p", &name);
   return 0;
}