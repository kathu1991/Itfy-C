
//Accept integer from users and do bit-wise operation (to understand limit your input from 0 to 15)
#include <stdio.h>
int main()
{
int a , b;

  printf("\nPlease Enter a two numbers\n");
  scanf("%d%d",&a,&b);
printf(" Bitwise AND operation %d & %d : %d\n",a,b,a&b);
printf(" Bitwise OR operation %d | %d : %d\n",a,b,a|b);
printf(" Bitwise XOR operation %d ^ %d : %d\n",a,b,a^b);
printf(" Bitwise ONE'S COMPLEMENT ~ %d operation : %d\n",a,~a);
return 0;
}
