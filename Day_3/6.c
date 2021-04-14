//6. Take two int values from user and print greatest among them.   
#include <stdio.h>  
   
int main() {  
    int a, b;  
    printf("Please Enter Two different values\n");  
    scanf("%d %d", &a, &b);  
    
    if(a > b) 
    {
        printf("%d is Greatest\n", a);          
    } 
    else if (b > a)
    { 
        printf("%d is Greatest\n", b);  
    } 
    else 
    {
	printf("Both are Equal\n");
    }
   
    return 0;  
}