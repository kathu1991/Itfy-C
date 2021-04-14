#include <stdio.h>
int main(int argc, char **argv)
{

   printf("No of argument is %d",argc);

   for(int i=0;i<argc;i++){
         printf(" argument is argv[%d] and value is ",i,argc);
   }
   return 0;
}