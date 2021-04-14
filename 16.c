
//Example of Relational Operators in C-
#include <stdio.h>
int main()
{
int a=10, b=10, c=20;
printf("Welcome to ITfy-Me tutorials!\n\n");
printf("For %d == %d : The output is: %d \n", a, b, a == b); // condition is true
printf("For %d == %d : The output is: %d \n", a, c, a == c); // condition is false
printf("For %d != %d : The output is: %d \n", a, c, a != c); // condition is true
printf("For %d != %d : The output is: %d \n", a, b, a != b); // condition is false
printf("For %d > %d : The output is: %d \n", a, b, a > b);   // condition is false
printf("For %d > %d : The output is: %d \n", a, c, a > c);   // condition is false
printf("For %d < %d : The output is: %d \n", a, b, a < b);   // condition is false
printf("For %d < %d : The output is: %d \n", a, c, a < c);   // condition is true
printf("For %d >= %d : The output is: %d \n", a, b, a >= b); // condition is true
printf("For %d >= %d : The output is: %d \n", a, c, a >= c); // condition is false
printf("For %d <= %d : The output is: %d \n", a, b, a <= b); // condition is true
printf("For %d <= %d : The output is: %d \n", a, c, a <= c); // condition is true
return 0;
}