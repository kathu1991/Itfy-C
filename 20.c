// Print integer value in octal, decimal and hex value
#include <stdio.h>
 
int main()
{
    int value=10;
 
    printf("Decimal value is: %d\n",value);
    printf("\nOctal value is: %o\n",value);
    printf("\nHexadecimal value is (Alphabet in small letters): %x\n",value);
    printf("\nHexadecimal value is (Alphabet in capital letters): %X\n",value);
 
    return 0;
}