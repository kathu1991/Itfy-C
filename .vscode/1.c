 #include<stdio.h>
 #include <stdlib.h>
#include <string.h>

void main(){
int a;
unsigned b;
signed c;
long a1;
unsigned long b1;
signed long b2;
a=2;

int arr[]={1,2,3};

 for(int i=0;i<3;i++){

        int el=arr[i];
    }

// printf("size of int is %d \n", sizeof(int));

printf("value of a is %d \n",a);
a=~a;
printf("value of a is %x \n",a);

// printf("value of a is %u \n",a);
// printf("value of b is %u \n",b);

// printf("size of int is %d \n", sizeof(signed int));
// printf("size of int is %d \n", sizeof(unsigned int));
// printf("size of int is %d \n", sizeof(long));
// printf("size of int is %d \n", sizeof(signed long));
// printf("size of int is %d \n", sizeof(unsigned long));
}

