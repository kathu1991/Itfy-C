//Accept two integer numbers and do arithmetic operations

#include<stdio.h>
int main()
{
int a,b;

    printf("Enter two numbers: ");  
    scanf("%d%d", &a,&b);
printf("Welcome to ITfy-Me tutorials!\n\n");
printf("The Addition of %d and %d is: %d\n",a,b,a+b);
printf("The Subtraction of %d and %d is: %d\n",a,b,a-b);
printf("The Multiplication of %d and %d is: %d\n",a,b,a*b);
printf("The Division of %d and %d is: %d\n",a,b,a/b);
printf("The Modulus operation of %d and %d is: %d\n",a,b,a%b);
printf("The Incremented value ++a is: %d\n",++a);
printf("The Decremented value --b is: %d\n",--b);
return 0;
}