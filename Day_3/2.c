#include <stdio.h>
//2 Write a program to check whether a given number is even or odd. 
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // True if num is perfectly divisible by 2
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    
    return 0;
}