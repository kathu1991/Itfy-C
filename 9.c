// swap without using temp

#include<stdio.h>
int main(){
 double first, second;
      printf("Enter first number: ");
      scanf("%lf", &first);
      printf("Enter second number: ");
      scanf("%lf", &second);
first=first+second;
second=first-second;
first=first-second;

      printf("\nAfter swapping, firstNumber = %.2lf\n", first);
      printf("After swapping, secondNumber = %.2lf", second);
    return 0;
}