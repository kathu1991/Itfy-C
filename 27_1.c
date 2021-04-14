//Accept lower case character and  print upper case 

#include<stdio.h>
#include<string.h>
int main(){
  
   char lower;
   int i;
   printf("Enter lower case character: ");
   scanf("%c",&lower);
 
   printf("\n Upper Case  is: %c",lower-32);
   return 0;
}