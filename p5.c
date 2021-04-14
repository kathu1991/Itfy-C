
#include <stdio.h>

int main()
{
   int a = 10;
   int *p;
p=&a;
   printf("\value of   a is: %d", a);
   printf("\nAddress of  a is: %x", &a);
    printf("\nvalue of p   is: %x",p);
      printf("\n Address of p   is: %x",&p);
        printf("\n pointer  p   is: %d",*p);
          printf("\n size  p   is: %d",sizeof(int *)); 
   return 0;
}