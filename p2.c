
#include <stdio.h>
int g=123;

int main()
{
   int a = 10;
   int b = 20;
   char name[100] = "ITFy";
    printf("\nAddress of main  variable  is: %x",main);
   printf("\nAddress of a variable b is: %x", &a);
   printf("\nAddress of b   is: %x", &b);
    printf("\value  of g   is: %d", g);
      printf("\nAddress of g   is: %x", &g);
   printf("\nAddress of string  variable name is: %x", &name);
   return 0;
}