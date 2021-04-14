#include<stdio.h>

int sum(int *p1,int *p2){
    *p1=*p1+*p1;
     *p2=*p2+*p2;;
     int c=*p1+*p2;
     printf("sum of %d ,%d is %d",*p1,*p2,c);
     return 0;
}
int main(){
    int *p1,*p2;
    int a=10;
    int b=20;
    p1=&a;
    p2=&b;
sum(p1,p2);
    return 0;
}