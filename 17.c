
//Example of Logical Operators in C Programming-
#include <stdio.h>
int main()
{
int a = 10, b = 10, c = 20, answer;
answer = (a == b) && (c > b);
printf("For (%d == %d) && (%d != %d), the output is: %d \n",a,b,b,c,answer); //condition is true
answer = (a == b) && (c < b) && (c>0);
printf("For (%d == %d) && (%d <= %d), the output is: %d \n",a,b,b,c,answer); //condition is false
answer = (a == b) || (b > c);
printf("For (%d == %d) || (%d < %d), the output is: %d \n",a,b,c,b,answer);  //condition is true
answer = (a != b) || (a <= b) || (a>c);
printf("For (%d != %d) || (%d < %d), the output is: %d \n",a,b,c,b,answer);  //condition is true
answer = !(a == b);
printf("For !(%d == %d), the output is: %d \n",a,b,answer);                //condition is false
 
answer = !(a != b);
printf("For !(%d == %d), the output is: %d \n",a,b,answer);                //condition is true
return 0;
}
