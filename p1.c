
#include <stdio.h>

int main()
{
   int a = 10;
   int b = 20;
   char name[100] = "ITFy";
    printf("\nAddress of main  variable  is: %x",main);
     printf("\n value of a   is: %d",a);
   printf("\n Address of a variable b is: %x", &a);
      printf("\n Value of b   is: %x", b);
   printf("\n Address of b   is: %x", &b);
   printf("\n Address of string  variable name is: %x", &name);
   return 0;
}