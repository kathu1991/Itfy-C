#include<stdio.h>
int main(){
      int num=012;
        int revNum=0;
        int tempNum=num;
              while(tempNum!=0){
            int mod=tempNum%10;
            revNum=revNum*10+mod;
            tempNum=tempNum/10;
        }
        printf("Num is %d\n", num);
           printf("Reverse is %d", revNum);
    return 0;

}