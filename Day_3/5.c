//5. Take values of length and breadth of a rectangle from user and check if it is square or not.
#include <stdio.h>
void main()
{
    int int1, int2;

    printf("Enter Length and Breadth of a rectangle : ");
    scanf("%d %d", &int1, &int2);
    if (int1 == int2)
    {
        printf("The Rectangle is a square\n");
    }
    else
    {
        printf("The Rectangle is not a square\n");
    }
}