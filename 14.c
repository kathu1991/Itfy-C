
//Concat n strings 
#include<stdio.h>
#include <string.h>
int main(){
     char a[100];
     char b[100] ;
     
  printf("\n Enter First string\n");
  scanf("%s",&a);
 printf("\n Enter Second string\n");
  scanf("%s",&b);


printf("Concat String is %s\n",   strcat(a,b));
    return 0;

}