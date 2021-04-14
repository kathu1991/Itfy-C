//Accept upper case character and  print lower case 

#include<stdio.h>
#include<string.h>
int main(){
  
   char upper;
   int i;
   printf("Enter upper case character: ");
   scanf("%c",&upper);
 
   printf("\nLower Case  is: %c",upper+32);
   return 0;
}