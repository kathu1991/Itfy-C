
//Accept integer from users and assign to another variable and print both variables
#include<stdio.h>
int main()
{
int number, result;
   
  printf("\nPlease Enter a Integer\n");
  scanf("%d",&number);

result = number;
printf("result = %d \n", result);
result += number; //Same as result = result + a
printf("result = %d \n", result);
result -= number; //Same as result = result - a
printf("result = %d \n", result);
result *= number; //Same as result = result * a
printf("result = %d \n", result);
result /= number; //Same as result = result / a
printf("result = %d \n", result);
result %= number; //Same as result = result % a
printf("result = %d \n", result);
return 0;
}
