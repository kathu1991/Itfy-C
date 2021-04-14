
#include <stdio.h>

int main()
{
   int a = 10;
   int b = 20;
   char name[100] = "ITFy";
   int *p;
    printf("\n Address of main  variable  is: %x",main);
   printf("\n Address of a variable b is: %x", &a);
   printf("\n Address of b   is: %x", &b);
   printf("\n Address of string  variable name is: %x", &name);
    printf("\n Address of p   is: %x",&p);
    printf("\n value of p   is: %d",p);
   return 0;
}