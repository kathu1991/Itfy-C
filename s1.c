#include <stdio.h>

int strLen(char c[]){
int i=0;
while (c[i]!='\0'){
 
i++;
}
return i;

}

int main()
{
   char c[10] = "abcdefghij";
   c[9]="c";
    c[10]="c";
     c[11]="c";
      c[12]="c";
   printf("Size of c is %d",strLen(c));
   return 0;
}