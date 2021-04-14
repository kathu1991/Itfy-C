#include<stdio.h>

int main(){
    int *p1,*p2;
    int a=10;
    int b=20;
    p1=&a;
    p2=&b;
    printf("befor swap of %d ,%d ",*p1,*p2);  

    int *temp;
    temp=p1;
    p1=p2;
    p2=temp;

     printf("\n After swap of %d ,%d ",*p1,*p2);  
    return 0;
}