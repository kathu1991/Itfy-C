
#include <stdio.h>
int g=123;
int sum(){
    int num1=12;
    int num2=13;
    int add=num1+num2;
      printf("\n Address of inside func  variable  is: %x",&num1);
  printf("\n Address of sum is: %x", sum);

}
int main()
{
   int a = 10;
   int b = 20;
     printf("\n Address of main  variable  is: %x",main);
   printf("\n Address of sum  variable  is: %x",sum);
      printf("\n Address of global  variable  is: %x",&g);
   sum();
 
   return 0;
}