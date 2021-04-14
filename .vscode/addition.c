 #include<stdio.h>
 #include <stdlib.h>
#include <string.h>
check(){
    int arr[]={1,2,3};
char ch[]="karthik";
   int n=sizeof(arr)/sizeof(int);
      printf("size of arr is %d \n",n);
         int charLen=strlen(ch);
               printf("char size is %d \n",charLen);
 for(int i=0;i<3;i++){

        int el=arr[i];
     
        printf("element is %d \n",el);
    }
}
int main(){
   
int a=10;
int b=20;
int c=a+b;
printf("sum is %d \n",c);
check();
return 0;
}